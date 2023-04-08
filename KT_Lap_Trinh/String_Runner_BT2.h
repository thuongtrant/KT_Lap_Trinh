#pragma once
#include <iostream>
#include <cstring>
#include "Runner.h"
using namespace std;

void String_Runner_BT2()
{
	Runner("String_Runner_BT2").addDescription("Bai hoc: String").message();

	//char s1[20] = "Ho, ten";
	//char s2[] = "";
	//strncat(s1, s2, 2);
	//cout << s1 << endl;
	/*char* ptok = strtok(s1, s2);
	while (ptok != NULL)
	{
		cout << ptok << endl;
		ptok = strtok(NULL, s2);
	}*/
	string name = "ho, ten";
	int pos = name.find(","); // tìm vị trí dấu phẩy để tách họ và tên

	// tách họ và tên và kết hợp chúng lại
	string last_name = name.substr(0, pos);
	string first_name = name.substr(pos + 2, name.length());
	string full_name = last_name + " " + first_name;

	// in kết quả ra màn hình
	
}