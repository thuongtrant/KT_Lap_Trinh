#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;

void Array_Runner_BT4()
{
	Runner("Array_Runner_BT4").addDescription("Bai hoc: Array").message();

	int arr4[100][100];
	int dong, cot;
	int d;
	int c;
	int tongdong = 0;
	int tongcot = 0;
	do {
		cout << "Nhap so dong: ";
		cin >> dong;
		cout << "Nhap so cot: ";
		cin >> cot;
		if (dong > 100 || cot > 100)
			cout << "Nhap sai! Nhap lai!";
	} while (dong > 100 || cot > 100);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			arr4[i][j] = rand() % 10;
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Nhap dong muon tinh tong: "; cin >> d;

	for (int j = 0; j < cot; j++)
	{
		tongdong += arr4[d][j];
	}
	cout << " Tong cac phan tu tren dong " << d << " la: " << tongdong << endl;
	cout << "Nhap cot muon tinh tong: "; cin >> c;
	for (int i = 0; i < dong; i++)
	{
		tongcot += arr4[i][c];
	}
	cout << " Tong cac phan tu tren dong " << c << " la: " << tongcot << endl;
	int x;
	int dem = 0;
	cout << "Nhap gia tri muon tim: "; cin >> x;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (x == arr4[i][j])
			{
				dem++;
			}
		}

	}
	if (dem == 0)
	{
		cout << "Khong co gia tri " << x << " xuat hien";
	}
	else
		cout << x << " xuat hien " << dem << " lan";
	cout << endl;
}