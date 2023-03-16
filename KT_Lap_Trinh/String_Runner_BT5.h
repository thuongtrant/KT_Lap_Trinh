#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;
void String_Runner_BT5()
{
	Runner("String_Runner_BT5").addDescription("Bai hoc: String").message();
	char inputPassword[100];
    const int MAX_ATTEMPTS = 3;
    int attempts = 0;
	const string password = "SinhVienCQ";
	while(attempts < MAX_ATTEMPTS)
	{
		cout << "Nhap mat khau: X X X X X X X X X X\n";
		cin.getline(inputPassword, 100);
		if (strcmp(inputPassword,password.c_str()) == 0) //Hàm thành viên c_str() sẽ giúp bạn chuyển từ string thành dạng C-string
		{
	      cout << "Dang nhap thanh cong!\n";
			break;
		}
		else
		{
			cout << "Nhap sai! Nhap lai!";
		    attempts++;
		}
	}
}