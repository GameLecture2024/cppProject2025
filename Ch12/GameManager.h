#pragma once

// main() 프로그램 시작 -> 게임 시작 -> 게임 종료

#include "Runner2.h"
#include <conio.h>

class GameManager
{
private:
	Player* player;

	void ShowTitle();
	void ShopPhase();
	void GamePhase();

public:
	GameManager()
	{
		player = new Player();
	}
	void Play();


};

