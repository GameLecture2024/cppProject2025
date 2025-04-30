#pragma once

#include "Common.h"
#include "SoundUtil.h"

enum PlayerStat
{
	MINSPEED, MAXSPEED , NONE
};

class Runner2
{
private:
	
	bool isEnd;
protected:
	PlayerStat stat;
	int run;
	int minSpeed;
	int maxSpeed;

	int money;

	string symbol;
	
	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();

public:
	Runner2() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E"), stat(PlayerStat::NONE), money(1000) {}
	Runner2(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol), stat(PlayerStat::NONE), money(1000) {}
	void Run();
	bool CheckEndLine(int length);
	
	void Upgrade(PlayerStat selectedStat);
	void Upgrade(PlayerStat selectedStat, int amount);
	void SetMin(int value);
	void SetMax(int value);

	void Initialize();
};

class Player : public Runner2
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;
public:
	Player() : Runner2()
	{
		symbol = "P";
	}

	Player(string symbol) :Runner2(symbol) {}

	void ShowPlayerGameInfo();

};

class Enemy : public Runner2
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;
public:
	Enemy() : Runner2()
	{
		symbol = "E";
	}

	Enemy(string symbol) :Runner2(symbol) {}
};


