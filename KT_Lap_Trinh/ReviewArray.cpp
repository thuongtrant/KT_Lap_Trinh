//#include<iostream>
//#include <cstdlib>
//using namespace std;
//// Bai 2;
////void nhap(int a[4][3], int column, int row)
////{
////	int i = 1;
////	while (i <= 4)
////	{
////		int j = 1;
////		while (j <= 3)
////		{
////			cout << "a[" << i << "][" << j << "] ";
////			cin >> a[i][j];
////			j++;
////		}
////		i++;
////	}
////}
////void xuat(int a[4][3], int column, int row)
////{
////	int i = 1;
////	while (i <= 4)
////	{
////		int j = 1;
////		while (j <= 3)
////		{
////			cout <<  a[i][j] << " ";
////			j++;
////		}
////		cout << endl;
////		i++;
////	}
////}
//
//
////Bai3
//void input(int arr[100][100], int r, int c)
//{
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			arr[i][j] =  rand() % 10;
//		}
//	}
//}
//void print(int arr[100][100], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout <<  arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void tong(int arr[100][100], int r, int c)
//{
//	int tong = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++)
//		{
//			tong += arr[i][j];
//		}
//	}
//	cout << "Tong cac phan tu trong mang la: " << tong;
//
//}
//void Max(int arr[100][100], int r, int c)
//{
//	int posi, posj;
//	int max = arr[0][0];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//				posi = i;
//				posj = j;
//			}
//		}
//	}
//	cout << "Gia tri nho nhat trong mang la: " << max << " xuat hien tai arr[" << posi << "][" << posj << "].";
//}
//void Min(int arr[100][100], int r, int c)
//{
//	int posi, posj;
//	int min = arr[0][0];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				posi = i;
//				posj = j;
//			}
//		}
//	}
//	cout << "Gia tri nho nhat trong mang la: " << min << " xuat hien tai arr[" << posi << "][" << posj << "].";
//}
//void SumC(int arr[100][100], int r, int c)
//{
//	int column;
//	do {
//		cout << "Nhap cot muon tinh tong: ";
//		cin >> column;
//		if (column > c || column < 0)
//			cout << "Khong ton tai cot nay! Nhap lai !";
//	} while (column > c || column < 0);
//	int sum = 0;
//	for (int i = 0; i < r; i++) 
//	{
//		sum += arr[i][column];
//	}
//	cout << "Tong cac phan tu trong cot " << column << " la: " << sum;
//}
//void SumR(int arr[100][100], int r, int c)
//{
//	int column;
//	do {
//		cout << "Nhap dong muon tinh tong: ";
//		cin >> column;
//		if (column > r || column < 0)
//			cout << "Khong ton tai cot nay! Nhap lai !";
//	} while (column > r || column < 0);
//	int sum = 0;
//	for (int j = 0; j < c; j++)
//	{
//		sum += arr[column][j];
//	}
//	cout << "Tong cac phan tu trong cot " << column << " la: " << sum;
//}
//void SumCheoChinh(int arr[100][100], int r, int c)
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (i == j)
//				sum += arr[i][j];
//		}
//	}
//	cout << "Tong cac phan tu tren duong cheo chinh la: " << sum;
//}
//void SumCheoPhu(int arr[100][100], int r, int c)
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (i == j)
//				sum += arr[i][c - i - 1];
//		}
//	}
//	cout << "Tong cac phan tu tren duong cheo phu la: " << sum;
//}
//void Find(int arr[100][100], int r, int c)
//{
//	int posi, posj;
//	int x;
//	cout << "Nhap phan tu muon tim.";
//	cin >> x;
//	int dem = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (x == arr[i][j])
//			{
//				posi = i;
//				posj = j;
//				dem++;
//			}
//		}
//	}
//	if (dem == 0)
//		cout << "Khong Tim Thay!";
//	else
//		cout << "Tim thay " << dem << " lan tai a[" << posi << "][" << posj << "].";
//}
//void zigzag(int arr[100][100], int r, int c)
//{
//	int dem = 0;
//	if(r==c)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if(j % 2 == 0)
//				for (int i = 0; i < r; i++)
//				{
//					arr[i][j] = dem++;
//				}
//			else
//				for (int i = r - 1; i >= 0; i--)
//				{
//					arr[i][j] = dem++;
//				}
//		}
//	}
//	cout << "Mang sap xep theo zigzag: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void xoanOc(int arr[100][100], int r, int c)
//{
//	int dem = 1;
//	int minr, minc, maxr, maxc;
//	minr = minc = 0;
//	maxr = r - 1;
//	maxc = c - 1;
//	while (dem <= r * c)
//	{
//		for (int i = minc; i <= maxc; i++)
//		{
//			arr[minr][i] = dem++;
//		}
//		minr++;
//		for (int j = minr; j <= maxr; j++)
//		{
//			arr[j][maxc] = dem++;
//		}
//		maxc--;
//		for (int i = maxc; i >= minc; i--)
//		{
//			arr[maxr][i] = dem++;
//		}
//		maxr--;
//		for (int j = maxr; j >= minr; j--)
//		{
//			arr[j][minc] = dem++;
//		}
//		minc++;
//	}
//	cout << "Mang hai chieu dang xoan oc la: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	/*int a[4][3];
//	nhap(a, 4, 3);
//	xuat(a, 4, 3);*/
//	int arr[100][100];
//	int r, c;
//	do
//	{
//		cout << "Nhap dong: ";
//		cin >> r ;
//		cout << "Nhap cot: ";
//		cin >> c;
//		if (r > 10 || c > 15 || r < 1 || c < 1)
//			cout << "Nhap sai! Nhap lai!";
//	} while (r > 10 || c > 15 || r < 1 || c < 1);
//	input(arr, r, c);
//	cout << endl;
//	print(arr, r, c);
//	cout << endl;
//	tong(arr, r, c);
//	cout << endl;
//	Max(arr, r, c);
//	cout << endl;
//	Min(arr, r, c);
//	cout << endl;
//	SumC(arr, r, c);
//	cout << endl;
//	SumR(arr, r, c);
//	cout << endl;
//	Find(arr, r, c);
//	cout << endl;
//	if(r==c)
//	{
//	SumCheoChinh(arr, r, c);
//	cout << endl;
//	SumCheoPhu(arr, r, c);
//	zigzag(arr, r, c);
//	xoanOc(arr, r, c);
//	}
//}
