#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
#define COL 10
#define ROW 10

void Nhap(int a[ROW][COL], int col, int row) {
	int i = 1;
	while (i <= row) {
		int j = 1;
		while (j <= col) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
			j++;
		}
		i++;
	}
}
void Xuat(int a[ROW][COL], int col, int row) {
	int i = 1;
	while (i <= row) {
		int j = 1;
		while (j <= col) {
			cout << a[i][j] << "  ";
			j++;
		}
		cout << endl;
		i++;
	}
}

void Array_Runner_BT2()
{
	Runner("Array_Runner_BT2").addDescription("Bai hoc: Array").message();
	int array[ROW][COL];
	Nhap(array, 3, 4);
	Xuat(array, 3, 4);
	cout << endl;
}