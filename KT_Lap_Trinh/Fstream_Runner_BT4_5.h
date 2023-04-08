#pragma once
#include <iostream>
#include <fstream>
#include<string>
#include "Runner.h"
using namespace std;

void Fstream_Runner_BT4_5()
{
	Runner("Fstream_Runner_BT4_5").addDescription("Bai hoc: Fstream").message();
	char arr[21];
	//int n;
	//cout << "Nhap so phan tu can dung: ";
	//cin >> n;
	
	cout << "Nhap chuoi: ";
		cin >> arr;
		char* p = arr;
	ofstream outFile("BT4.txt");
	if (outFile.is_open())
	{
		while(*p != '\0')
		{
			*p = toupper(*p);
			outFile << *p << " "; p++;
		}
		outFile.close();
	}
	else
	{
		cout << "Khong the ghi du lieu vao file.";
	}
	//int m;
	//ifstream inFile;
	//inFile.open("BT1.txt");
	//inFile >> m;
	//inFile.close();

	//cout << "Gia tri doc duoc tu file la: " << m << endl;
	int dem = 0;
	char c;
	ifstream inFile("BT4.txt");
	inFile.is_open();
	while (inFile.get(c))
	{
		dem++;
	}
	inFile.close();
	cout << "Tong so ky tu trong file BT4.txt la: " << dem;

}