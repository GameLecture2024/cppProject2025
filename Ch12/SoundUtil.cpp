#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC);
}

int RandomUtil::GetRandomInt2(int range)
{
	static std::random_device device;
	static std::mt19937 gen(device());
	std::uniform_int_distribution<> dist(1, range);

	return dist(gen);
}

void ConsoleUtil::GoToXy(int x, int y)
{
	static COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
