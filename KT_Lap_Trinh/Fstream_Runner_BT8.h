#pragma once
#include <iostream>
#include <fstream>
#include<string>
#include <iomanip>
#include "Runner.h"
using namespace std;
void writeToFile(int a, int b, int c)
{
	ofstream outFile("BT8.txt");
	if (outFile.is_open())
	{
		outFile << a << endl;
		outFile << b << endl;
		outFile << c << endl;
		outFile.close();
		cout << " Da ghi du lieu vao file BT3.txt";
	}
	else
	{
		cout << "Khong the mo file de ghi du lieu.";
	}
}
void readFromFile(int& a, int& b, int& c)
{
	ifstream inFile("BT8.txt");
	if (inFile.is_open())
	{
		inFile >> a;
		inFile >> b;
		inFile >> c;
		inFile.close();
	}
	else
	{
		cout << "Khong the mo file de doc du lieu";
	}
}
void Fstream_Runner_BT8()
{
	Runner("Fstream_Runner_BT8").addDescription("Bai hoc: Fstream").message();
	int a, b, c;
	cout << "Nhap 3 so nguyen: \n";
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	writeToFile(a, b, c);
	a = b = c = 0;
	readFromFile(a, b, c);
	cout << "\nSo nguyen duoc doc tu file: ";
	cout << endl;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}