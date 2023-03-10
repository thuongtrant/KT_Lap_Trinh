#pragma once
#include <iostream>
#include<string>
#include"Runner.h"
using namespace std;

struct NhanVien {
	string ma;
	string name;
	int namVao;
	int namSinh;
	void input()
	{
		cout << "Nhap ma nhan vien: "; getline(cin, ma);
		cout << "Nhap ho va ten nhan vien: "; getline(cin, name);
		cout << "Nhap nam vao lam: "; cin >> namVao;
		cout << "Nhap nam sinh: "; cin >> namSinh;
	}
	void output()
	{
		cout <<"Ma nhan vien la"
	}
};