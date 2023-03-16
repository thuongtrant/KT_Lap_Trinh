//#pragma once
//#include <iostream>
//#include <ctime>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include"Runner.h"
//using namespace std;
//struct Produce {
//	char code[10];
//	string name;
//	double price;
//	int amount;
//	Produce input()
//	{
//		cin.ignore();
//		cout << "Nhap ma san pham "; cin.getline(code, 10);
//		cin.ignore();
//		cout << "Nhap ten san pham "; getline(cin, name);
//		cin.ignore();
//		cout << "Nhap gia san pham "; cin >> price;
//		cin.ignore();
//		cout << "Nhap so luong ton kho "; cin >> amount;
//		return *this;
//	}
//	Produce print()
//	{
//		cout << "Ma san pham: " << code << endl;
//		cout << "Ten san pham: " << name << endl;
//		cout << "Gia san pham: " << price << endl;
//		cout << "So luong ton kho: " << amount << endl;
//		cout << endl;
//		return *this;
//	}
//
//
//};
//
//class Struct_Runner_BT6 : public Runner {
//public:
//	static void run()
//	{
//		Produce story[30];
//		int countProduce;
//		cout << "Nhap so luong san pham: ";
//		cin >> countProduce;
//		for (int i = 0; i < countProduce; i++)
//		{
//			cout << "+++ Nhap thong tin cua san pham thu: " << i + 1 << endl;
//			story[i].input();
//		}
//		for (int i = 0; i < countProduce; i++)
//		{
//			cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
//			story[i].print();
//			cout << endl;
//		}
//		cout << endl;
//	/**
//	 * 
//	 *Thêm thông tin của một sản phẩm bất kỳ do người dùng yêu cầu
//	 * 
//	 */
//		Produce x;
//		int location;
//		cout << "Nhap vi tri can them san pham: ";
//		cin >> location;
//		for (int i = countProduce - 1; i >= location; i--)
//		{
//			story[i + i] = story[i];
//		}
//		story[location] = x;
//		countProduce++;
//		story[location].input();
//		for (int i = 0; i < countProduce; i++)
//		{
//			
//			cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
//			story[i].print();
//		}
//		cout << endl;
//
//	/*
//	 *Xóa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu
//	 */
//		int location1;
//		cout << "+++ Nhap vi tri can xoa san pham: ";
//		cin >> location1;
//		for (int i = location + 1; i < countProduce; i++)
//		{
//			story[i - 1] = story[i];
//		}
//		countProduce--;
//		for (int i = 0; i < countProduce; i++)
//		{
//
//			cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
//			story[i].print();
//		}
//		
//		/*
//		 *Sắp xếp thông tin của một sản phẩm theo số lượng tồn kho tăng dần
//		 */
//		cout << "\t Sap xep thong tin san pham theo so luong ton kho tang \n";
//		for (int i = 0; i < countProduce - 1; i++)
//		{
//			for (int j = i + 1; j < countProduce; j++)
//			{
//				if (story[i].amount > story[j].amount)
//					swap(story[i], story[j]);
//			}
//		}
//		for (int i = 0; i < countProduce; i++)
//		{
//
//			cout << "+++ Thong tin cua san pham thu: " << i + 1 << endl;
//			story[i].print();
//		}
//	}
//};