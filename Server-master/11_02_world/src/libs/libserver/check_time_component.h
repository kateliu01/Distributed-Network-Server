#pragma once
#include "common.h"

class CheckTimeComponent
{
public:
    void CheckBegin();
    void CheckPoint(std::string key);

protected:
    uint64 _beginTick;

    std::map<std::string, uint64> _aveTime;  // ƽ��ʱ��
    std::map<std::string, uint64> _maxTicks;
};

