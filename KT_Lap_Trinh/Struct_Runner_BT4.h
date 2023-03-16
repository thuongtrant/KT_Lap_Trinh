#pragma once
#include <iostream>
#include <ctime>
#include<string>
#include"Runner.h"
using namespace std;

struct Student {
	string MSSV;
	string name;
	string location;
	int year;
	double math;
	double literature;
	double english;
	Student input()
	{
		cin.ignore();
		cout << "Nhap MSSV cua hoc sinh "   ; getline(cin,MSSV) ;
		cout << endl;
		cin.ignore();
		cout << "Nhap ten cua hoc sinh "  ; getline(cin, name);
		cout << endl;
		cin.ignore();
		cout << "Nhap dia chi cua hoc sinh " ; getline(cin, location);
		cout << endl;
		cin.ignore();
		cout << "Nhap nam sinh cua hoc sinh " ; cin >> year;
		cout << endl;
		cin.ignore();
		cout << "Nhap diem toan cua hoc sinh " ; cin >> math;
		cout << endl;
		cin.ignore();
		cout << "Nhap diem van cua hoc sinh " ; cin >> literature;
		cout << endl;
		cin.ignore();
		cout << "Nhap diem tieng anh cua hoc sinh " ; cin >> english;
		cout << endl;
		
		return *this;
	}
	Student print()
	{
		cout << " MSSV cua hoc sinh " << MSSV; 
		cout << endl;
		cout << " Ten cua hoc sinh " << name;
		cout << endl;
		cout << " Dia chi cua hoc sinh " << location;
		cout << endl;
		cout << " Nam sinh cua hoc sinh " << year;
		cout << endl;
		cout << " Diem toan cua hoc sinh " << math;
		cout << endl;
		cout << " Diem van cua hoc sinh " << literature;
		cout << endl;
		cout << " Diem tieng anh cua hoc sinh " << english;
		cout << endl;
		return *this;
	}
	double average() {
		return ((math + literature) * 2 + english) / 5;
	}
	
	Student toRate()
	{
		if (average() > 8)
			cout << "Xep loai gioi.";
		else if (6.5 < average() < 8)
			cout << "Xep loai kha.";
		else if (5 < average() < 6.5)
			cout << "Xep loai trung binh.";
		else if(average() < 5)
			cout << "Xep loai duoi trung binh.";
		return *this;
	}
	//Student& printCardinal_numbers(Student listStudent[])
	//{
	//	int number;
	//	cout << "Nhap so thu tu sinh vien can xem: ";
	//	cin >> number;
	//	if (number <= 45 && number >= 1)
	//	{
	//		cout << "Thong tin sinh vien thu " << number << ": " << endl;
	//		print(a);
	//	}
	//	return *this;
	//}
		/**
	 * Find the index of the given number which is included in the array
	 *
	 * @param int number The given number which you want to find
	 *
	 * @return int[2]
	 */
	//int* findStudentIndex(int number) const {
	//	static int pos[2];
	//	for (int i = 0; i < numberOfPpupils; i++)
	//	{
	//		for (int j = 0; j < column; j++)
	//		{
	//			if (number == arr[i][j])
	//			{
	//				pos[0] = i;
	//				pos[1] = j;
	//				return pos;
	//			}
	//		}
	//	}
	//	pos[0] = -1;
	//	pos[1] = -1;
	//	return pos;
	//}
	
};

//struct Class {
//	Student listStudent[45];
//	Class& input()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			Student tmp;
//			tmp.input(listStudent[45]);
//			listStudent[i] = tmp;
//
//		}
//		return *this;
//	}
//	Class& print()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			Student tmp;
//			tmp.print(listStudent[45]);
//			listStudent[i] = tmp;
//
//		}
//		return *this;
//	}
//	Class& printCardinal_numbers()
//	{
//		/*for (int i = 0; i < 3; i++) {
//			Student temp;
//			temp.print(&listStudent[number-1]);
//			listStudent[i] = temp;
//		}*/
//		return *this;
//	}
//
//};

class Struct_Runner_BT4 : public Runner {
public:
	static void run()
	{
		Student studentArr[45];
		int countStudent;
		cout << "Nhap si so cua lop hoc: ";
		cin >> countStudent;
		for (int i = 0; i < countStudent; i++)
		{
			cout << "Nhap thong tin cho sinh vien thu " << i + 1 << endl;
			studentArr[i].input();
		}
		for (int i = 0; i < countStudent; i++)
		{
			cout << "Xuat thong tin cho sinh vien thu " << i + 1 << endl;
			studentArr[i].print();
		}
		int number;
		cout << "Nhap so thu tu cua sinh vien muon xuat thong tin: ";
		cin >> number;
		studentArr[number - 1].print();
		cout << "Diem trung binh  " << studentArr[number - 1].average();
		cout << endl;
	/*	cout << "Hoc luc " <<*/ studentArr[number - 1].toRate();
		/*Class a;
		a.input().print();*/

	}
};