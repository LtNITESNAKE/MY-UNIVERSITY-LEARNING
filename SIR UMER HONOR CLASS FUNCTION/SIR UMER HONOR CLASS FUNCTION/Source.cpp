#include<iostream>
using namespace std;
int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else {
		return y;
	}
}
int cube(int n)
{
	int c;
	c = n*n*n;
	return c;
}
int factorial(int n)
{
	int fa=1;
	for (int i = 1; i <= n; i++)
	{
		fa *= i;
	}
	return fa;
}
int sum(int x, int y)
{
	return x + y;
}
int power(int n, int pow)
{
	int p=1;
	for (int i=1; i <= pow; i++)
	{
		
		p = n*i;
		
	}
	return p;
}
//int reverse(int n)
//{}
//int GCD(int n1, int n2)
//{}
//int LCM(int n1, int n2)
//{}
//bool equal(int n1, int n2)
//{}
//int digits(int n)
//{}
//int seconds(int hours)
//{}
//bool isBinary(int num)
//{}
//int tobinary(int n)
//{}
//int todecimal(int n)
//{}
void main()
{
	/*int n1, n2;
	cout << "enter a number";
	cin >> n1 >> n2;
	cout << "maximum number" << max(n1, n2);*/
	/*int n;
	cout << "enter a number";
	cin >> n;
	cout << "cube" << cube(n);*/
	/*int n,q;
	cout << "enter a number";
	cin >> n >> q;
	cout << "sum is" << sum(n, q);*/
	/*int f;
	cout << "enter a number for factorial";
	cin >> f;
	cout << "your factorial" << factorial(f);*/
	int n, p;
	cout << "enter a number and its power";
	cin >> n >> p;
	cout << "power of the number" << power(n, p);
	
	system("pause");
}