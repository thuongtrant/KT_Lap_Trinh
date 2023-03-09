#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Pointer_Runner_BT1()
{
	Runner("Pointer_Runner_BT1").addDescription("Bai hoc: Pointer").message();

	int x, y;
	int* p;
	p = &x;
	*p = 80;
	cout << "Xuat dia chi cua bien x: " << &x << endl;
	cout << "Xuat dia chi luu trong con tro p: " << p << endl;
	cout << "Xuat gia tri cua bien ma p tro den: " << *p << endl;
	cout << "Xuat gia tri cua bien x: " << x << endl;
}