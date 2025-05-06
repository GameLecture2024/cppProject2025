#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// [teller]:~~~~~~~~~~대사.
class Actor
{
public:
	void Tell(const string& teller, const string& story)
	{
		cout << endl;
		cout << "[" << teller << "]:";
		cout << story << std::endl;
	}

	bool Selection(const string& teller, const string& story1, const string& story2)
	{
		int input = 0;
		cout << "1: " << story1 << " 2: " << story2 << endl;
		cin >> input;
		if (input == 1)
		{
			Tell(teller, story1);
			return true;
		}
		else if (input == 2)
		{
			Tell(teller, story2);
			return false;
		}
		else
		{
			cout << "정확한 입력을 해주세요" << endl;
			return Selection(teller, story1, story2);
		}
	}
};

