// 클래스를 만드는 연습.

#include "Base.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();
	derived->Do();

	delete derived;
}

/*
*  달리기 게임 
*   -----------------------
* 	1
* 	2
* 	3
* 	4
*   ------------------------
*/

#include "Runner2.h"
int main()
{
	ClassDefaultInfo();
	system("cls");
	std::cout << "달리기 게임 코드" << std::endl;	// Game Title

	// 사운드를 출력해주는 기능을 작성
    SoundUtil::PlayBGM1(_T("sound.wav"));

	Runner2* runA = new Player();
	Runner2* runB = new Runner2("B");
	Runner2* runC = new Runner2();
	Runner2* runD = new Runner2("D");
	
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