#pragma once
#pragma once
#include <iostream>
#include <cstring>
#include<string>
#include "Runner.h"
using namespace std;
void String_Runner_BT()
{
	//#include <cstring>
//#include <iostream>
//using namespace std;
//
//// Ham tach ho
//void tachHo(char* chuoi, char* ho)
//{
//    char* p = strtok(chuoi, " ");
//    strcpy(ho, p);
//}
//
//// Ham lay chu lot
//void layChuLot(char* chuoi, char* chuLot)
//{
//    char* p = strtok(chuoi, " ");
//    while (p != NULL)
//    {
//        strcpy(chuLot, p);
//        p = strtok(NULL, " ");
//    }
//}
//
//// Ham lay ten
//void layTen(char* chuoi, char* ten)
//{
//    char* p = strrchr(chuoi, ' ');
//    strcpy(ten, p + 1);
//}
//
//// Ham main
//int main()
//{
//    char chuoi[100];
//    char ho[50], chuLot[50], ten[50];
//
//    cout << "Nhap vao mot chuoi ho ten: ";
//    cin.getline(chuoi, 100);
//
//    // Goi cac ham de tach ho, lay chu lot va lay ten
//    tachHo(chuoi, ho);
//    layChuLot(chuoi, chuLot);
//    layTen(chuoi, ten);
//
//    cout << "Ho: " << ho << endl;
//    cout << "Chu lot: " << chuLot << endl;
//    cout << "Ten: " << ten << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//#include <string>
//
//    using namespace std;
//
//    // Hàm tách họ
//    string lastName(string fullName) {
//        int pos = fullName.find_first_of(" ");
//        return fullName.substr(0, pos);
//    }
//
//    // Hàm lấy chữ lót
//    string middleName(string fullName) {
//        int pos1 = fullName.find_first_of(" ");
//        int pos2 = fullName.find_last_of(" ");
//        return fullName.substr(pos1 + 1, pos2 - pos1 - 1);
//    }
//
//    // Hàm lấy tên
//    string firstName(string fullName) {
//        int pos = fullName.find_last_of(" ");
//        return fullName.substr(pos + 1);
//    }
//
//    int main() {
//        string fullName;
//        cout << "Nhap ho va ten: ";
//        getline(cin, fullName);
//        cout << "Ho: " << lastName(fullName) << endl;
//        cout << "Chu lot: " << middleName(fullName) << endl;
//        cout << "Ten: " << firstName(fullName) << endl;
//    }
}