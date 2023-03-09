#pragma once

#include <iostream>
#include <string>
#include "Runner.h";

using namespace std;

struct PhongBan 
{
	string maPhong;
	string tenPhong;
};


void Struct_Runner_BT1()
{
	Runner("Struct_Runner_BT1").message();

	PhongBan x;
	cout << "Nhap ma phong: ";
	getline(cin, x.maPhong);
	cout << endl;

	cout << "Nhap ten phong: ";
	getline(cin, x.tenPhong);
	cout << "Ma phong la: " << x.maPhong;
	cout << endl;
	cout << "Ten phong la: " << x.tenPhong;

}