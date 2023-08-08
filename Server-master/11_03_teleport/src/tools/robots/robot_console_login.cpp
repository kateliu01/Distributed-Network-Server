#include "robot_console_login.h"
#include "robot.h"

#include "libserver/common.h"
#include "libserver/thread_mgr.h"

#include <iostream>
#include "global_robots.h"
#include "libserver/yaml.h"
#include "libserver/global.h"
#include "robot_component_create.h"

void RobotConsoleLogin::RegisterHandler()
{
	OnRegisterHandler("-a", BindFunP1(this, &RobotConsoleLogin::HandleLogin));
	OnRegisterHandler("-ex", BindFunP1(this, &RobotConsoleLogin::HandleLoginEx));
	OnRegisterHandler("-clean", BindFunP1(this, &RobotConsoleLogin::HandleLoginClean));
}

void RobotConsoleLogin::HandleHelp()
{
	std::cout << "\t-a account.\t\tlogin by account" << std::endl;
	std::cout << "\t-ex account count.\tbatch login, account is prefix, count as number" << std::endl;
	std::cout << "\t-clean.\t\tclean all logined account." << std::endl;
}

void RobotConsoleLogin::HandleLogin(std::vector<std::string>& params)
{
	if (!CheckParamCnt(params, 1))
		return;

	// ������¼ʱ����¼�����̣߳���������cmd
    Proto::RobotCreate proto;

	ThreadMgr::GetInstance()->GetEntitySystem()->AddComponent<RobotComponentCreate>(params[0], 0, 0);
	GlobalRobots::GetInstance()->SetRobotsCount(1);
}

void RobotConsoleLogin::HandleLoginEx(std::vector<std::string>& params) const
{
	if (!CheckParamCnt(params, 2))
		return;

	auto pThreadMgr = ThreadMgr::GetInstance();

	const int count = std::atoi(params[1].c_str());
	if (count == 0)
	{
		std::cout << "input is error. see: -help" << std::endl;
		return;
	}

    const auto pGlobal = Global::GetInstance();
    auto pYaml = pThreadMgr->GetEntitySystem()->GetComponent<Yaml>();
    const auto pConfig = pYaml->GetConfig(pGlobal->GetCurAppType());
    const auto pAppConfig = dynamic_cast<AppConfig*>(pConfig);

    // �߳�����
    auto threadCnt = pAppConfig->LogicThreadNum;
    threadCnt = threadCnt <= 0 ? 1 : threadCnt;

    // ÿ���߳���robot����
    int perThreadRobotCnt = static_cast<int>(std::ceil(count / threadCnt));
    perThreadRobotCnt = perThreadRobotCnt < 1 ? 1 : perThreadRobotCnt;

    for (int i = 0; i < threadCnt; i++)
    {
        const int min = i * perThreadRobotCnt;
        int max = min + perThreadRobotCnt;
        max = max > count ? count : max;
        pThreadMgr->CreateComponent<RobotComponentCreate>(LogicThread, false, params[0], min, max);

        if (max >= count)
            break;
    }

	GlobalRobots::GetInstance()->SetRobotsCount(count);
}

void RobotConsoleLogin::HandleLoginClean(std::vector<std::string>& params)
{
	std::cout << "close all." << std::endl;
	_threads.clear();
	GlobalRobots::GetInstance()->CleanRobotsCount();
}
