#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui tính số đảo ngược của một số nguyên không âm. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
int soDao(int n)
{
	if (n < 10)
		return n;
	else
		cout << n % 10;
		return soDao(n / 10);
}
void Recursion_Runner_BT6()
{
	Runner("Recursion_Runner_BT6").addDescription("Bai hoc: Recursion").message();
	int n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	cout << "So " << n << " sau khi dao la: ";
	cout << soDao(n);
	cout << endl;
}