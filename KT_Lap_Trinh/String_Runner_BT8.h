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

        // Tach ho
        char* space = strchr(name, ' ');
        if (space != nullptr) {
            int length = space - name;
            strncpy_s(lastName, name, length);
            //lastName[length] = '\0';
            space++;
        }

        // Tach chữ lót (nếu có)
        char* space2 = strchr(space, ' ');
        if (space2 != nullptr) {
            int length = space2 - space;
            strncpy_s(middleName, space, length);
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