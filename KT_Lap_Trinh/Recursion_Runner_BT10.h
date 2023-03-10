#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui tìm ước số chung lớn nhất của hai số nguyên. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
int Euclid(int a, int b)
{
	
	if (b == a)
		return a;
	else
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return Euclid(a, b);
}
void Recursion_Runner_BT10()
{
	Runner("Recursion_Runner_BT10").addDescription("Bai hoc: Recursion").message();
	int a, b;
	cout << "Nhap hai so de tim uoc chung: ";
	cin >> a >> b;
	cout << "Uoc chung cua " << a << " va " << b << " la:";
	cout << Euclid(a, b);
	cout << endl;
}