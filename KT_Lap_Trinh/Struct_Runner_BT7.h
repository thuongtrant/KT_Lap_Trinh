#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include"Runner.h"
using namespace std;

struct Produce 
{
	char code[10];
	string name;
	double price;
	int amount;
	Produce input()
	{
		cout << "Nhap ma san pham "; cin.getline(code, 10);
		cout << "Nhap ten san pham "; getline(cin, name);
		cout << "Nhap gia san pham "; cin >> price;
		cout << "Nhap so luong ton kho "; cin >> amount;
		cin.ignore();
		return *this;
	}
	Produce print()
	{
		cout << "Ma san pham: " << code << endl;
		cout << "Ten san pham: " << name << endl;
		cout << "Gia san pham: " << price << endl;
		cout << "So luong ton kho: " << amount << endl;
		cout << endl;
		return *this;
	}
};
void inputArr(int countProduce, Produce story[45])
{
	for (int i = 0; i < countProduce; i++)
	{
		cout << "+++ Nhap thong tin cua san pham thu: " << i + 1 << endl;
		story[i].input();
	}
}
void printArr(int countProduce, Produce story[45])
{
	for (int i = 0; i < countProduce; i++)
	{
		cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
		story[i].print();
	}
}
void add(Produce x, int location, int countProduce, Produce story[45])
{
	for (int i = countProduce - 1; i >= location; i--)
	{
		story[i + i] = story[i];
	}
	story[location] = x;
	countProduce++;
	story[location].input();
	for (int i = 0; i < countProduce; i++)
	{

		cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
		story[i].print();
	}
	cout << endl;
}

void erase(int location, int countProduce, Produce story[45])
{
	int location1;
	cout << "+++ Nhap vi tri can xoa san pham: ";
	cin >> location1;
	for (int i = location + 1; i < countProduce; i++)
	{
		story[i - 1] = story[i];
	}
	countProduce--;
	
}

void arrange(int countProduce, Produce story[45])
{
	cout << "\t Sap xep thong tin san pham theo so luong ton kho tang \n";
	for (int i = 0; i < countProduce - 1; i++)
	{
		for (int j = i + 1; j < countProduce; j++)
		{
			if (story[i].amount > story[j].amount)
				swap(story[i], story[j]);
		}
	}
	for (int i = 0; i < countProduce; i++)
	{

		cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
		story[i].print();
	}
}


class Struct_Runner_BT7 : public Runner {
public:
	static void run()
	{
		Produce x;
		Produce story[45];
		int location;
		int countProduce;
		cout << "Nhap so san pham can dien thong tin: ";
		cin >> countProduce;
		cin.ignore();
		inputArr(countProduce, story);
		printArr(countProduce, story);
		cout << endl;
		cout << "Nhap vi tri ban muon them: ";
		cin >> location;
		add(x, location, countProduce, story);
		printArr(countProduce, story);
		cout << endl;
		erase(location, countProduce, story);
		cout << endl;
		arrange(countProduce, story);

	}
};