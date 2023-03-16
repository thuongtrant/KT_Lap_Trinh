#pragma once
#include <iostream>
#include <ctime>
#include<string>
#include"Runner.h"
using namespace std;

struct NhanVien {
	string ma;
	string name;
	int namVao;
	int namSinh;
	NhanVien& input()
	{
		cout << "Nhap ma nhan vien: "; getline(cin, ma);
		cout << "Nhap ho va ten nhan vien: "; getline(cin, name);
		cout << "Nhap nam vao lam: "; cin >> namVao;
		cout << "Nhap nam sinh: "; cin >> namSinh;
		return *this;
	}
	NhanVien& print()
	{
		cout << "Ma nhan vien la " << ma << endl;
		cout << "Ho va ten nhan vien: " << name << endl;
		cout << "Nam vao lam: " << namVao << endl;
		cout << "Nam sinh: " << namSinh << endl;
		return *this;
	}
	NhanVien& caculate()
	{
		cout << "Tuoi cua nhan vien " << name << " la: " << 2023 - namSinh << endl;
		cout << "Tham nien lam viec " << name << " la: " << 2023 - namVao;
		return *this;
	}
	
};
	
class Struct_Runner_BT3 : public Runner {
public:
	static void run()
	{
		NhanVien a;
		a.input().print().caculate();
	}
};