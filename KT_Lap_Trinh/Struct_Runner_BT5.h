#pragma once
#include <iostream>
#include <ctime>
#include<cstring>
#include"Runner.h"
using namespace std;
struct NTN {
	int day, month, year;
};
struct Books {
	char nameBooks[45];
	char nameAuthor[45];
	NTN date;
	Books input()
	{
		cout << endl;
		cout << "Nhap ten sach: "; cin.getline(nameBooks, 45);
		cin.ignore();
		cout << "Nhap ten tac gia: "; cin.getline(nameAuthor,45);
		cout << "Nhap ngay thang nam xuat ban: "; cin >> date.day >> date.month >> date.year;
		return *this;
	}
	Books print()
	{
		cout << endl;
		cout << "Ten sach: " << nameBooks << endl;
		cout << "Ten tac gia: " << nameAuthor << endl;
		cout << "Ngay thang nam xuat ban: " << date.day << "/" << date.month << "/" << date.year << endl;
		return *this;
	}

	//Books findNameAu() {
	//	cout << "Cac sach cua tac gia Tran Dung:\n";
	//	for (int i = 0; i < countBook; i++) {
	//		if (strcmp(libraryArr[i].nameBooks, "Tran Dung") == 0) {
	//			cout << "Ten sach: " << libraryArr[i].nameBooks << endl;
	//			cout << "Ten tac gia: " << libraryArr[i].nameAuthor << endl;
	//			cout << "Ngay xuat ban: " << libraryArr[i].date.day << "/" << libraryArr[i].date.month << "/" << libraryArr[i].date.year << endl;
	//		}
	//	}
	//}

};

class 	Struct_Runner_BT5 : public Runner {
public:
	static void run() 
	{
		Books libraryArr[45];
		int countBook;
		cout << "Nhap so sach thu vien can co: ";
		cin >> countBook;
		for (int i = 0; i < countBook; i++)
		{
			cout << "Nhap thong tin cho quyen sach thu " << i + 1 << " : ";
			libraryArr[i].input();
		}
		cout << endl;
		for (int i = 0; i < countBook; i++)
		{
			libraryArr[i].print();
		}
		cout << endl;
		for (int i = 0; i < countBook; i++)
		{
			if (strcmp(libraryArr[i].nameBooks, "Tran Dung") == 0) 
			{
				libraryArr[i].print();
			}
		}
	}
};
