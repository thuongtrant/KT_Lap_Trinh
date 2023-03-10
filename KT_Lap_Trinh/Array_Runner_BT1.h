#pragma once
#include <iostream>
#include "Runner.h"
using namespace std;

void Array_Runner_BT1()
{
	Runner("Array_Runner_BT1").addDescription("Bai hoc: Array").message();

		int arr1[3][4] = {
			{ 8, 4, -1, 5},
			{ 2, 2, 6, 9},
			{ 11, 2, 5, 4}
		};
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << arr1[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
}