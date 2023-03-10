#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;

void Array_Runner_BT5()
{
	Runner("Array_Runner_BT5").addDescription("Bai hoc: Array").message();

	int arr[100][100];
	int dong, cot;
	int tongchinh = 0;
	int tongphu = 0;
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
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	if (dong == cot)
	{
		for (int i = 0; i < cot; i++)
		{
			tongchinh += arr[i][i];
		}
		cout << "Tong cac phan tu tren duong cheo chinh la: " << tongchinh << endl;
		for (int i = 0; i < cot; i++)
		{
			tongphu += arr[i][cot - i - 1];
		}
		cout << "Tong cac phan tu tren duong cheo chinh la: " << tongphu;
	}
	cout << endl;
}