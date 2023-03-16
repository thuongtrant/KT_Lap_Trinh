#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;

//a.Hàm nhận vào 1 chuỗi ký tự. Trả về kết quả là chuỗi đó sau khi loại bỏ hết khoảng trắng đầu và cuối chuỗi.
string trim(const string& str) {
	size_t start = str.find_first_not_of(" \t");
	size_t end = str.find_last_not_of(" \t");
	return (start == string::npos || end == string::npos) ? "" : str.substr(start, end - start + 1);
}

//b. Hàm đếm số khoảng trắng của 1 chuỗi.
void countIsspace(char s1[50])
{
	char* space = s1;
	int dem = 0;
	while (*space)
	{
		if (isspace(*space))
			dem++;
		space++;
	}
	cout << "So ki tu khoang trang la: " << dem << endl;
}
//c. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự  chữ cái.
void countIsalpha(char s1[50])
{
	char* alpha = s1;
	int dem = 0;
	while (*alpha)
	{
		if (isalpha(*alpha))
			dem++;
		alpha++;
	}
	cout << "So ki tu chu cai la: " << dem << endl;
}

//c. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự  chữ số.
void countIsdigit(char s1[50])
{
	char* digit = s1;
	int dem = 0;
	while (*digit)
	{
		if (isdigit(*digit))
			dem++;
		digit++;
	}
	cout << "So ki tu chu so la: " << dem << endl;
}

//d. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in hoa
void countIsupper(char s1[50])
{
	char* upper = s1;
	int dem = 0;
	while (*upper)
	{
		if (isupper(*upper))
			dem++;
		upper++;
	}
	cout << "So ki tu chu cai in hoa la: " << dem << endl;
}

//e. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in thường.
void countIslower(char s1[50])
{
	char* lower = s1;
	int dem = 0;
	while (*lower)
	{
		if (islower(*lower))
			dem++;
		lower++;
	}
	cout << "So ki tu chu cai in thuong la: " << dem << endl;
}

//f. Hàm chuyển toàn bộ chuỗi sang in hoa
void toUpper(const string& s1) {
    string result;
    for (char c : s1) {
        result += toupper(c);
    }
	cout << "Chuoi chuyen sang in hoa: " << result << endl;
}

//g. Hàm chuyển toàn bộ chuỗi sang in thường
void toLower(const string& s1) {
	string result;
	for (char c : s1) {
		result += tolower(c);
	}
	cout << "Chuoi chuyen sang in hoa: " << result << endl;
}

//h. Hàm chuyển chuỗi sang dạng in hoa ký tự đầu tiên mỗi từ.
void toTitleCase(const string& s1) {
	string result = s1;
	bool isWordStart = true;
	for (int i = 0; i < result.length(); i++) {
		if (isWordStart && isalpha(result[i])) {
			result[i] = toupper(result[i]);
			isWordStart = false;
		}
		else if (isspace(result[i])) {
			isWordStart = true;
		}
	}
	cout << "Chuoi chuyen sang in hoa ky tu dau tien: " << result << endl;
}

//i. Hàm đếm xem 1 chuỗi có bao nhiêu từ.
void countString(char s1[50])
{
	cout << "Do dai chuoi: " << strlen(s1) << endl;

}


void String_Runner_BT3()
{
	Runner("String_Runner_BT3").addDescription("Bai hoc: String").message();
	char s1[50];
	cin.get(s1, 50);
	cout << "Chuoi ban dau: " << s1 << endl;
	countIsspace(s1);
	countIsalpha(s1);
	countIsdigit(s1);
	countIsupper(s1);
	countIslower(s1);
	countString(s1);
	toUpper(s1);
	toLower(s1);

	

}