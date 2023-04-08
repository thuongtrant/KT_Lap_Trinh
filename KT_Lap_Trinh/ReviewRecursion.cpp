//#include <iostream>
//#include<cstdlib>
//using namespace std;
//
//// Bai 2
//int giaiThua_Bai2(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * giaiThua_Bai2(n - 1);
//}
//// Bai 3
//int fibonacci_Bai3(int n)
//{
//	if (n == 1 || n == 2)
//		return n;
//	else
//		return fibonacci_Bai3(n - 2) + fibonacci_Bai3(n - 1);
//}
//// Bai 4
//int tinhMu_Bai4(int x, int n)
//{
//	if (n == 1)
//		return x;
//	else
//		return x * tinhMu_Bai4(x, n - 1);
//}
//// Bai 5
//int demSo_Bai5(int n)
//{
//	int dem = 0;
//	if (n < 10)
//		return 1;
//	else
//		return dem + 1 + demSo_Bai5(n / 10);
//}
//// Bai 6
//int daoNguoc_Bai6(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		cout << n % 10;
//	return daoNguoc_Bai6(n / 10);
//}
//// Bai 7
//int tongChan_Bai7(int n)
//{
//	int chan = (n % 10) % 2;
//	if (n == 0)
//		return 0;
//	else if (chan == 0)
//		return n % 10 + tongChan_Bai7(n / 10);
//	else
//		return tongChan_Bai7(n / 10);
//}
//int tongLe_Bai7(int n)
//{
//	int chan = (n % 10) % 2;
//	if (n == 0)
//		return 0;
//	else if (chan != 0)
//		return n % 10 + tongLe_Bai7(n / 10);
//	else
//		return tongLe_Bai7(n / 10);
//}
//// Bai 8
//int HEX_Bai8(int n)
//{
//	if (n/2 == 0)
//		return 1;
//	else
//	return n % 2 + HEX_Bai8(n / 2)*10;
//}
//// Bai 9
//int BIN_Bai9(int n)
//{
//	if (n == 0)
//		return 0;
//	else
//		return n % 10 + BIN_Bai9(n / 10) * 2;
//}
// // Bai 10
//int UCLN_Bai10(int a, int b)
//{
//	int r;
//	if (b == 0)
//		return a;
//	else
//	{ 
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return UCLN_Bai10(a, b);
//
//}
// // Bai 11
//int tongMang_Bai11(int a[], int n)
//{
//	if (n == 1)
//		return a[0];
//	else
//		return a[n - 1] + tongMang_Bai11(a, n-1);
//}
//// Bai 12
//int minMang_Bai12(int a[], int n)
//{
//	int min;
//	if (n == 1)
//		return a[0];
//	else
//	{
//		min = minMang_Bai12(a, n - 1);
//		if (a[n - 1] < min)
//			min = a[n - 1];
//	}
//	return min;
//
//}
//// Bai 13
//
//int toHop(int n, int k)
//{
//	return giaiThua_Bai2(n) / giaiThua_Bai2(k) * giaiThua_Bai2(n - k);
//}
//void Pascal_Bai13(int h)
//{
//	if (h == 0)
//		cout <<  1;
//	else
//	{
//		Pascal_Bai13(h - 1);
//		cout << endl;
//		for (int i = 0; i < h; i++)
//		{
//			cout << " " << toHop(h - 1, i);
//		}
//	}
//}
//int main()
//{
//	//int n;
//	//cout << "Nhap mot so nguyen duong: "; cin >> n;
//	//cout << "Ket qua " << n << "! : " << giaiThua_Bai2(n);
//	cout << endl;
//	//cout << "Gia tri Fibonacci cua " << n << " la: " << fibonacci_Bai3(n);
//	cout << endl;
//	//int x;
//	//cout << "Nhap so nguyen: "; cin >> x;
//	//int a;
//	//cout << "Nhap so mu: "; cin >> a;
//	//cout << "Ket qua " << x << "^" << a << ": " << tinhMu_Bai4(x, a);
//	cout << endl;
//	//cout << "So chu so cua " << n << " la: " << demSo_Bai5(n);
//	//cout << n << " sau khi duoc dao nguoc: ";
//	//cout << daoNguoc_Bai6(n);
//	cout << endl;
//	//cout << "Tong cac phan tu chan trong " << n << " la: " << tongChan_Bai7(n);
//	//cout << endl;
//	//cout << "Tong cac phan tu le trong " << n << " la: " << tongLe_Bai7(n);
//	//cout << n << " chuyen sang nhi phan: ";
//	//cout << HEX_Bai8(n);
//	//cout << endl;
//	//cout << n << " chuyen sang thap phan: ";
//	//cout << BIN_Bai9(n);
//	
//	//int a, b;
//	//cout << "Nhap hai so nguyen duong: ";
//	//cin >> a >> b;
//	//cout << "Uoc chung lon nhat cua " << a << ", " << b << " la: " << UCLN_Bai10(a, b);
//	//int arr[100];
//	//int n;
//	//cout << "Nhap so phan tu can dung tong mang: "; cin >> n;
//	//cout << "Nhap phan tu trong mang" << endl;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	 arr[i] = rand()%10;
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//	//cout << "Tong cac phan tu trong mang: " << tongMang_Bai11(arr, n);
//	//cout << endl;
//	//cout << "Phan tu nho nhat trong mang la: " << minMang_Bai12(arr, n);
//	int h;
//	cout << "Nhap chieu cao cua tam giac Pascal: "; cin >> h;
//	 Pascal_Bai13(h);
//	 cout << endl;
//}