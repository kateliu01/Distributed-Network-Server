#pragma once
#include "libserver/component.h"
#include "libserver/system.h"

// ��ת�������
// 1,��ת��Ҫ�ȴ�Ŀ���ͼ�������
// 2,��ת��Ҫ�ȴ�������ݴ���ʵ��ͼ��ͬ��

enum class TeleportFlagType
{
    None = 0,
    Waiting = 1,
    Completed = 2,
};

template<typename T>
struct TeleportFlag
{
public:
    friend class TeleportObject;

    TeleportFlagType Flag;
    void SetValue(T value)
    {
        this->Value = value;
        this->Flag = TeleportFlagType::Completed;
    }

    T GetValue()
    {
        return this->Value;
    }

    bool IsCompleted()
    {
        return this->Flag == TeleportFlagType::Completed;
    }

private:
    T Value;
};

class TeleportObject :public Component<TeleportObject>, public IAwakeFromPoolSystem<int, uint64>
{
public:
    void Awake(int worldId, uint64 playerSn) override;
    void BackToPool() override;

    TeleportFlag<uint64> FlagWorld;
    TeleportFlag<bool> FlagPlayerSync;

    int GetTargetWorldId() const;
    uint64 GetPlayerSN() const;

private:
    int _targetWorldId{ 0 };
    uint64 _playerSn{ 0 };
};
