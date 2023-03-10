#pragma once
#include <iostream>
#include <algorithm>
#include<cstdlib>
#include "Runner.h"
using namespace std;

void nhapmang(int arr[100][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			//cout << "a[" << i << "][" << j << "]= ";
			arr[i][j] = rand() % 10;
		}
	}
}
void xuatmang(int arr[100][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void trungbinhcong(int arr[100][100], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			tong += arr[i][j];
		}
	}
	cout << " + Trung binh cac phan tu trong mang so nguyen la: " << tong / (r * c);
}
bool tim(int arr[100][100], int r, int c, int m)
{
	int dem = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (m == arr[i][j])
			{
				dem++;
			}
		}
	}
	if (dem != 0) return true;
	else return false;
}
void hoandoi(int arr[100][100], int r, int c, int x, int y)
{
	int xi, yi, xj, yj, tam;
	int demx = 0;
	int demy = 0;

	for (int i = 0; i < r; i++)

		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == x && demx == 0)
			{
				xi = i;
				xj = j;
				demx++;
			}
			if (arr[i][j] == y && demy == 0)
			{
				yi = i;
				yj = j;
				demy++;
			}
			if (demx > 0 && demy > 0)
				break;
		}

	if (demx > 0 && demy > 0)
	{
		swap(arr[xi][xj], arr[yi][yj]);
		/*tam = arr[xi][xj];
		arr[xi][xj] = arr[yi][yj];
		arr[yi][yj] = tam;*/
	}

}
void tichcot(int arr[100][100], int r, int c, int cot)
{
	int tich = 1;
	for (int i = 0; i < r; i++)
	{

		tich *= arr[i][cot];
	}
	cout << " + Tich cac phan tu cua cot " << cot << " la: " << tich << endl;
}
void Array_Runner_BT7()
{
	Runner("Array_Runner_BT7").addDescription("Bai hoc: Array").message();
	int arr[100][100];
	int r, c, m;
	cout << "Nhap so dong can dung: ";
	cin >> r;
	cout << "Nhap so cot can dung: ";
	cin >> c;

	nhapmang(arr, r, c);
	cout << endl;
	xuatmang(arr, r, c);
	cout << endl;
	trungbinhcong(arr, r, c);
	cout << endl;
	cout << "Nhap phan tu can tim: ";
	cin >> m;

	if (tim(arr, r, c, m))
		cout << " + Tim thay phan tu " << m;
	else
		cout << " + Khong tim thay phan tu " << m;
	cout << endl;
	int cot;
	cout << "Nhap cot muon tinh tich cac phan tu: ";
	cin >> cot;
	tichcot(arr, r, c, cot);
	int x, y;
	cout << "Nhap hai phan tu can hoan doi: ";
	cin >> x >> y;
	hoandoi(arr, r, c, x, y);
	cout << " + Mang sau khi hoan doi la: \n";
	xuatmang(arr, r, c);
	cout << endl;
}