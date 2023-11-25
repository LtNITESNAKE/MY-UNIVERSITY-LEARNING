#include<iostream>
using namespace std;
void main()
{
	int number;
	cout << "enter a number" << endl;
	cin >> number;
	if ( -9 <= number && number <=9)
	{
		cout << "number is one digit:" << endl;
	}
	else
	{
		cout << "number is two digit:" << endl;
	}
	int number1;
	cout << "enter a nummber:" << endl;
	cin >> number1;
	if (number1 % 2 == 0)
	{
		cout << "number is even:" << endl;

	}
	else
	{
		cout << "number is odd:" << endl;

	}
	int number2;
	cout << "enter a number:" << endl;
	cin >> number2;
	if (number2 > -1)
	{
		cout << "your number is +ve:" << endl;

	}
	else
	{
		cout << "your number is -ve :" << endl;
	}
	
	system("pause");
}