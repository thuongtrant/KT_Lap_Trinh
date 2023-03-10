#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui tính giá trị Fibonacci của một số nguyên không âm. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
int Fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void Recursion_Runner_BT3()
{
	Runner("Recursion_Runner_BT3").addDescription("Bai hoc: Recursion").message();
	int n;
	cout << "Nhap vi tri trong day Fibonacci: ";
	cin >> n;
	cout << "Gia tri cua so Fibonacci tai vi tri " << n << " la: ";
	cout << Fibonacci(n);
	cout << endl;
}