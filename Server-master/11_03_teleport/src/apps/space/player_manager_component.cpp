#include "player_manager_component.h"

void PlayerManagerComponent::Awake()
{

}

void PlayerManagerComponent::BackToPool()
{
    // ��һ��Mgr�����ٵ�ʱ������Ӧ�����κ����
    if (!_players.empty())
    {
        LOG_ERROR("called PlayerManagerComponent BackToPool. but it has player.");
    }

    _players.clear();
}

Player* PlayerManagerComponent::AddPlayer(const uint64 playerSn, uint64 worldSn, NetIdentify* pNetIdentify)
{
    const auto iter = _players.find(playerSn);
    if (iter != _players.end())
    {
        std::cout << "AddPlayer error." << std::endl;
        return nullptr;
    }

    const auto pPlayer = GetSystemManager()->GetEntitySystem()->AddComponent<Player>(pNetIdentify, playerSn, worldSn);
    _players[playerSn] = pPlayer;
    return pPlayer;
}

Player* PlayerManagerComponent::GetPlayerBySn(const uint64 playerSn)
{
    const auto iter = _players.find(playerSn);
    if (iter == _players.end())
        return nullptr;

    return iter->second;
}

void PlayerManagerComponent::RemovePlayerBySn(const uint64 playerSn)
{
    const auto iter = _players.find(playerSn);
    if (iter == _players.end())
        return;

    Player* pPlayer = iter->second;
    _players.erase(playerSn);

    GetSystemManager()->GetEntitySystem()->RemoveComponent(pPlayer);
}

int PlayerManagerComponent::OnlineSize() const
{
    return _players.size();
}

std::map<uint64, Player*>* PlayerManagerComponent::GetAll()
{
    return &_players;
}
