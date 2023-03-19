#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Runner.h"
using namespace std;
void String_Runner_BT15()
{
	Runner("String_Runner_BT15").addDescription("Bai hoc: String").message();
	string s1;
	string s2;
	int pos;
	cout << "Nhap chuoi thu nhat: ";
	getline(cin, s1);
	cout << endl << "Nhap chuoi thu hai : ";
	getline(cin, s2);
	cout << "Chuoi thu nhat: " << s1 << endl;
	cout << "Chuoi thu hai: " << s2 << endl;
	cout << "Nhap vi tri can chen chuoi thu hai vao chuoi thu nhat.";
	cin >> pos;
	if (pos < 0 || pos > s1.length()) {
		cout << "Vi tri khong hop le!";
	}
	s1.insert(pos, s2);
	cout << "Chuoi ket qua: " << s1;


}