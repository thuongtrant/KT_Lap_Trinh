#pragma once
#include <algorithm>
#include<cstdlib>
#include "Runner.h";

class  Array_Runner_BT11: public Runner
{
private:
	int row;
	int column;
	int arr[100][100];
public:
	Array_Runner_BT11() : Runner()
	{
		this->name = "Array_Runner_BT11";
		this->desc = "Bai hoc: Array";
	}

	/**
	 * Set row, column from keyboard
	 *
	 * @return Array_Runner_BT11
	 */
	Array_Runner_BT11& input() {
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
	Array_Runner_BT11& generate(bool isUnique = false) {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				//cout << "a[" << i << "][" << j << "]= ";
				int value = rand() % 10;
				while (isUnique && this->include(value)) {
					value = rand() % 10;
				}
				arr[i][j] = value;
			}
		}
		return *this;
	}

	/**
	 * Print the array to the console
	 *
	 * @return Array_Runner_BT11
	 */
	Array_Runner_BT11& print() {
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

	/**
	 * Calculate everage of all values in the array
	 * 
	 * @return float
	 */
	float everage() {
		int tong = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				tong += arr[i][j];
			}
		}
		return (float)tong / (row * column);
	}

	/**
	 * Find the index of the given number which is included in the array
	 *
	 * @param int number The given number which you want to find
	 *
	 * @return int[2]
	 */
	int* findIndex(int number) const {
		static int pos[2];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (number == arr[i][j])
				{
					pos[0] = i;
					pos[1] = j;
					return pos;
				}
			}
		}
		pos[0] = -1;
		pos[1] = -1;
		return pos;
	}

	/**
	 * Check whether the number which is included in the array
	 *
	 * @param int number The given number which you want to find
	 * 
	 * @return bool
	 */
	bool include(int number) {
		return this->findIndex(number)[0] > -1;
	}

	/**
	 * Swap two values from array
	 * 
	 * @param int x The number
	 * @param int y The number
	 *
	 * @return Array_Runner_BT11
	 */
	Array_Runner_BT11& swap(int a, int b) {
		int* posA = this->findIndex(a);
		int posAx = posA[0];
		int posAy = posA[1];

		int* posB = this->findIndex(b);
		int posBx = posB[0];
		int posBy = posB[1];


		cout << a << " = (" << posAx << ", " << posAy << ")" << endl;
		cout << b << " = (" << posBx << ", " << posBy << ")" << endl;

		if (posAx > -1 && posBy > -1) {
			//arr[posX[0]][posX[1]] = y;
			//arr[posY[0]][posY[1]] = x;
			arr[posAx][posBy] = b;
			arr[posBx][posBy] = a;
		}
		else {
			cout << "X/Y not found!" << endl;
		}
		return *this;
	}

	int multiplication(int n)
	{
		int tich = 1;
		for (int i = 0; i < row; i++)
		{

			tich *= arr[i][n];
		}
		return tich;
	}

	/**
	 * Run the application
	 *
	 * @return Array_Runner_BT11
	 */
	static Array_Runner_BT11& run() {
		Array_Runner_BT11 instance;

		cout << ":::::: 7a" << endl;
		instance.input().generate().print();


		
		cout << ":::::: 7b" << endl;
		cout << " + Trung binh cac phan tu trong mang so nguyen la: " << instance.everage() << endl;



		cout << ":::::: 7c" << endl;
		int number;
		cout << "Nhap phan tu can tim: "; cin >> number;
		cout << (instance.include(number) ? "Tim thay!" : "Khong tim thay!") << endl;



		cout << ":::::: 7d" << endl;
		int x, y;
		cout << "Nhap phan tu x, y can hoan doi: " << endl; 
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		instance.swap(x, y).print();



		cout << ":::::: 7e" << endl;
		int n;
		cout << "Nhap cot can tinh tich: "; cin >> n;
		cout << instance.multiplication(n) << endl;


		cout << ":::::: 7f" << endl;





		return instance;
	}
};
