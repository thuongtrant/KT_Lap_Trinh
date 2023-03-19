#pragma once
#include <iostream>
#include <string>
#include "Runner.h"
using namespace std;
void String_Runner_BT14()
{
	Runner("String_Runner_BT14").addDescription("Bai hoc: String").message();
	string s;
	string word;
	int count = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Chuoi ban vua nhap: " << s << endl;
	cout << "Nhap vao mot tu: ";
	cin >> word;

	size_t pos = s.find(word); // tìm vị trí đầu tiên của từ trong chuỗi
	while (pos != string::npos) // nếu tìm được từ
	{
		count++; // tăng biến đếm
		pos = s.find(word, pos + 1); // tiếp tục tìm từ tiếp theo
	}
	cout << "Tu " << word << " xuat hien trong chuoi " << s << " " << count << " la.";
}