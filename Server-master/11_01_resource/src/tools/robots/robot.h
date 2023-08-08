#pragma once

#include "libserver/state_template.h"
#include "libserver/robot_state_type.h"

#include "libplayer/player.h"

#include "robot_state.h"

class Robot : public Player, public StateTemplateMgr<RobotStateType, RobotState, Robot>, virtual public IAwakeFromPoolSystem<std::string>
{
public:
    void Awake(std::string account) override;
    void BackToPool() override;    
    void Update();
    void NetworkDisconnect();

    void SetSocketKey(SocketKey key);

protected:
    void RegisterState() override;
};

