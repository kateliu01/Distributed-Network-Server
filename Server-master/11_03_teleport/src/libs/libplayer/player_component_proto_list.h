#pragma once

#include "libserver/common.h"
#include "libserver/component.h"
#include "libserver/system.h"

#include <sstream>

// player ���������PlayerList
class PlayerComponentProtoList :public Component<PlayerComponentProtoList>, public IAwakeFromPoolSystem<>
{
public:
    void Awake() override {}
    void BackToPool() override;

    void Parse(Proto::PlayerList& proto);
    std::stringstream* GetProto(uint64 sn);

private:
    std::map<uint64, std::stringstream*> _protos;
};

