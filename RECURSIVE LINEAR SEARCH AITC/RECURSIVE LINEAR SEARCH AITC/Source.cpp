#include<iostream>
using namespace std;
int RLS(int a[] , int n, int x)
{
	int i = n - 1;
	int k = 0;
	if (i <= k)
	{
		return -1;
	}
	if (a[i] == x)
	{
		
		return i;
	}
	else
		return RLS(a, n - 1, x);
}
int RBS(int a[], int min, int max, int x)
{
	int mid = (max + min) / 2;
	if (max < min)
		return -1;
	else if (x == a[mid])
	{
		return mid;
	}
	else if (x > a[mid])
	{
		return RBS(a, mid + 1, max, x);
	}
	else if (x < a[mid])
	{
		return RBS(a, min, mid-1, x);
	}
}
void main()
{
	 int size=5;
	int b[5];
	cout << "enter values for array ";
	for (int i = 0; i < size; i++)
	{
		cin >> b[i];
	}
	cout << "enter num you want to find";
	int f;
	cin >> f;
        int result =RLS(b, size, f);
		int l = 0;
		int h = size;
		int result1 = RBS(b,l,h,f);
		cout << "searched number is at index RLS " << result<<endl;
		cout << "searched number is at index  RBS " << result1<<endl;

	system("pause");
}