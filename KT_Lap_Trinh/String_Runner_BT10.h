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

    //char date[10];
    //cout << "Nhap ngay thang nam (mm/dd/yy): ";
    //cin >> date;

    //char month[10], day[10], year[10];
    //strcpy(month, strtok(date, "/"));
    //strcpy(day, strtok(NULL, "/"));
    //strcpy(year, strtok(NULL, "/"));

    //int year_num = atoi(year);
    //if (year_num >= 0 && year_num <= 99) {
    //    year_num += 1900;
    //    if (year_num < 1950) {
    //        year_num += 100;
    //    }
    //}

    //const char* months[] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    //cout << months[atoi(month)] << " " << day << ", " << year_num << endl;
}