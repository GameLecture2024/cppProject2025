#pragma once

#include "Common.h"
#include "SoundUtil.h"

class Runner2
{
private:
	
	bool isEnd;
protected:
	int run;
	int minSpeed;
	int maxSpeed;

	string symbol;
	
	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();

public:
	Runner2() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E") {}
	Runner2(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	void Run();
	bool CheckEndLine(int length);
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


