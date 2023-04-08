#pragma once
#include <iostream>
#include <fstream>
#include<string>
#include <iomanip>
#include "Runner.h"
using namespace std;

void Fstream_Runner_BT7()
{
	Runner("Fstream_Runner_BT7").addDescription("Bai hoc: Fstream").message();
	float luong;
	ofstream outfile("BT7.txt");
	outfile.is_open();
	cout << "Nhap he so luong: ";
	cin >> luong;
	while (luong != -1)
	{
		outfile << fixed << setprecision(2) << luong << endl; // setprecision: xác định số chữ số sau dấu phẩy
		cout << "Nhap he so luong: ";
		cin >> luong;
	}
	outfile.close();
	cout << "Ghi file thanh cong!";

}
