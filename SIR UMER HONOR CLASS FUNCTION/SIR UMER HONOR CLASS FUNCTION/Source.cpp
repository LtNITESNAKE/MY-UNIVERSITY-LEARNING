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
	for (int i=0; i < pow; i++)
	{
		
		p *= n;
		
	}
	return p;
}
int reverse(int n)
{
	int rev=0;
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;

}
int GCD(int n1, int n2)
{
	int div = 1;

	for (int i = 2; (i <= n1) && (i <= n2); i++)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
		{
			div = i;
		}
	}
	return div;
}
int LCM(int n1, int n2)
{
	int multiple = 1;
	if (n1 > n2)
	{
		multiple = n1;
	}
	else
	{
		multiple = n2;
	}
	while (multiple%n1 != 0 || multiple%n2 != 0)
	{
		 ++multiple;
	}
	return multiple;
}
bool equal(int n1, int n2)
{
	if (n1 == n2)
	{
		return true;
	}
	else {
		return false;
	}
}
int digits(int n)
{
	int numbers=0;
	while (n != 0)
	{	
		  n /=10;
			numbers++;	
	}
	return numbers;
}
int seconds(int hours)
{
	hours *= 60 * 60;
	return hours;

}
bool isBinary(int num)
{
	
	while (num != 0)
	{
		int digit = num % 10;
		if (digit != 0 && digit != 1)
		{
			return false; 
		}
		num /= 10;
	}
		return true;
}
int tobinary(int n)
{
      
	int rev = 0;
	while (n != 0)
	{
		rev = rev * 10 + n % 2;
		n /= 2;
	}
	return rev;

}
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


	/*int n, p;
	cout << "enter a number and its power";
	cin >> n >> p;
	cout << "power of the number" << power(n, p);*/


	/*int num;
	cout << "enter number";
	cin >> num;
	cout << "the reverse of the following number is " << reverse(num);*/



	/*int n1, n2;
	cout << "enter  two number";
	cin >> n1 >> n2;
	cout << "the gcd between these  number is " << GCD(n1, n2);*/



	/*int n1, n2;
	cout << "enter two numbers";
	cin >> n1 >> n2;
	cout << "the lcm betwwen them is " << LCM(n1, n2);*/



	/*int n1, n2;
	cout << "enter two numbers";
	cin >> n1>> n2;
	if (equal(n1, n2))
	{
		cout << "equal";
	}
	else {
		cout << "not equal";
	}*/
	
	/*int num;
	cout << "enter a number";
	cin >> num;
	cout << "the digit of the numbers are"<<digits(num);*/

	/*int hour;
	cout << "enter hours to be converted in to sec";
	cin >> hour;
	cout << "seconds are " << seconds(hour);*/

	/*int num;
	cout << "enter binary number";
	cin >> num;
	if (isBinary(num))
	{
		cout << "is binary";
	}
	else {
		cout << "not binary";
	}*/

	



	system("pause");
}