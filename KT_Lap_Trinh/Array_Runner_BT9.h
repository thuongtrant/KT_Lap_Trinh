#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
#include <iostream>
using namespace std;

void Array_Runner_BT9()
{
	Runner("Array_Runner_BT9").addDescription("Bai hoc: Array").message();
	int a9[100][100];
	int r, c;
	int dem = 1;
	do {
		cout << "Nhap so dong: ";
		cin >> r;
		cout << "Nhap so cot: ";
		cin >> c;
		if (r < 2 || r > 10 || c < 2 || c > 10)
			cout << " Nhap sai! Nhap lai dong va cot co kich thuoc bang nhau nam trong khoang 2 -> 10\n";
	} while (r < 2 || r > 10 || c < 2 || c > 10);

	if (r == c)
	{
		for (int j = 0; j < c; j++)
		{

			if (j % 2 == 0)
				for (int i = 0; i < r; i++)
				{
					a9[i][j] = dem++;
				}
			else
				for (int i = r - 1; i >= 0; i--)
				{
					a9[i][j] = dem++;
				}
		}
		cout << "Mang xap xep theo zigzig cot: " << endl;
		for (int j = 0; j < c; j++)
		{
			for (int i = 0; i < r; i++)
			{
				cout << a9[j][i] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;

}