#include "Runner2.h"

void Runner2::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt2(maxSpeed);	// 1. 캐릭터의 최대 속도 설정
}

void Runner2::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)				// 2. 이동한다.
	{											
		cout << " ";
	}
}

void Runner2::SetShape()
{
	cout << symbol << endl;						// 3. 형태를 그려준다. ~~P
}

void Runner2::Run()
{
	// maxSpeed 제어해주는 함수
	SetMaxSpeed();	     // 변경될 수 있는 함수 (virtual)
	DrawMoveDistance();	 // 변경되면 안되는 함수
	SetShape();			 // 변경될 수 있는 함수	
}

bool Runner2::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else
	{
		isEnd = false;
	}

	return isEnd;
}

void Runner2::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(1); 
		cout << "최소 속도가 1증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMin(1);
		cout << "최대 속도가 1증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯이 없습니다." << endl;
	}
}

void Runner2::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "최소 속도가 "<< amount  << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "최대 속도가 "<< amount << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯이 없습니다." << endl;
	}
}

void Runner2::SetMin(int value)
{
	if (maxSpeed < value)
	{
		value = maxSpeed;
	}

	minSpeed += value;
}

void Runner2::SetMax(int value)
{
	if (10 < value)
	{
		value = 10;
	}

	maxSpeed += value;
}

void Runner2::Initialize()
{
	run = 0;       // 모든 주자가 0에서 시작
	isEnd = false; // 우승을 한게 아니다.

}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1;  // 아이콘,  스킬 이름, 효과 : 플레이어의 최대 속도를 1증가 시켜주는 스킬이다.
	run += RandomUtil::GetRandomInt2(applyMaxSpeed);
}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt2(100);

	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
	{
		cout << symbol << endl;
	}
	
}

void Player::ShowPlayerGameInfo()
{
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << "보유 금액 : " << money << endl;
}

void Enemy::SetMaxSpeed()
{
	Runner2::SetMaxSpeed();
}

void Enemy::SetShape()
{
	Runner2::SetShape();
}
