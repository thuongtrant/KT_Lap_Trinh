#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;

void Array_Runner_BT6()
{
	Runner("Array_Runner_BT6").addDescription("Bai hoc: Array").message();

	int a[100][100];
	int b[100][100];
	int tong1[200][200];
	int tich1[200][200];
	int dong, cot;
	do {
		cout << "nhap so dong: ";
		cin >> dong;
		cout << "nhap so cot: ";
		cin >> cot;
		if (dong > 100 || cot > 100)
			cout << "nhap sai! nhap lai!";
	} while (dong > 100 || cot > 100);
	cout << "ma tran a" << endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "ma tran b" << endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			b[i][j] = rand() % 10;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	if (dong == cot)
	{
		cout << "tong hai ma tran: " << endl;
		for (int i = 0; i < dong; i++)
		{
			for (int j = 0; j < cot; j++)
			{
				tong1[i][j] = a[i][j] + b[i][j];
				cout << tong1[i][j] << " ";
			}
			cout << endl;
		}
		cout << "tich hai ma tran: " << endl;
		for (int i = 0; i < dong; i++)
		{
			for (int j = 0; j < cot; j++)
			{
				tich1[i][j] = 0;
				for (int k = 0; k < cot; k++)
				{
					tich1[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (int i = 0; i < dong; i++)
		{
			for (int j = 0; j < cot; j++)
			{
				cout << tich1[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;
}