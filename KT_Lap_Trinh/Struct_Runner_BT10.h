#pragma once
#include <iostream>
using namespace std;
#include "Runner.h"
class GPG {
private:
	int hour;
	int minute;
	int second;
public:
	GPG input()
	{
		cout << "Nhap gio: ";
		cin >> hour;
		cout << "Nhap phut: ";
		cin >> minute;
		cout << "Nhap giay: ";
		cin >> second;
		return *this;
	}
	GPG timeDiff(GPG t1)
	{
		GPG time;
		time.hour = abs(t1.hour * 3600 - hour * 3600);
		time.minute = abs(t1.minute * 60 - minute * 60);
		time.second = abs(t1.second - second);
		return time;
	}
	GPG print()
	{
		cout << hour << ":" << minute << ":" << second << std::endl;
		return *this;
	}
};
class Struct_Runner_BT10 : public Runner {
public:
	static void run()
	{
		GPG t1, t2;
		t1.input().print();
		t2.input().print();
		cout << "Khoang cach giua hai gia tri gio phut giay: "; t1.timeDiff(t2).print();
	}
	
};

