#pragma once

#include <random>
#include <Windows.h>
#include <tchar.h>

// static : 클래스 객체 없이 범위로 함수를 호출할 수 있다.

class RandomUtil
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil
{
public:
	static void GotoXY(int x, int y);
};

class SoundUtil
{
public:
	static void PlayTitleSound1(LPCWSTR filename);
	static void PlayBGM1(LPCWSTR filename);
}

