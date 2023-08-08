#include "world_operator_component.h"
#include "world.h"

#include "libserver/thread_mgr.h"
#include "libserver/message_system.h"

#include "libresource/resource_manager.h"
#include "libresource/resource_help.h"

void WorldOperatorComponent::Awake()
{
    auto pMsgSystem = GetSystemManager()->GetMessageSystem();
    pMsgSystem->RegisterFunction(this, Proto::MsgId::G2S_CreateWorld, BindFunP1(this, &WorldOperatorComponent::HandleCreateWorld));
}

void WorldOperatorComponent::BackToPool()
{

}

void WorldOperatorComponent::HandleCreateWorld(Packet* pPacket)
{
    auto protoWorld = pPacket->ParseToProto<Proto::CreateWorld>();
    int worldId = protoWorld.world_id();
    const int gameAppId = protoWorld.game_app_id();
    const uint64 lastWorldSn = protoWorld.last_world_sn();

    auto worldSn = Global::GetInstance()->GenerateSN();
    ThreadMgr::GetInstance()->CreateComponentWithSn<World>(worldSn, worldId);

    //LOG_DEBUG("create world. map id:" << worldId << " world sn:" << newWorldSn);

    const auto pResMgr = ResourceHelp::GetResourceManager();
    const auto pWorldRes = pResMgr->Worlds->GetResource(worldId);
    if (pWorldRes->IsType(ResourceWorldType::Dungeon) && lastWorldSn == 0)
    {
        LOG_ERROR("create world error. dungeon is created. but requestWorldSn == 0");
    }

    // ��� requestWorldSn == 0���㲥������game, appmgr
    // ��� requestWorldSn != 0����㲥��ָ���� worldproxy �� appmgr
    Proto::BroadcastCreateWorld protoRs;
    protoRs.set_world_id(worldId);
    protoRs.set_world_sn(worldSn);
    protoRs.set_last_world_sn(lastWorldSn);

    if ((Global::GetInstance()->GetCurAppType() & APP_APPMGR) == 0)
    {
        // �������в����� AppMgr, ��AppMgr������Ϣ
        MessageSystemHelp::SendPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, APP_APPMGR);
    }

    // �������в����� AppGame
    if ((Global::GetInstance()->GetCurAppType() & APP_GAME) == 0)
    {
        if (gameAppId != 0)
        {
            // ��ָ��Game��������
            MessageSystemHelp::SendPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, APP_GAME, gameAppId);
        }
        else
        {
            // ������Game���̷�������
            MessageSystemHelp::SendPacketToAllApp(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, APP_GAME);
        }
    }

    if ((Global::GetInstance()->GetCurAppType() & APP_GAME) != 0 || (Global::GetInstance()->GetCurAppType() & APP_APPMGR) != 0)
    {
        // �������а�����AppGame AppMgr����һ������Ҫ��ת��Ϣ
        MessageSystemHelp::DispatchPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, nullptr);
    }
}
