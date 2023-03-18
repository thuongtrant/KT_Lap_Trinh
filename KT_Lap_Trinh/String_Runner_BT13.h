#pragma once
#include <iostream>
#include <string>
#include "Runner.h"
using namespace std;
void String_Runner_BT13()
{
	Runner("String_Runner_BT13").addDescription("Bai hoc: String").message();
	string s;
	cout << "Nhap vao mot chuoi: ";
	getline(cin, s);
	string vowels = "oeoai";
	for (int i = 0; i < s.length(); i++)
	{
		if (vowels.find(s[i]) != string::npos)
		{
			s.erase(i, 1);
			i--;
		}
	}
	cout << s;

}