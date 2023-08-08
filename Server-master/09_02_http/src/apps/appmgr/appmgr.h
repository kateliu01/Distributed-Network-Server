#pragma once

#include "libserver/console.h"

#include "console_app_component.h"
#include "login_sync_component.h"
#include "console_cmd_app.h"

inline void InitializeComponentAppMgr(ThreadMgr* pThreadMgr)
{
	pThreadMgr->CreateComponent<LoginSyncComponent>();

    auto pConsole = pThreadMgr->GetEntitySystem()->GetComponent<Console>();
    pConsole->Register<ConsoleCmdApp>("app");

    // ÿ���̷߳�һ��
    pThreadMgr->CreateComponent<ConsoleAppComponent>(LogicThread, true);
}
