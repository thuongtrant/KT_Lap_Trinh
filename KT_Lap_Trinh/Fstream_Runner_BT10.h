//#pragma once
//#include <iostream>
//#include <fstream>
//#include<string>
//#include <iomanip>
//#include "Runner.h"
//using namespace std;
//
//struct SinhVien {
//	string MSSV;
//	string name;
//	int year;
//	SinhVien input()
//	{
//		cin.ignore();
//		cout << "Nhap MSSV cua hoc sinh "; getline(cin, MSSV);
//		cout << endl;
//		cout << "Nhap ten cua hoc sinh "; getline(cin, name);
//		cout << endl;
//		cout << "Nhap nam sinh cua hoc sinh "; cin >> year;
//		cout << endl;
//
//		return *this;
//	}
//	SinhVien print()
//	{
//		cout << " MSSV cua hoc sinh " << MSSV;
//		cout << endl;
//		cout << " Ten cua hoc sinh " << name;
//		cout << endl;
//		cout << " Nam sinh cua hoc sinh " << year;
//		return *this;
//	}
//};
//void writeToFile()
//{
//	ofstream outFile("BT9.txt");
//	
//	outFile.close();
//}
//
//void Fstream_Runner_BT10()
//{
//	Runner("Fstream_Runner_BT10").addDescription("Bai hoc: Fstream").message();
//
//	SinhVien lop[45];
//	int siSo;
//	cout << "Nhap si so lop hoc: ";
//	cin >> siSo;
//	cin.ignore();
//	for (int i = 0; i < siSo; i++)
//	{
//		lop[i].input();
//	}
//
//	for (int i = 0; i < siSo; i++)
//	{
//		lop[i].print();
//	}
//}
#include <iostream>
#include <string>;
#include <fstream>

using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    int namSinh;
};

void nhapSinhVien(SinhVien& sv) {
    cout << "Nhap ma sinh vien: ";
    cin >> sv.maSV;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, sv.hoTen);
    cout << "Nhap nam sinh: ";
    cin >> sv.namSinh;
}

void luuSinhVien(ofstream& fout, SinhVien sv) {
    fout << sv.maSV << endl;
    fout << sv.hoTen << endl;
    fout << sv.namSinh << endl;
}

void xuatSinhVien(ifstream& fin, string maSV) {
    string line;
    while (getline(fin, line)) {
        if (line == maSV) {
            getline(fin, line);
            cout << "Ho ten: " << line << endl;
            getline(fin, line);
            cout << "Nam sinh: " << line << endl;
            return;
        }
    }
    cout << "Khong tim thay sinh vien co ma " << maSV << endl;
}


void Fstream_Runner_BT10()
{
	Runner("Fstream_Runner_BT10").addDescription("Bai hoc: Fstream").message();
    SinhVien* dsSV = new SinhVien[10];

    // Nhap danh sach sinh vien
    int n;
    cout << "Nhap so luong sinh vien (toi da 10): ";
    cin >> n;
    if (n > 10) {
        n = 10;
    }
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        nhapSinhVien(dsSV[i]);
    }

    // Luu danh sach sinh vien xuong file
    ofstream fout("BT10.txt");
    for (int i = 0; i < n; i++) {
        luuSinhVien(fout, dsSV[i]);
    }
    fout.close();

    // Doc thong tin sinh vien tu file va xuat ra man hinh
    ifstream fin("BT10.txt");
    string maSV;
    cout << "Nhap ma sinh vien muon xem thong tin: ";
    cin >> maSV;
    xuatSinhVien(fin, maSV);
    fin.close();

    delete[] dsSV;
}
