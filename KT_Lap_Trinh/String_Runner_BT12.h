#pragma once
#include <iostream>
#include <string>
#include "Runner.h"
using namespace std;
void String_Runner_BT12()
{
	Runner("String_Runner_BT12").addDescription("Bai hoc: String").message();
	string s;
	cout << "Nhap mot chuoi: ";
	getline(cin, s);
	int leng = s.length();
	for (int i = 0; i < leng /2; i++)
	{
		swap(s[i], s[leng - i - 1]);
	}
		cout << s;
}