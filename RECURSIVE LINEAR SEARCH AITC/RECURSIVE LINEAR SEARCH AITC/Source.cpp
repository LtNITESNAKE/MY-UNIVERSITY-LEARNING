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
		cout << "searched number is at index" << result;


	system("pause");
}