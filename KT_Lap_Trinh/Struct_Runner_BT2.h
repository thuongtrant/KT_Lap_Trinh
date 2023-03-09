#pragma once
#include "Runner.h";
#include "PhanSo.h";


string boolToString(bool a) {
	return a ? "True" : "False";
}

void Struct_Runner_BT2()
{
	Runner("Struct_Runner_BT2").addDescription("Bai hoc: Struct PhanSo").message();

	PhanSo a, b;
	a.nhap();
	b.nhap();

	/* De bai */
	cout << "\n::: Tinh Toan (theo de bai) ::: \n";
	cout << "Tong hai phan so: " << a.cong(b).cong(b).toFloat() << "\n";
	cout << "Hieu hai phan so: " << a.tru(b).toFloat() << "\n";
	cout << "Tich hai phan so: " << a.nhan(b).toFloat() << "\n";
	cout << "Thuong hai phan so: " << a.chia(b).toFloat() << "\n";

	/* Sang tao (nang cao) */
	cout << "\n::: Tinh toan ::: \n";
	cout << a << " + " << b << " = " << (a + b) << "\n";
	cout << a << " - " << b << " = " << (a - b) << "\n";
	cout << a << " * " << b << " = " << (a * b) << "\n";
	cout << a << " / " << b << " = " << (a / b) << "\n";

	cout << "\n::: So sanh ::: \n";
	cout << a << " < " << b << " = " << boolToString(a < b) << "\n";
	cout << a << " > " << b << " = " << boolToString(a > b) << "\n";
	cout << a << " == " << b << " = " << boolToString(a == b) << "\n";
	cout << a << " <= " << b << " = " << boolToString(a <= b) << "\n";
	cout << a << " >= " << b << " = " << boolToString(a >= b) << "\n";

}