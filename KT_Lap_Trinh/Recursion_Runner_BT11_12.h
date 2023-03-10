#pragma once
#include <iostream>
#include<cstdlib>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui tính tổng các giá trị của một mảng 1 chiều lưu trữ số nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.

int tongmang(int a[], int n)
{
	if (n == 1) return a[0];
	return tongmang(a, n - 1) + a[n - 1];
}
int minMang(int a[], int n)
{
	int min;
	if (n == 1)
		return a[0];
	else
	{
		min = minMang(a, n - 1);
		if (a[n - 1] < min)
		min = a[n - 1];
	}
	return min;
}
void Recursion_Runner_BT11_12()
{
	Runner("Recursion_Runner_BT11_12").addDescription("Bai hoc: Recursion").message();
	int a[100];
	int n, min;
	cout << "Nhap so phan tu muon dung trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << "; ";
	}
	cout << "Tong cac phan tu trong mang la: " << tongmang(a, n);
	cout << endl;
	cout << "Gia tri nho nhat trong mang la: " << minMang(a, n);
	cout << endl;
}