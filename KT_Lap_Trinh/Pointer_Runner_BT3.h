#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Pointer_Runner_BT3()
{
	Runner("Pointer_Runner_BT3").addDescription("Bai hoc: Pointer").message();

		
	//	int m, n;
	//	cin >> m;
	//	cin >> n;
	//	cout << " Gia tri cua m la: " << m << endl;
	//	cout << "Gia tri cua n la: " << n << endl;
	//	int* a, * b;
	//	a = &m;
	//	b = &n;
	//	cout << "Gia tri cua con tro a: " << *a << endl;
	//	cout << "Gia tri cua con tro b: " << *b << endl;
	//	while (*a != *b){
	//
	//	if (*a > *b)
	//	{
	//		*a -= *b;
	//	}
	//	else
	//	{
	//		*b -= *a;
	//	}
	//
	//}
	//	cout << "Uoc chung lon nhat la: " << *a;
	//	return 0;
		
		int* a;
		int* b;
		int r;
		a = new int;
		b = new int;
		cout << "Nhap hai so nguyen to: ";
		cin >> *a;
		cin >> *b;
		while (*b != 0)
		{
			r = *a % *b;
			*a = *b;
			*b = r;
		}
		cout << "Uoc chung lon nhat: " << *a << endl;
		delete a;
		delete b;
		system("pause");
}