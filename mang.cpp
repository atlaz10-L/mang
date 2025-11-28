#include <iostream>
using namespace std;
#define MAX 30
void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
// them phan tu vao cuoi mang
void ThemCuoi(int a[], int& n, int x)
{
		a[n] = x;
		n++;
}
//them phan tu vao dau mang
void ThemDau(int a[], int& n, int x)
{
	for (int i=n; i>0;i--)
		a[i] = a[i - 1];
	a[0] = x;
	n++;
}
//them phan tu vao vi tri j
void ThemVitriJ(int a[], int& n, int x, int j)
{
	for (int i = n; i > j; i--)
		a[i] = a[i - 1];
	a[j] = x;
	n++;
}
int main()
{
	int mang_nguyen[MAX], spt;
	NhapMang(mang_nguyen, spt);
	cout << "MANG BAN VUA TAO" << endl;
	XuatMang(mang_nguyen, spt);
	cout << "Them 300 vao vi tri 2" << endl;
	ThemVitriJ(mang_nguyen, spt, 300, 2);
	XuatMang(mang_nguyen, spt);
	cout << "Them 100 vao cuoi mang" << endl;
	ThemCuoi(mang_nguyen, spt, 100);
	XuatMang(mang_nguyen, spt);
	cout << "Them 200 vao dau mang" << endl;
	ThemDau(mang_nguyen, spt, 200);
	XuatMang(mang_nguyen, spt);
	return 0;
}
//