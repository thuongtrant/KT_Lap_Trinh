//#include<iostream>
//using namespace std;
//
//#include"Runner.h"
//
//class Fraction {
//private:
//	int tu, mau;
//public:
//	void input()
//	{
//		cout << "Khoi tao PhanSo a/b:\n";
//		cout << "a = ";
//		cin >> tu;
//
//		cout << "b = ";
//		cin >> mau;
//		cout << "Da khoi tao PhanSo = " << Fraction(tu, mau) << endl;
//	}
//	Fraction(int tu = 0, int mau = 1)
//	{
//		this->tu = tu;
//		this->mau = mau;
//	}
//	Fraction cong(Fraction a)
//	{
//		Fraction ps;
//		ps.tu = a.tu * mau + a.mau * tu;  
//		ps.mau = a.mau * mau;	
//		return ps;
//	}
//	Fraction tru(Fraction a)
//	{
//		Fraction ps;
//		ps.tu = a.tu * mau - a.mau * tu;  
//		ps.mau = a.mau * mau;	
//		return ps;
//	}
//
//	Fraction nhan(Fraction a)
//	{
//		Fraction ps;
//		ps.tu = a.tu * tu;
//		ps.mau = a.mau * mau;
//		return ps;
//	}
//
//	Fraction chia(Fraction a)
//	{
//		Fraction ps;
//		ps.tu = a.tu * mau;
//		ps.mau = a.mau * tu;
//		return ps;
//	}
//
//	float toFloat()
//	{
//		return (float)tu / mau;
//	}
//
//	/* Cout */
//	friend ostream& operator << (ostream& o, const Fraction& a)
//	{
//		o << a.tu << "/" << a.mau;
//		return o;
//	}
// };
//
//class Struct_Runner_BT9 : public Runner {
//public:
//	static void run()
//	{
//		Runner("Struct_Runner_BT9").addDescription("Bai hoc: Struct").message();
//
//		Fraction a, b;
//		a.input();
//		b.input();
//
//		/* De bai */
//		cout << "\n::: Tinh Toan (theo de bai) ::: \n";
//		cout << "Tong hai phan so: " << a.cong(b).cong(b).toFloat() << "\n";
//		cout << endl;
//		cout << "Hieu hai phan so: " << a.tru(b) << "\n";
//		cout << endl;
//		cout << "Tich hai phan so: " << a.nhan(b) << "\n";
//		cout << endl;
//		cout << "Thuong hai phan so: " << a.chia(b)<< "\n";
//	}
//};