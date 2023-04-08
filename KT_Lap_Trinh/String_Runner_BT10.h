#pragma once
#include <iostream>
#include <cstring>
#include<string>
#include "Runner.h"
using namespace std;
void String_Runner_BT10()
{
	Runner("String_Runner_BT10").addDescription("Bai hoc: String").message();
    string input;
    cout << "Nhap ngay thang nam theo dinh dang thang-ngay-nam: ";
    cin >> input;

    // Tach chuoi ngay thang nam thanh cac phan rieng biet
    string month = input.substr(0, 2);
    string day = input.substr(3, 2);
    string year = input.substr(6, 2);

    // Chuyen doi chuoi thang thanh ten day du
    string months[] = { "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December" };
    string monthName = months[stoi(month) - 1];

    // Xuat ra ket qua theo dinh dang qui cach khung gio quoc te
    cout << monthName << " " << stoi(day) << ", " << "19" << year;

    
}