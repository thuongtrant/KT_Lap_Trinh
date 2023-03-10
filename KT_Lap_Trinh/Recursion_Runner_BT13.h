#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;
//Viết hàm đệ qui để xuất ra 1 tam giác Pascal. Biết rằng 1 tam giác Pascal có dạng như sau với chiều cao là 5:
int giaithuaa(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * giaithuaa(n - 1);
}
int Tohop(int n, int k)
{
	return giaithuaa(n) / (giaithuaa(k) * giaithuaa( n - k ));
}
void Pascal(int n)
{
	if (n == 0)
		cout << 1;
	else
	{
		Pascal(n - 1);
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << " " << Tohop(n - 1, i);
		}
	}
}

void Recursion_Runner_BT13()
{
	Runner("Recursion_Runner_BT13").addDescription("Bai hoc: Recursion").message();
	int n;
	cout << "Nhap chieu cao cua tam giac Pascal: ";
	cin >> n;
	Pascal(n);
	cout << endl;
}