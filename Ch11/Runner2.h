#pragma once

#include "Common.h"
#include "Utility.h"

class Runner2
{
private:
	int run;
	bool isEnd;
protected:
	int minSpeed;
	int maxSpeed;

	string symbol;

public:
	Runner2() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E") {}
	Runner2(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	virtual void Run();
	bool CheckEndLine(int length);
};

class Player : public Runner2
{
private:

public:
	Player() : Runner2()
	{
		symbol = "P";
	}

	Player(string symbol) :Runner2(symbol) {}

public:
	void Upgrade();
};

class Enemy : public Runner2
{

};

