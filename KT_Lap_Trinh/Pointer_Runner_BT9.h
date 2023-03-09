#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void xuatnguyento(int** a, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			if (a[i][j] >= 2) 
			{
				int d = 0; 
				
				for (int k = 2; k <= a[i][j] / 2; k++) 
				
					if (a[i][j] % k == 0)d++;
					if (d == 0)
					{
						cout << a[i][j] << '\t';
						tong += a[i][j];
					}
				
			}
	}
	cout << "\n tong cac so nguyen to la: " << tong;
}

void Pointer_Runner_BT9()
{
	Runner("Pointer_Runner_BT9").addDescription("Bai hoc: Pointer").message();

	int** a;
	a = new int* [100];
	int r, c;
	cout << " nhap so dong: ";
	cin >> r;
	cout << " nhap so cot: ";
	cin >> c;
	for (int i = 0; i < r; i++)
	{
		a[i] = new int[100];
	}


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 10;
		}

	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	xuatnguyento(a, r, c);
}