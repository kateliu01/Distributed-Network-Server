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
    const int requestGameId = protoWorld.request_game_id();
    const uint64 requestWorldSn = protoWorld.request_world_sn();

    auto worldSn = Global::GetInstance()->GenerateSN();
    ThreadMgr::GetInstance()->CreateComponentWithSn<World>(worldSn, worldId);

    //LOG_DEBUG("create world. map id:" << worldId << " world sn:" << newWorldSn);

    const auto pResMgr = ResourceHelp::GetResourceManager();
    const auto pWorldRes = pResMgr->Worlds->GetResource(worldId);
    if (pWorldRes->IsType(ResourceWorldType::Dungeon) && requestWorldSn == 0)
    {
        LOG_ERROR("create world error. dungeon is created. but requestWorldSn == 0");
    }

    // ��� requestWorldSn == 0���㲥������game, appmgr
    // ��� requestWorldSn != 0����㲥��ָ���� worldproxy �� appmgr
    Proto::BroadcastCreateWorld protoRs;
    protoRs.set_world_id(worldId);
    protoRs.set_world_sn(worldSn);
    protoRs.set_request_game_id(requestGameId);
    protoRs.set_request_world_sn(requestWorldSn);

    if ((Global::GetInstance()->GetCurAppType() & APP_APPMGR) == 0)
    {
        // �������в����� AppMgr, ��AppMgr������Ϣ
        MessageSystemHelp::SendPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, APP_APPMGR);
    }

    // �������в����� AppGame
    if ((Global::GetInstance()->GetCurAppType() & APP_GAME) == 0)
    {
        if (requestWorldSn == 0)
        {
            // ������Game���̷�������
            MessageSystemHelp::SendPacketToAllApp(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, APP_GAME);
        }
        else
        {
            // ��ָ��Game��������
            MessageSystemHelp::SendPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, pPacket);
        }
    }

    if ((Global::GetInstance()->GetCurAppType() & APP_GAME) != 0 || (Global::GetInstance()->GetCurAppType() & APP_APPMGR) != 0)
    {
        // �������а�����AppGame AppMgr����һ������Ҫ��ת��Ϣ
        MessageSystemHelp::DispatchPacket(Proto::MsgId::MI_BroadcastCreateWorld, protoRs, nullptr);
    }
}
