#include "GameManager.h"

void GameManager::ShowTitle()
{
    // 타이틀 먼저 보여주는 코드 실행
    //ConsoleUtil::GoToXy(30, 0);
    cout << "제목 실행" << endl;
    //SoundUtil::PlayTitleSound(_T("sound.wav"));  // 사운드 출력이 끝날 때 까지 다음 코드로 넘어가지 않는다.
}

void GameManager::ShopPhase()
{
    // 플레이어의 강화 시스템 필요
    system("cls");
    cout << "상점에 진입했습니다." << endl;

    int input = 0;
    cout << "행동을 선택해주세요." << endl;
	cout << "1_minSpeed가 1만큼 증가합니다." << endl;
	cout << "2_maxSpeed가 1만큼 증가합니다." << endl;
	cout << "3_게임이 시작합니다." << endl;

    cin >> input;    
    if (input == 1)
    {
		player->Upgrade(PlayerStat::MINSPEED, 1);
    }
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 1);
	}
	else if (input == 3)
	{
		 cout << "게임이 시작합니다." << endl;
	}

}

void GameManager::GamePhase()
{
	Runner2* runB = new Enemy("B");
	Runner2* runC = new Enemy();
	Runner2* runD = new Enemy("D");

	string line = "===============================================================================";

	int endline = line.length();

	player->Initialize();
	runB->Initialize();
	runC->Initialize();
	runD->Initialize();

	Sleep(1000);

	while (true)
	{
		Sleep(500);   // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다.


		cout << line << endl;
		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

		player->ShowPlayerGameInfo();

		if (player->CheckEndLine(endline)
			|| runB->CheckEndLine(endline)
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A가 1등을 했습니다." << endl;
	}

	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 했습니다." << endl;
	}

	if (runC->CheckEndLine(endline))
	{
		cout << "C가 1등을 했습니다." << endl;
	}

	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 했습니다." << endl;
	}

	cout << "상점 페이즈를 진행하기 위해서 버튼을 입력해주세요" << endl;
	_getch();
}

void GameManager::Play()
{
    ShowTitle();
    
    while (true)
    {
        ShopPhase();
        GamePhase();
    }
   
}
