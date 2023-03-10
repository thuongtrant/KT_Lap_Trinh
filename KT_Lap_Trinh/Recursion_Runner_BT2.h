#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
int tinhGT(int n)
{
	if (n == 1)
		return 1;
	else
		return n * tinhGT(n - 1);
}

	
void Recursion_Runner_BT2()
{
	Runner("Recursion_Runner_BT2").addDescription("Bai hoc: Recursion").message();
	cout << "Nhap so muon tinh giai thua: ";
	int n;
	cin >> n;
	cout << "Giai thua cua " << n << " la: ";
	cout << tinhGT(n);
}