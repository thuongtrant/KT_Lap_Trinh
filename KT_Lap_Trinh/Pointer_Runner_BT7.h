#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

int *FindX(int* a, int n, int x) ////Sử dụng con trỏ hàm để trả vê giá trị là con trỏ.
{
	int* p = NULL;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) == x)
		{
			p = &x;
			break;
		}
	}
	return p;
}

void Pointer_Runner_BT7()
{
	Runner("Pointer_Runner_BT7").addDescription("Bai hoc: Pointer").message();

		int* a;
		int n, x;
		//do
		//{
		//	cout << "Nhap so phan tu mang: ";
		//	cin >> n;
		//	if (n < 1);
		//} while (n < 1);
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			*(a + i) = rand() % 10;
			cout << *(a + i) << " ";
		}
		cout << "Nhap phan tu can tim: ";
		cin >> x;
		if (FindX(a, n, x) == NULL)
		{
			cout << "Khong tim thay!" << endl;
		}
		else
		{
			cout << "Tim thay!";
			cout << endl << "Vi tri " << x << " la: " << FindX(a, n, x);
		}
		delete[]a;
}