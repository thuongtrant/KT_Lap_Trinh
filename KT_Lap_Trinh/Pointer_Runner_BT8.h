#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

int giaithua(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * giaithua(n - 1);
}
int tohop(int n, int k)
{
	return  giaithua(n) / (giaithua(k) * giaithua(n - k));
}
void pascal(int h)
{
	if (h == 0)
		cout << " 0";
	else
		pascal(h - 1);
	cout << endl;
	for (int i = 0; i < h; i++)
	{
		cout << tohop(h - 1, i) << " ";
	}

}

void Pointer_Runner_BT8()
{
	Runner("Pointer_Runner_BT8").addDescription("Bai hoc: Pointer").message();

	int** a;
	int r, c;
	cin >> r >> c;
	a = new int* [100];

	for (size_t i = 0; i < r; i++)
	{
		a[i] = new int[100];
		//*(a + i) = new int[100];
	}
	/*for (size_t i = 0; i < 5; i++)
	{
		delete[] a[i];
	}
	delete[] a;*/
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < c; j++)
		{
			a[i][j] = rand() % 10;
			//*(*(a + i) + j) = rand() % 10;
		}
	}
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < c; j++)
		{
			cout << a[i][j] << " ";
			//cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
	int h;
	cout << "nhap chieu cao cua tam giac pascal: ";
	cin >> h;
	pascal(h);
}