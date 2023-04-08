//#include <iostream>
//#include <cstdlib>
//using namespace std;
////Bai 2
//void Euclid_Bai2()
//{
//	int r;
//	int* a;
//	int* b;
//	a = new int;
//	b = new int;
//	cout << "Nhap vao hai so nguyen : ";
//	cin >> *a;
//	cin >> *b;
//	while (*b != 0)
//	{
//		 r = *a % *b;
//		 *a = *b;
//		 *b = r;
//	}
//	cout << "Uoc chung lon nhat la " << *a;
//	delete a;
//	delete b;
//}
// // Bai 3
//void nhap(int *arr, int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		arr[i] = rand() % 20;
//		cout << arr[i] << " ";
//	}
//}
//void printLe(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 != 0)
//			cout << *(arr+i) << " ";
//	}
//}
//void Max(int* arr, int n)
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << "Dia chi cua phan tu lon nhat " << max << " trong mang la: " << &max;
//}
//// Bai 4
//void Fibonacci_Bai5()
//{
//	int* p;
//	int n;
//	int kq;
//	cout << "Nhap n: ";
//	cin >> n;
//	p = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		if (i < 2)
//			 *(p + i) = i;
//		else
//			 *(p + i) = *(p + i - 2) + *(p + i - 1);
//		kq = *(p + i);
//	}
//	cout << "Gia tri cua " << n << " trong day Fibonacci la: " << kq;
//}
//// Bai 5
//void daoMang(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		//swap(*(arr + i), *(arr + n - 1 - i));
//		swap(*(arr + i), *(arr + n - 1 - i));
//		//swap(arr[i], arr[n - 1 - i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(arr+i) << " ";
//	}
//}
//void xuat(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	/*int arr[30];
//	int n;
//	int* p = arr;*/
//	//cout << "Nhap so phan tu can dung trong mang: "; cin >> n;
//	//for(int i=0;i<n;i++)
//	//{
//	//	arr[i] = rand() % 20;
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << *(p + i) << " ";
//	//}
//	/*cout << endl;
//	Euclid_Bai2();*/
//	
//	int n;
//	cout << "Nhap so phan tu can dung trong mang: ";
//	cin >> n;
//	int *arr = new int[n];
//	nhap(arr, n);
//	cout << endl;
//	//printLe(arr, n);
//	cout << endl;
//	Max(arr, n);
//	cout << endl;
//
//	daoMang(arr, n);
//	xuat(arr, n);
//	Fibonacci_Bai5();
//}