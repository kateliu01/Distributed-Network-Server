#include "create_world_component.h"
#include "libresource/resource_manager.h"
#include "libserver/message_system_help.h"
#include "libserver/message_system.h"
#include "libresource/resource_help.h"

void CreateWorldComponent::Awake()
{
    // message
    auto pMsgSystem = GetSystemManager()->GetMessageSystem();
    pMsgSystem->RegisterFunction(this, Proto::MsgId::MI_AppInfoSync, BindFunP1(this, &CreateWorldComponent::HandleAppInfoSync));
    pMsgSystem->RegisterFunction(this, Proto::MsgId::MI_NetworkDisconnect, BindFunP1(this, &CreateWorldComponent::HandleNetworkDisconnect));

    //pMsgSystem->RegisterFunction(this, Proto::MsgId::L2M_QueryWorld, BindFunP1(this, &CreateWorldComponent::HandleQueryWorld));

    pMsgSystem->RegisterFunction(this, Proto::MsgId::G2M_RequestWorld, BindFunP1(this, &CreateWorldComponent::HandleRequestWorld));
    pMsgSystem->RegisterFunction(this, Proto::MsgId::MI_BroadcastCreateWorld, BindFunP1(this, &CreateWorldComponent::HandleBroadcastCreateWorld));
}

void CreateWorldComponent::BackToPool()
{
    _creating.clear();
    _created.clear();
}

void CreateWorldComponent::HandleAppInfoSync(Packet* pPacket)
{
    AppInfoSyncHandle(pPacket);
}

void CreateWorldComponent::HandleNetworkDisconnect(Packet* pPacket)
{
    //SOCKET socket = pPacket->GetSocket();
    //auto iter = std::find_if(_apps.begin(), _apps.end(), [&socket](auto pair)
    //{
    //	return pair.second.Socket == socket;
    //});

    //if (iter == _apps.end())
    //	return;

    //auto appId = iter->second.AppId;
    //_apps.erase(iter);

    //// ���ߵ�Space���Ƿ������ڴ����ĵ�ͼ
    //do
    //{
    //	auto iterCreating = std::find_if(_creating.begin(), _creating.end(), [&appId](auto pair)
    //	{
    //		return pair.second == appId;
    //	});

    //	if (iterCreating == _creating.end())
    //		break;

    //	// ���ڴ�����ʱ��space���̶Ͽ��ˣ����ҽ��̴���
    //	auto worldId = iterCreating->first;
    //	AppInfo appInfo;
    //	if (!GetOneApp(APP_SPACE, appInfo))
    //	{
    //		LOG_ERROR("appmgr recv create map. but no space process. map id:" << worldId);
    //	}
    //	else
    //	{
    //		Proto::CreateWorld protoCreate;
    //		protoCreate.set_world_id(worldId);
    //		protoCreate.set_request_world_sn(0);
    //		protoCreate.set_request_game_id(0);
    //		MessageSystemHelp::SendPacket(Proto::MsgId::G2S_CreateWorld, appInfo.Socket, protoCreate);
    //	}

    //	_creating.erase(iterCreating);

    //} while (true);

    //// ���ߵ�Space�����Ѵ����Ĺ�����ͼ��ȫ��ɾ��
    //do
    //{
    //	auto iterCreated = std::find_if(_created.begin(), _created.end(), [&appId](auto pair)
    //	{
    //		return Global::GetInstance()->GetAppIdFromSN(pair.second) == appId;
    //	});


    //	if (iterCreated == _created.end())
    //		break;

    //	_created.erase(iterCreated);
    //} while (true);


    //// ���ߵ�Space�ϴ����ĸ�����ͼ
    //do 
    //{
    //	const auto iter = std::find_if(_dungeons.begin(), _dungeons.end(), [&appId](auto pair)
    //	{
    //		return pair.second == appId;
    //	});

    //	if (iter == _dungeons.end())
    //		break;

    //	_dungeons.erase(iter);
    //} while (true);
}

void CreateWorldComponent::HandleRequestWorld(Packet* pPacket)
{
    auto proto = pPacket->ParseToProto<Proto::RequestWorld>();

    auto worldId = proto.world_id();
    auto pResMgr = ResourceHelp::GetResourceManager();
    const auto mapConfig = pResMgr->Worlds->GetResource(worldId);
    if (mapConfig == nullptr)
    {
        LOG_ERROR("can't find map config. id:" << worldId);
        return;
    }

    if (!mapConfig->IsType(ResourceWorldType::Public))
    {
        LOG_ERROR("appmgr recv create dungean map. map id:" << worldId);
        return;
    }

    // ���ڴ����У��ȴ�
    const auto iter = _creating.find(worldId);
    if (iter != _creating.end())
        return;

    // ��Ϊ���첽���п��ܷ��͹�����ʱ���Ѿ���������
    const auto iter2 = _created.find(worldId);
    if (iter2 != _created.end())
        return;

    AppInfo appInfo;
    if (!GetOneApp(APP_SPACE, &appInfo))
    {
        LOG_ERROR("appmgr recv create map. but no space process. map id:" << worldId);
        return;
    }

    //LOG_DEBUG("create world. appId:" << appInfo.AppId << " type:" << AppTypeMgr::GetName(appInfo.AppType).c_str());
    Proto::CreateWorld protoCreate;
    protoCreate.set_world_id(worldId);
    protoCreate.set_request_world_sn(0);
    protoCreate.set_request_game_id(0);
    MessageSystemHelp::SendPacket(Proto::MsgId::G2S_CreateWorld, protoCreate, APP_SPACE, appInfo.AppId);

    _creating[worldId] = appInfo.AppId;
}

void CreateWorldComponent::HandleQueryWorld(Packet* pPacket)
{
    //auto proto = pPacket->ParseToProto<Proto::QueryWorld>();
    //const auto worldSn = proto.world_sn();

    //Proto::QueryWorldRs protoQueryRs;
    //protoQueryRs.set_world_sn(worldSn);

    //const auto iter = _dungeons.find(worldSn);
    //if (iter == _dungeons.end())
    //	protoQueryRs.set_return_code(Proto::QueryWorldRs::QueryWorldReturnCode_Failed);
    //else
    //	protoQueryRs.set_return_code(Proto::QueryWorldRs::QueryWorldReturnCode_OK);

    //MessageSystemHelp::SendPacket(Proto::MsgId::L2M_QueryWorldRs, pPacket->GetSocket(), protoQueryRs);
}

void CreateWorldComponent::HandleBroadcastCreateWorld(Packet* pPacket)
{
    auto proto = pPacket->ParseToProto<Proto::BroadcastCreateWorld>();
    const auto worldId = proto.world_id();
    const auto worldSn = proto.world_sn();
    const auto gameId = proto.request_game_id();

    const auto pResMgr = ResourceHelp::GetResourceManager();
    const auto pWorldRes = pResMgr->Worlds->GetResource(worldId);
    if (pWorldRes->IsType(ResourceWorldType::Public))
    {
        _created[worldId] = proto.world_sn();
        _creating.erase(worldId);
    }
    else
    {
        _dungeons[worldSn] = gameId;
    }
}
