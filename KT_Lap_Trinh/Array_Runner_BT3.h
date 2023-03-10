#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;

void Array_Runner_BT3()
{
	Runner("Array_Runner_BT3").addDescription("Bai hoc: Array").message();

	int arr3[100][100];
	int dong, cot;
	int vtdmin, vtdmax, vtcmin, vtcmax;
	int tong = 0;

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
			cin >> arr3[i][j];
		}
	}
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			tong += arr3[i][j];
		}
	}
	cout << "Tong cac gia tri luu tru trong mang la: " << tong << endl;
	int min = arr3[0][0];
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (min > arr3[i][j])
			{
				min = arr3[i][j];
				vtdmin = i;
				vtcmin = j;
			}
		}
	}
	cout << "Gia tri nho nhat trong mang la: " << min << endl;
	cout << "Vi tri dong min la: " << vtdmin << endl;
	cout << "Vi tri cot min la: " << vtcmin << endl;
	int max = arr3[0][0];
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (max < arr3[i][j])
			{
				max = arr3[i][j];
				vtdmax = i;
				vtcmax = j;
			}
		}
	}
	cout << endl;
	cout << "Gia tri lon nhat trong mang la: " << max << endl;
	cout << "Vi tri dong max la: " << vtdmax << endl;
	cout << "Vi tri cot max la: " << vtcmax << endl;
	cout << endl;
}