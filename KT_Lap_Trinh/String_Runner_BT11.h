#pragma once
#include <iostream>
#include <string>
#include "Runner.h"
using namespace std;
void String_Runner_BT11()
{
	Runner("String_Runner_BT11").addDescription("Bai hoc: String").message();
	string ho;
	string chuLot;
	string ten;
	cout << "Nhap ho:";
	getline(cin, ho);
	cout << "Nhap chu lot:";
	getline(cin, chuLot); 
	cout << "Nhap ten:";
	getline(cin, ten); 
	cout << "Ho: " << ho << endl;
	cout << "Chu lot: " << chuLot << endl;
	cout << "tem: " << ten << endl;
	cout << " ::: Ho va ten ::: " << ho + ' ' + chuLot + ' ' + ten;
	}