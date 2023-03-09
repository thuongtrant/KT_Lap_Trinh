#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Pointer_Runner_BT2()
{
	Runner("Pointer_Runner_BT2").addDescription("Bai hoc: Pointer").message();

		int a[30];
		int n;
		cout << "nhap so phan tu trong mang: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
		}
		int* p;
		p = a;
		cout << "ky phap do doi: \n";
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = " << *(p + i) << " \n"; //tương đương với *(a+i)
			//cout  <<  * (p + i) << " \n"; 
		}
		cout << endl;
		cout << "ky phap chi so \n";
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = " << p[i] << endl;
		}
}