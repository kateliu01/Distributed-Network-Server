#include "robot_state.h"
#include "libserver/packet.h"
#include "robot.h"
#include "libserver/thread_mgr.h"
#include "libserver/message_system.h"
#include "libserver/component_help.h"

// ����Ƿ��Ѷ���
RobotStateType RobotState::Update()
{
    const auto state = GetState();
    if (state > RobotStateType::Login_Connecting&& state != RobotStateType::Game_Connecting)
    {
        const auto socketKey = _pParentObj->GetSocketKey();
        if (socketKey.Socket == INVALID_SOCKET)
        {
            return RobotStateType::Login_Connecting;
        }
    }

    return OnUpdate();
}

void RobotState::EnterState()
{
    // ÿ����һ��״̬��֪ͨ robot mgr
    Proto::RobotSyncState protoState;
    auto pState = protoState.add_states();
    pState->set_account(_pParentObj->GetAccount());
    pState->set_state((int)GetState());

#ifdef LOG_TRACE_COMPONENT_OPEN
    if (_pParentObj->GetSocketKey().Socket != INVALID_SOCKET) {
        std::stringstream os;
        os << "enter state:" << GetRobotStateTypeShortName(GetState());
        ComponentHelp::GetTraceComponent()->Trace(TraceType::Player, _pParentObj->GetSocketKey().Socket, os.str());
    }
#endif

    // ֻ���͸����߳�
    auto pPacket = MessageSystemHelp::CreatePacket(Proto::MsgId::MI_RobotSyncState, nullptr);
    pPacket->SerializeToBuffer(protoState);
    ThreadMgr::GetInstance()->GetMessageSystem()->AddPacketToList(pPacket);
    
    // �ǳ���;�����ֶ���Ref
    pPacket->OpenRef();

    OnEnterState();
}

void RobotState::LeaveState()
{
    OnLeaveState();
}
