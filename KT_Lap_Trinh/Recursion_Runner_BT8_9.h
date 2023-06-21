#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//. Viết hàm đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
//. Viết hàm đệ qui chuyển một số nguyên ở dạng nhị phân sang hệ thập phân. 
int HEX(int n)
{
	int a;
	if (n == 0)
		return 0;
	else
		 a = n % 2;
		return a +  HEX(n / 2)*10;
			
}
int BIN(int n)
{
	int a;
	if (n == 0)
		return 0;
	else
		a = n % 10;
	return BIN(n / 10) * 2 + a;
}
void chuyenBin(int n, int radix = 2) //chuyển thập phân sang nhị phân
{
	if (n > 0)
	{
		chuyenBin(n / radix, radix);
		cout << n % radix;
	}
}
void Recursion_Runner_BT8_9()
{
	Runner("Recursion_Runner_BT8_9").addDescription("Bai hoc: Recursion").message();
	int n, n1;
	cout << "Nhap so muon chuyen tu he 10 sang he 2: ";
	cin >> n;
	cout << endl << "Chuyen tu he 10 sang he 2: ";
	cout << HEX(n);
	cout << endl;
	cout << "Nhap so muon chuyen tu he 2 sang he 10: ";
	cin >> n1;
	cout << endl << "Chuyen tu he 2 sang he 10: ";
	cout << BIN(n);
	cout << endl;
}