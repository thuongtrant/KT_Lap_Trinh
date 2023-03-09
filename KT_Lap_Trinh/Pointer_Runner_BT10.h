#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Pointer_Runner_BT10()
{
	Runner("Pointer_Runner_BT10").addDescription("Bai hoc: Pointer").message();

	int** a;
	int** b;
	int** tich;
	int** tong;
	int rA, cA;
	cout << "Nhap so dong va so cot cua ma tran A: ";
	cin >> rA >> cA;
	int rB, cB;
	cout << "Nhap so dong va so cot cua ma tran B: ";
	cin >> rB >> cB;
	a = new int* [rA];
	b = new int* [rB];
	tich = new int* [100];
	tong = new int* [rA];
	for (int i = 0; i < rA; i++)
	{
		a[i] = new int[rA];
	}
	for (int i = 0; i < rB; i++)
	{
		b[i] = new int[rB];
	}
	for (int i = 0; i < rA; i++)
	{
		tich[i] = new int[rA];
	}
	for (int i = 0; i < rA; i++)
	{
		tong[i] = new int[rA];
	}
	cout << "Ma tran A: " << endl;
	for (int i = 0; i < rA; i++)
	{
		for (int j = 0; j < cA; j++)
		{
			*(*(a + i) + j) = rand() % 10;
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
	cout << "Ma tran B: " << endl;
	for (int i = 0; i < rB; i++)
	{
		for (int j = 0; j < cB; j++)
		{
			*(*(b + i) + j) = rand() % 10;
			cout << *(*(b + i) + j) << " ";
		}
		cout << endl;
	}
	if (rA == rB && cA == cB)
	{
	
		cout << "Tong hai ma tran la: " << endl;
		for (int i = 0; i < rA; i++)
		{
			for (int j = 0; j < cA; j++)
			{
				*(*(tong + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
				cout << *(*(tong + i) + j) << " ";
			}
			cout << endl;
		}
	}
	cout << endl;
	if (rA == cB) {
		cout << "Tich hai ma tran la: " << endl;
		for (int i = 0; i < rA; i++)
		{
			for (int j = 0; j < cB; j++)
			{
				*(*(tich + i) + j) = 0;
				for (int k = 0; k < cA; k++)
				{
					*(*(tich + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
				}
			}
		}
		for (int i = 0; i < rA; i++)
		{
			for (int j = 0; j < cB; j++)
			{
				cout << *(*(tich + i) + j) << " ";
			}
			cout << endl;
		}
	}
}