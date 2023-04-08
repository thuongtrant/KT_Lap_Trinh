#pragma once
#include <iostream>
#include <fstream>
#include<string>
#include "Runner.h"
using namespace std;

void Fstream_Runner_BT6()
{
	Runner("Fstream_Runner_BT6").addDescription("Bai hoc: Fstream").message();
	char c;
	ifstream inFile("BT4.txt");
	ofstream outFile("BT6.txt");
	while (inFile.get(c))
	{
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		{
			outFile << c << " ";
		}
	}
	inFile.close();
	outFile.close();
	cout << "Ket qua duoc ghi vao file BT6.txt." << endl;
}