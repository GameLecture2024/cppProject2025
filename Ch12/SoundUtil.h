#pragma once

#include <iostream>
using namespace std;

#include <Windows.h>
#include <tchar.h>   
#include <random>


class RandomUtil
{
public:
	static int GetRandomInt2(int range);
};

class SoundUtil
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);

};

class ConsoleUtil
{
public:
	static void GoToXy(int x, int y);
};


