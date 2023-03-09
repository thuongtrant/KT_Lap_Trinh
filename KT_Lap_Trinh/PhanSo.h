#pragma once
#include <iostream>
using namespace std;

struct PhanSo
{
	int tu, mau;
	void nhap()
	{
		cout << "Khoi tao PhanSo a/b:\n";
		cout << "a = ";
		cin >> tu;

		cout << "b = ";
		cin >> mau;
		cout << "Da khoi tao PhanSo = " << PhanSo(tu, mau) << endl;
	}
	PhanSo(int tu = 0, int mau = 1)
	{
		this->tu = tu;
		this->mau = mau;
	}

	/* Calculator methods (theo de bai) */

	PhanSo cong(PhanSo a)
	{
		PhanSo ps;
		ps.tu = a.tu * mau + a.mau * tu;   // 1*3 + 2*1 = 5
		ps.mau = a.mau * mau;				// 2*3 = 6
		return ps.rutGon();
	}
	PhanSo tru(PhanSo a)
	{
		PhanSo ps;
		ps.tu = a.tu * mau - a.mau * tu;   // 1*3 + 2*1 = 5
		ps.mau = a.mau * mau;				// 2*3 = 6
		return ps.rutGon();
	}
	PhanSo nhan(PhanSo a)
	{
		PhanSo ps;
		ps.tu = a.tu * tu;
		ps.mau = a.mau * mau;
		return ps.rutGon();
	}
	PhanSo chia(PhanSo a)
	{
		PhanSo ps;
		ps.tu = a.tu * mau;
		ps.mau = a.mau * tu;
		return ps.rutGon();
	}

	PhanSo rutGon()
	{
		return PhanSo(tu, mau);
	}

	/* Parser */

	float toFloat()
	{
		return (float)tu / mau;
	}

	/* Compairator: PhanSo vs PhanSo */

	bool operator==(const PhanSo& a) const
	{
		return a.tu * mau == a.mau * tu;
	}
	bool operator!=(const PhanSo& a) const
	{
		return a.tu * mau != a.mau * tu;
	}
	bool operator<(const PhanSo& a) const
	{
		return (float)tu / mau < (float)a.tu / a.mau;
	}
	bool operator>(const PhanSo& a) const
	{
		return (float)tu / mau > (float)a.tu / a.mau;
	}
	bool operator<=(const PhanSo& a) const
	{
		PhanSo _this(tu, mau);
		return _this < a || _this == a;
	}
	bool operator>=(const PhanSo& a) const
	{
		PhanSo _this(tu, mau);
		return _this > a || _this == a;
	}

	/* Compairator: PhanSo vs Int */
	bool operator==(const int& a) const
	{
		return a * mau == tu;
	}
	friend PhanSo operator==(int b, PhanSo a)
	{
		return b == a;
	}

	/* Calucator: PhanSo vs PhanSo */

	PhanSo operator+(const PhanSo& a) const
	{
		return PhanSo(tu, mau).cong(a);
	}
	PhanSo operator-(const PhanSo& a) const
	{
		return PhanSo(tu, mau).tru(a);
	}
	PhanSo operator*(const PhanSo& a) const
	{
		return PhanSo(tu, mau).nhan(a);
	}
	PhanSo operator/(const PhanSo& a) const
	{
		return PhanSo(tu, mau).chia(a);
	}

	/* PhanSo vs Int */
	PhanSo operator+(const int& a) const
	{
		return PhanSo(tu, mau).cong(PhanSo(a, 1));
	}
	friend PhanSo operator+(int b, PhanSo a)
	{
		return a + b;
	}

	/* Cout */
	friend ostream& operator << (ostream& o, const PhanSo& a)
	{
		o << a.tu << "/" << a.mau;
		return o;
	}
};