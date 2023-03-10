#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;

#include <iostream>

using namespace std;
void nhapmang1(int arr[100][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			//cout << "a[" << i << "][" << j << "]= ";
			arr[i][j] = rand() % 10;
		}
	}
}
void xuatmang1(int arr[100][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void tinhtong(int a[100][100], int b[100][100], int kq[100][100], int r, int c)
{

	cout << " + Tong hai ma tran: ";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			kq[i][j] = a[i][j] + b[i][j];
		}
		cout << endl;
	}
}
void tinhtich(int a[100][100], int b[100][100], int kq[100][100], int r1, int c1, int c2) {
	cout << " + Tich hai ma tran: " << endl;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			kq[i][j] = 0;
			for (int k = 0; k < c1; k++)
			{
				kq[i][j] += a[i][k] * b[k][j];

			}
		}
	}

}

void Array_Runner_BT8()
{
	Runner("Array_Runner_BT8").addDescription("Bai hoc: Array").message();
	int a[100][100];
	int b[100][100];
	int tich[100][100];
	int tong[100][100];
	int r1, c1, r2, c2;
	do {
		cout << " Nhap so dong cua ma tran a: ";
		cin >> r1;
		cout << " Nhap so cot cua ma tran a: ";
		cin >> c1;
		if (r1 > 100 || c1 > 100)
			cout << "nhap sai! nhap lai!";
	} while (r1 > 100 || c1 > 100);

	do {
		cout << " Nhap so dong cua ma tran b: ";
		cin >> r2;
		cout << " Nhap so cot cua ma tran b: ";
		cin >> c2;
		if (r2 > 100 || c2 > 100)
			cout << " Nhap sai! nhap lai!";
	} while (r2 > 100 || c2 > 100);
	//cout << " Nhap mang a: " << endl;
	nhapmang1(a, r1, c1);
	cout << endl;
	cout << " Xuat mang a: " << endl;
	xuatmang1(a, r1, c1);
	cout << endl;
	//cout << " Nhap mang b: " << endl;
	nhapmang1(b, r2, c2);
	cout << endl;
	cout << " Xuat mang b: " << endl;
	xuatmang1(b, r2, c2);
	cout << endl;
	if (r1 == r2 && c1 == c2)
	{
		tinhtong(a, b, tong, r1, c1);
		xuatmang1(tong, r1, c1);
	}
	if (c1 == r2)
	{
		tinhtich(a, b, tich, r1, c1, c2);
		xuatmang1(tich, r2, c2);
	}
	cout << endl;

}