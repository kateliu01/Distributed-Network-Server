#pragma once
#include <iostream>

#include "entity.h"
#include "system.h"

class EntitySystem
{
public:
    virtual ~EntitySystem() = default;

    template <class T, typename... TArgs>
    T* CreateComponent(TArgs&& ... args);

    virtual bool Update();
    void Dispose();

protected:
    std::list<IInitializeSystem*> _initializeSystems;
    std::list<IUpdateSystem*> _updateSystems;
};

template<class T, typename ... TArgs>
T* EntitySystem::CreateComponent(TArgs&& ... args)
{
    std::cout << "create obj:" << typeid(T).name() << std::endl;
    auto component = new T(std::forward<TArgs>(args)...);

    const auto objInit = dynamic_cast<IInitializeSystem*>(component);
    if (objInit != nullptr)
    {
        _initializeSystems.push_back(objInit);
        return component;
    }

    // ��Щ������ܲ���Ҫ IInitializeSystem��ֱ�ӽ���UpdateSystem
    const auto objUpdate = dynamic_cast<IUpdateSystem*>(component);
    if (objUpdate != nullptr)
    {
        _updateSystems.push_back(objUpdate);
        return component;
    }

    return component;
}

