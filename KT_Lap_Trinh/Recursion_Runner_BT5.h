#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui đếm số chữ số của một số nguyên không âm. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
int demSo(int n)
{
	int dem = 0;
	if (n < 10)
		return 1;
	else
		return dem + 1+ demSo(n / 10);
}
void Recursion_Runner_BT5()
{
	Runner("Recursion_Runner_BT5").addDescription("Bai hoc: Recursion").message();
	int n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	cout << "So chu so cua " << n << " la: ";
	cout << demSo(n);
	cout << endl;
}