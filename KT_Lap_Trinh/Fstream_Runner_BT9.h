#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Runner.h"
using namespace std;
string inputString(string s)
{
	cout << "Nhap chuoi: ";
	getline(cin, s);
	return s;
}
void writeToFile(string s1)
{
	ofstream outFile("BT9.txt");
	outFile << s1;
	outFile.close();
}
string readFromFile()
{
	string s2;
	ifstream inFile("BT9.txt");
	getline(inFile, s2);
		inFile.close();
		return s2;
}
bool compareString(string s1, string s2)
{
	return s1 == s2;
}
string connectString(string s1, string s2)
{
	return s1 + s2;
}
void countVowel(string s1)
{
	int dem = 0;
	for (char c : s1) //duyệt qua các phần tử trong một chuỗi ký tự (std::string) hoặc một mảng các ký tự (char[]).
	{
		if (c == 'E' || c == 'U' || c == 'O' || c == 'A' || c == 'I' || c == 'e' || c == 'u' || c == 'o' || c == 'a' || c == 'i')
		{
			dem++;
		}
	}
	cout << " " << dem;
}
int countWordsInFile() {
	int count = 0;
	string s;
	ifstream file("BT9.txt");
	while (file >> s)
	{
		count++;
	}
	file.close();
	return count;
}
void Fstream_Runner_BT9()
{
	Runner("Fstream_Runner_BT9").addDescription("Bai hoc: Fstream").message();
	string s1, s2;
	s1 = inputString(s1);
	cout << "Chuoi vua nhap: " << s1 << endl;
	writeToFile(s1);
	s2 = readFromFile();
	cout << "\nChuoi trong file: " << s2 << endl;
	cout << "::: So sanh ::: " << endl;
	if (compareString(s2, s2))
	{
		cout << " Bang nhau.";
	}
	else
	{
		cout << " Khong bang nhau.";
	}
	cout << endl;
	cout << "::: Noi chuoi ::: " << endl;
	cout << " " << connectString(s1, s2);
	cout << endl;
	cout << "::: So luong nguyen am ::: " << endl;
    countVowel(s1) ;
	cout << endl;
	cout << "::: So luong ky tu ::: " << endl;
	cout << "So luong ky tu: " << countWordsInFile();
}