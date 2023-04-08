#pragma once
#include <iostream>
#include <fstream>
#include "Runner.h"
using namespace std;

void Fstream_Runner_BT1_2()
{
	Runner("Fstream_Runner_BT1").addDescription("Bai hoc: Fstream").message();
	int a, b;
	int kq;
	cout << "Nhap hai so nguyen: ";
	cin >> a >> b;
	kq = a + b;
	ofstream outFile;
	outFile.open("BT1.txt");
	outFile << /*"Tong hai so " << a << " va " << b << " la: " <<*/ kq << endl;
	outFile.close();
	cout << "Ket qua duoc ghi vao file BT1.txt." << endl;
	int m;
	ifstream inFile;
	inFile.open("BT1.txt");
	inFile >> m;
	inFile.close();

	cout << "Gia tri doc duoc tu file la: " << m << endl;
}