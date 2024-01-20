#include<iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
int square(int x)
{
	return x*x;
}
int reverse(int n)
{
	int rev = 0;
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}
bool palindrome(int n)
{
	
	if (n == reverse(n))
		return true;
	else
		return false;
}
int factorial(int x)
{
	if (x == 0)
		return 1;
	else
		return x*factorial(x - 1);
	

}
void main()
{
	int n1=8, n2=8,n3=121,n4=5;
	int Sum = sum(n1,n2);
	cout << Sum<<endl;
	int Square = square(n1);
	cout << Square<<endl;
	int Rev = reverse(n3);
	cout << Rev<<endl;
	int flag = palindrome(n3);
	if (flag)
	{
		cout << "pal"<<endl;
	}
	int fac = factorial(n4);
	cout << fac;
	


	system("pause");
}