#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include "Runner.h"
using namespace std;
//void tach(char name[])
//{
//	char* ptok = strtok(name, " ");
//		while (ptok != NULL)
//		{
//			cout << ptok << endl;
//			ptok = strtok(NULL, "");
//		}
//}
void String_Runner_BT8()
{
	Runner("String_Runner_BT8").addDescription("Bai hoc: String").message();
	//char name[30];
	//cout << "Nhap ho va ten.";
	//cin.getline(name, 30);
	//cout << "Ho va ten: " << name << endl;
	//char* ho = strtok(name, " ");
	//char* chulot = strtok(NULL, " ");
	//char* ten = strtok(NULL, " ");
	//cout << "Ho: " << ho << endl;
	//cout << "Chu lot: " << chulot << endl;
	//cout << "Ten: " << ten << endl;
	
	//string hoTen;
	//cout << "Nhap vao ho ten cua ban: ";
	//getline(cin, hoTen);

	//string ho, ten, chuLot;
	//int vtHo = hoTen.rfind(' ');  // Tìm vị trí cuối cùng của khoảng trắng trong chuỗi
	//ho = hoTen.substr(0, vtHo);   // Lấy chuỗi từ đầu đến vị trí của khoảng trắng
	//chuLot = hoTen.substr(vtHo + 1, hoTen.length() - vtHo - 1);  // Lấy chuỗi từ vị trí khoảng trắng đến cuối chuỗi
	//int vtTen = chuLot.find(' '); // Tìm vị trí đầu tiên của khoảng trắng trong chuỗi
	//ten = chuLot.substr(vtTen + 1, chuLot.length() - vtTen - 1); // Lấy chuỗi từ vị trí khoảng trắng đến cuối chuỗi
	//chuLot = chuLot.substr(0, vtTen); // Lấy chuỗi từ đầu đến vị trí khoảng trắng đầu tiên

	//// In ra các thành phần riêng lẻ trên mỗi dòng
	//cout << "Ho: " << ho << endl;
	//cout << "Chu lot: " << chuLot << endl;
	//cout << "Ten: " << ten << endl;

	string hoten;
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	// Tach ho ten
	string ho, lot, ten;
	int vi_tri_dau_tien = hoten.find_first_of(" ");
	int vi_tri_cuoi_cung = hoten.find_last_of(" ");
	ho = hoten.substr(0, vi_tri_dau_tien);
	lot = hoten.substr(vi_tri_dau_tien + 1, vi_tri_cuoi_cung - vi_tri_dau_tien - 1);
	ten = hoten.substr(vi_tri_cuoi_cung + 1);

	// In ra ket qua
	cout << "Ho: " << ho << endl;
	cout << "Chu lot: " << lot << endl;
	cout << "Ten: " << ten << endl;
}
// rfind(): tìm kiếm theo chiều từ cuối trở về đầu.
// find(): tìm kiếm theo chiều từ đầu đến hết chuỗi.