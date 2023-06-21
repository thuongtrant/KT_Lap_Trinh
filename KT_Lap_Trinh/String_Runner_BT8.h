#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "Runner.h"
using namespace std;

void String_Runner_BT8()
{
	Runner("String_Runner_BT8").addDescription("Bai hoc: String").message();

        char name[100];
        cout << "Nhap vao ho va ten: ";
        cin.getline(name, 100);

        char lastName[50], middleName[50], firstName[50];
        //Tran Thi Thuong
        // Tach ho
        char* space = strchr(name, ' '); // space = Thi Thuong
        if (space != nullptr) {
            int length = space - name;   // length = Thi Thuong - Tran Thi Thuong = Tran
            strncpy_s(lastName, name, length); // Tran
            //lastName[length] = '\0';
            space++;
        }

        // Tach chữ lót (nếu có)
        char* space2 = strchr(space, ' '); // space2 = Thuong
        if (space2 != nullptr) {           
            int length = space2 - space;   // length = Thuong - Thi Thuong = Thi
            strncpy_s(middleName, space, length); // Thi
            middleName[length] = '\0';
            space2++;
        }

        // Tach ten
        if (space2 != nullptr) {
            strcpy_s(firstName, space2);
        }
        else {
            strcpy_s(firstName, space);
        }

        // In ra ket qua
        cout << "Ho: " << lastName << endl;
        if (middleName[0] != '\0') {
            cout << "Ten dem: " << middleName << endl;
        }
        cout << "Ten: " << firstName << endl;
}
// rfind(): tìm kiếm theo chiều từ cuối trở về đầu.
// find(): tìm kiếm theo chiều từ đầu đến hết chuỗi.