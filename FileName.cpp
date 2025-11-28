#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define MAX 30
void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan thu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = rand() % 50;
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		cout << a[i] << " | ";
	cout << a[n - 1];
}
void BubbleSort(int a[], int n)
{
	int t = 0;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
}
int BinarySearch(int a[], int n, int x)
{
	int dau = 0, giua, cuoi = n - 1;
	while (dau <= cuoi)
	{
		giua = (dau + cuoi) / 2;
		if (a[giua] == x)
			return giua;
		else if (a[giua] > x)
			cuoi -= 1;
		else dau += 1;
	} return -1;
}
int main()
{
	srand(time(NULL));
	int mang[MAX], spt;
	NhapMang(mang, spt);
	cout << "MANG CUA BAN LA: ";
	XuatMang(mang, spt);
	BubbleSort(mang, spt);
	cout << "\nMANG SAU KHI SAP XEP TANG DAN LA: ";
	XuatMang(mang, spt);
	int x, vt;
	cout << "Nhap gia tri can tim: ";
	cin >> x;
	vt = BinarySearch(mang, spt, x);
	if (vt != -1)
		cout << "Co gia tri " << x << " tai vi tri so " << vt;
	else cout << "Khong co gia tri " << x << " can tim";
	int t = _getch();
	return 0;
}