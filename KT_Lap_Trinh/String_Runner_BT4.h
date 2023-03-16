#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;
bool palindrome(char s1[50])
{
	int j = strlen(s1);
	for (int i = 0; i < strlen(s1); i++)
	{
		
		if (s1[i] != s1[j-1-i])
		{
			return false;
			break;
		}
	}
	return true;
}
void String_Runner_BT4()
{
	Runner("String_Runner_BT4").addDescription("Bai hoc: String").message();
	char s1[50];
	cout << "Nhap vao mot chuoi ki tu: ";
	cin.get(s1, 50);
	cout << "Chuoi ki tu da nhap: " << s1 << endl;
	if (palindrome(s1))
		cout << "La chuoi palindrome.";
	else
		cout << "Khong la chuoi palindrome.";

}