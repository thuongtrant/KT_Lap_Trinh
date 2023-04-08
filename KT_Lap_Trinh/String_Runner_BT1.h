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
		cout << "Hai chuoi nay bang nhau\n";
	}
	else
		if (strcmp(s1, s2) < 0)
			cout << "Chuoi mot nho hon chuoi hai\n";
		else
			cout << "Chuoi mot lon hon chuoi hai\n";
	for (int i = 0; i < strlen(s1); i++)
	{
		if (i == 0 || isspace(s1[i - 1]))
		{
			s1[i] = toupper(s1[i]);
		}
		else
		{
			s1[i] = tolower(s1[i]);
		}
	}
	cout << "Chuoi thu nhat: " << s1;
	for (int i = 0; i < strlen(s2); i++)
	{
		if (i == 0 || isspace(s2[i - 1]))
		{
			s2[i] = toupper(s2[i]);
		}
		else
		{
			s2[i] = tolower(s2[i]);
		}
	}
	cout << endl;
	cout << "Chuoi thu hai: " << s2;

		//char* strcat(char* s1, const char* s2);
	strcat_s(s1, s2);
		cout << s1 << endl;
		
}