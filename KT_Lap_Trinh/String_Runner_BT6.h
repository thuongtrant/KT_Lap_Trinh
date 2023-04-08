#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "Runner.h"
using namespace std;
int dayOfYear(string date)
{
	int dayInMonth[20] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year = stoi(date.substr(6, 4));
	int month = stoi(date.substr(3, 2));
	int day = stoi(date.substr(0, 2));
	int days = 0;
	for (int i = 0; i < month; i++)
	{
		days += dayInMonth[i];// tính tổng số ngày của các tháng trước đó
	}
	days += day;// cộng thêm số ngày của tháng đó
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		{
			if (month > 2)
				days += 1;// nếu là năm nhuận và sau tháng 2 thì thêm 1 ngày
		}
	}
	return days;
}
void String_Runner_BT6()
{
	Runner("String_Runner_BT6").addDescription("Bai hoc: String").message();
	cout << "Nhap ngay thang nam (dd-mm-yyyy): ";
	string date;
	cin >> date;
	//cout << date << endl;
	int day = dayOfYear(date);
	cout << "Ngay " << date << " la ngay thu " << day << " trong nam." << endl;
}