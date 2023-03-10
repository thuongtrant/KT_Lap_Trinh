#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui tính giá trị của x^n với x, n là số nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
int tinhmu(int x, int n)
{
	if (n == 1)
		return x;
	else
		return x * tinhmu(x, n - 1);

}
void Recursion_Runner_BT4()
{
	Runner("Recursion_Runner_BT4").addDescription("Bai hoc: Recursion").message();
	int n, x;
	cout << "Nhap so nguyen duong: "; cin >> x;
	cout << "Nhap so mu: "; cin >> n;
	cout << "Ket qua " << x << "^" << n << " la: ";
	cout << tinhmu(x, n);
	cout << endl;
}