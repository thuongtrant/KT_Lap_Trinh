#pragma once
#include <iostream>
#include <fstream>
#include "Runner.h"
using namespace std;

void Fstream_Runner_BT3()
{
	Runner("Fstream_Runner_BT3").addDescription("Bai hoc: Fstream").message();
	ofstream File("BT3.txt");
	if (File.is_open())
	{
		int a, b, c;
		cout << "Nhap 3 so nguyen: ";
		cin >> a >> b >> c;
		File << a << "#" << b << "#" << c << "#";
		File.close();
		cout << " Da ghi du lieu vao file BT3.txt";
	}
	else
	{
		cout << "Khong the mo file de ghi du lieu.";
	}
	ifstream inputFile("BT3.txt");
	if (inputFile.is_open())
	{
		int a, b, c;
		char kytu;
		inputFile >> a >> kytu >> b >> kytu >> c >> kytu;
		float trungBinh = (a + b + c) / 3.0;
		cout << "\n Gia tri trung binh cua ba so nguyen la: " << trungBinh;
		inputFile.close();
	}
	else
	{
		cout << "Khong the mo file de doc du lieu";
	}
}