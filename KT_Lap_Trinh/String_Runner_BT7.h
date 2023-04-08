#pragma once
#include <iostream>
#include <cstring>
#include<stdio.h>
#include<string>
#include "Runner.h"
using namespace std;

 char* findString( char s1[], char s2[]) {
	return strstr(s1, s2);
}
void String_Runner_BT7()
{
	Runner("String_Runner_BT7").addDescription("Bai hoc: String").message();
	char s1[1000];
	char s2[100];
	cout << "Nhap chuoi thu nhat: ";
	cin.getline(s1, 100);
	cout << "Nhap chuoi thu hai: ";
	cin.getline(s2, 100);
	char* location = findString(s1, s2);
	if (location != NULL )
	{
		cout << "Chuoi thu hai xuat hien trong chuoi mot tai vi tri : " << location - s1;
	}
	else
	{
		cout << "Chuoi hai khong xuat hien trong chuoi thu nhat.";
	}
	cout << endl;
	char s3[100];
	cin.getline(s3, 100);
	cout << "Nhap chuoi thu ba: ";
	//Cho phép người dùng nhập chuỗi s3. Tiến hành thay thế chuỗi s2 trong s1 bằng s3. 
	//void * memcpy(void * destination, const void * source, size_t num);
	memcpy(location, s3, strlen(s3)); 
		
	//location = findString(location + strlen(s3), s2);
	
	cout << "Chuoi moi: " << s1;
	//s1.replace(location, s2, s3); // Thay thế  s2 kí tự tại vị trí bắt đầu là location bằng chuỗi s3
}