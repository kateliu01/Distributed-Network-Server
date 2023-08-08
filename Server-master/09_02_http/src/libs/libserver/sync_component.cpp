#include "sync_component.h"
#include "log4_help.h"
#include "packet.h"
#include "component_help.h"

void AppInfo::Parse(Proto::AppInfoSync proto)
{
    auto pYaml = ComponentHelp::GetYaml();
    this->AppId = proto.app_id();
    this->AppType = static_cast<APP_TYPE>(proto.app_type());
    this->Online = proto.online();

    auto pConfig = pYaml->GetIPEndPoint(this->AppType, this->AppId);
    this->Ip = pConfig->Ip;
    this->Port = pConfig->Port;
}

void SyncComponent::AppInfoSyncHandle(Packet* pPacket)
{
    auto proto = pPacket->ParseToProto<Proto::AppInfoSync>();

    const auto iter = _apps.find(proto.app_id());
    if (iter == _apps.end())
    {
        AppInfo syncAppInfo;
        syncAppInfo.Parse(proto);
        syncAppInfo.Socket = pPacket->GetSocketKey().Socket;
        _apps[syncAppInfo.AppId] = syncAppInfo;
    }
    else
    {
        const int appId = proto.app_id();
        _apps[appId].Online = proto.online();
        _apps[appId].Socket = pPacket->GetSocketKey().Socket;
    }
}

bool SyncComponent::GetOneApp(APP_TYPE appType, AppInfo& info)
{
    if (_apps.empty())
    {
        LOG_ERROR("GetApp failed. no more. appType:" << GetAppName(appType));
        return false;
    }

    // �ҵ���һ��ͬ��������
    auto iter = std::find_if(_apps.begin(), _apps.end(), [&appType](auto pair)
        {
            return (pair.second.AppType & appType) != 0;
        });

    if (iter == _apps.end())
    {
        LOG_ERROR("GetApp failed. no more. appType:" << appType);
        return false;
    }

    // ������������ݣ��ҵ���Сֵ
    auto min = iter->second.Online;
    int appId = iter->first;
    for (;iter != _apps.end();++iter)
    {
        if (min == 0)
            break;

        if ((iter->second.AppType & appType) == 0)
            continue;

        if (iter->second.Online < min)
        {
            min = iter->second.Online;
            appId = iter->first;
        }
    }

    // ���ݼ�1,�Ա���˲������ͬһ��App�ϣ��´�ͬ�����ݻὫ�串��Ϊ��ʵֵ
    _apps[appId].Online += 1;
    info = _apps[appId];
    return true;
}

void SyncComponent::CmdShow()
{
    LOG_DEBUG("------------------------------------");
    for (auto pair : _apps)
    {
        LOG_DEBUG("appId:" << std::setw(4) << pair.first <<
            " type:" << GetAppName(pair.second.AppType) <<
            " online:" << pair.second.Online);
    }
}
