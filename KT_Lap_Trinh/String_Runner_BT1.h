#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;

void String_Runner_BT1()
{
	Runner("String_Runner_BT1").addDescription("Bai hoc: String").message();

	char s1[100];
	char s2[50];
	cout << "Nhap chuoi thu nhat: ";
	cin.get(s1, 100);
	
	cin.ignore();

	cout << endl << "Nhap chuoi thu hai : ";
	cin.get(s2, 50);
	cout << "Chuoi thu nhat: " <<  s1 << endl;
	cout << "Chuoi thu hai: " << s2 << endl;
	//int* strcmp(const char* s1, const char* s2);

	if (strcmp(s1, s2) == 0)
	{
		cout << "Hai chuoi nay bang nhau";
	}
	else
		if (strcmp(s1, s2) < 0)
			cout << "Chuoi mot nho hon chuoi hai";
		else
			cout << "Chuoi mot lon hon chuoi hai";

	s1[0] = toupper(s1[0]);
	s2[0] = toupper(s2[0]);
	cout << "Chuoi mot va chuoi hai sau khi chuyen thanh dang in hoa ky tu dau: \n";
	cout << s1 << endl << s2;
	
	//char* strcat(char* s1, const char* s2);
	/*strcat(s1, s2);
	cout << s1 << endl;*/
	
}