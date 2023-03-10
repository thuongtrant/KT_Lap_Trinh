#pragma once
#include"Runner.h"
#include <cstdlib>
class Array_Runner_BT12 : public Runner {
private:
	
public:
	int row;
	int column;
	int array[100][100];
	Array_Runner_BT12() : Runner()
	{
		this->name = "Array_Runner_BT12";
		this->desc = "Bai hoc: Array.";
	}

	~Array_Runner_BT12()
	{
		cout << "Delete " << this->name << endl;
	}
	
	Array_Runner_BT12& input()
	{
		cout << "Row = "; cin >> this->row;
		cout << "Column = "; cin >> this->column;
		return *this;
	}
	Array_Runner_BT12& set(int row, int column)
	{
		this->row = row;
		this->column = column;
		return *this;
	}
	Array_Runner_BT12& generate()
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				array[i][j] = rand() % 10;

			}
		}
		return *this;
	}
	Array_Runner_BT12& print()
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << array[i][j] << "\t";

			}
			cout << endl;
		}
		return *this;
	}
	int parseArrValue(int value) {
		return value >= 0 ? value : 0;
	}
	Array_Runner_BT12& sumArr(Array_Runner_BT12& a)
	{
		Array_Runner_BT12 *result = new Array_Runner_BT12();
		(* result).set(this->row > a.row ? this->row : a.row, this->column > a.column ? this->column : a.column);
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				(* result).array[i][j] = this->parseArrValue(a.array[i][j]) + this->parseArrValue(array[i][j]);
			}
		}
		return (* result);
	}
	Array_Runner_BT12& operator+(Array_Runner_BT12& a) 
	{
		return this->sumArr(a);
	}
	static void run()
	{
		Array_Runner_BT12 instanceA, instanceB, instanceC;
		instanceC = instanceA.input().generate().print() + instanceB.input().generate().print();
		cout << "Tong hai mang la: " << endl;
		instanceC.print();

	}
	
};


