#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;
void String_Runner_BT5()
{
	Runner("String_Runner_BT5").addDescription("Bai hoc: String").message();
	char inputPassword[100];
	const string password = "SinhVienCQ";
	cout << "Nhap mat khau: X X X X X X X X X X\n";
	cin.getline(inputPassword, 100);
	if (inputPassword == password)
	{
		cout << "Dang nhap thanh cong!";
	}
	else
	{
		cout << "Nhap sai! Nhap lai!";
	}
}