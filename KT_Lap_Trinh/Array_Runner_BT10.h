#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Array_Runner_BT10()
{
	Runner("Array_Runner_BT10").addDescription("Bai hoc: Array").message();
		int arr[100][100];
		int r, c;
		int minr, minc, maxr, maxc;


		int dem = 1;
		do {
			cout << "Nhap so dong: ";
			cin >> r;
			cout << "Nhap so cot: ";
			cin >> c;
			if (r < 2 || r > 10 || c < 2 || c > 10)
				cout << " Nhap sai! Nhap lai dong va cot co kich thuoc bang nhau nam trong khoang 2 -> 10\n";
		} while (r < 2 || r > 10 || c < 2 || c > 10);
		minr = minc = 0;
		maxr = r - 1;
		maxc = c - 1;
		while (dem <= r * c)
		{
			for (int i = minc; i <= maxc; i++)
			{
				arr[minr][i] = dem;
				dem++;
			}
			minr++;
			for (int i = minr; i <= maxr; i++)
			{
				arr[i][maxc] = dem;
				dem++;
			}
			maxc--;
			for (int i = maxc; i >= minc; i--)
			{
				arr[maxr][i] = dem;
				dem++;
			}
			maxr--;
			for (int i = maxr; i >= minr; i--)
			{
				arr[i][minc] = dem;
				dem++;
			}
			minc++;
		}


		cout << "Mang hai chieu theo hinh xoan oc  la: " << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
}