#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Pointer_Runner_BT4()
{
	Runner("Pointer_Runner_BT4").addDescription("Bai hoc: Pointer").message();

		int a[30];
		int n;
		cout << "Nhap so phan tu trong mang: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
			cout << a[i] << " ";
		}
		int* p;
		p = a;
		cout << "Ky phap do doi: \n";
		for (int i = 0; i < n; i++)
		{
			if( *(p + i) % 2 != 0 )
			{
				cout << "a[" << i << "] = " << *(p + i) << " \n"; //tương đương với *(a+i)
			}
		}
		
		int max = a[0];
		for (int i = 0; i < n; i++)
		{
			if (*(p + i) > max)
			{
				max = *(p + i);
			}
		}
		cout << "Phan tu lon nhat: " << max;
}