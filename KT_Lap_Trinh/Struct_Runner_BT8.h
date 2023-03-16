#pragma once
#include <algorithm>
#include<cstdlib>
#include "Runner.h";
using namespace std;
struct Matrix {
	int row;
	int column;

	Matrix(int row, int column) {
		this->row = row;
		this->column = column;
	}

	/**
	 * Print the position to the console
	 *
	 * @return Array_Pos_BT11
	 */
	Matrix& print() {
		cout << "(" << row << ", " << column << ")" << endl;
		return *this;
	}

	/**
	* Check the position is valid
	*
	* @return bool
	*/
	bool isValid() {
		return row > -1 || column > -1;
	}
};

class Struct_Runner_BT8 : public Runner
{
public:
	int row;
	int column;
	int arr[100][100];

	/**
	 * Set row, column from keyboard
	 *
	 * @return Array_Runner_BT11
	 */
	Struct_Runner_BT8& input() {
		cout << "[KEYBOARD] row = ";
		cin >> this->row;
		cout << "[KEYBOARD] column = ";
		cin >> this->column;
		return *this;
	}

	/**
	 * Generate an array with random values from given row, column
	 *
	 * @return Array_Runner_BT11
	 */
	Struct_Runner_BT8& generate(bool isUnique = false) {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				//cout << "a[" << i << "][" << j << "]= ";
				arr[i][j] = rand() % 10;
				/*int value = rand() % 10;
				while (isUnique && this->include(value)) {
					value = rand() % 10;
				}
				arr[i][j] = value;*/
			}
		}
		return *this;
	}

	/**
	 * Print the array to the console
	 *
	 * @return Array_Runner_BT11
	 */
	Struct_Runner_BT8& print() {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		return *this;
	}
	static Struct_Runner_BT8& run() {
		Struct_Runner_BT8 instance;

		cout << ":::::: " << endl;
		instance.input().generate().print();
	}
};
