


// Winmm.lib  : Window Multi Media Library

#include "SoundUtil.h"
#include "Runner2.h"
int main()
{
	//SoundUtil::PlayBGM(_T("sound.wav"));

	Runner2* runA = new Player();
	Runner2* runB = new Enemy("B");
	Runner2* runC = new Enemy();
	Runner2* runD = new Enemy("D");

	string line = "===============================================================================";

	int endline = line.length();

	while (true)
	{
		Sleep(1000);   // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다.

		cout << line << endl;
		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

		if (runA->CheckEndLine(endline)
			|| runB->CheckEndLine(endline)
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endline))
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
}