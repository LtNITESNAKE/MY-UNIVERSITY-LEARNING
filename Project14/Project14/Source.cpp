#include<iostream>
#include<cmath>
using namespace std;
void  main()
{
	/*int num;
	cout << "enter any number";
	cin >> num;
	for (int count=1;count<=10;count++)
	{ 
		int mul = count * num;
		cout << num << "*" << count << "=" << mul<<endl;
	
	}*/

	/*int num;
	int sum = 0;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	cout << "enter number";
	cin >> num;
	sum += num;
	float avg = sum / 10;
	cout << avg;*/


	/*int num;
	cout << "enter the number";
	int sum=0;
	int tn = 0;
	for (int count = 1; count <= 10; count++)
	{
		cin >> num;
		sum += num;
		tn++;
	}
   float avg = (float)sum /tn ;

	cout << "average" << avg;*/

	/*int n, a = 1, i;
	cout << "enter a number :";
		cin >> n;
		for (i = n; i > 1; i--)
		{
			a = a * i;
			cout << i << "\t \t" << a << endl;
		}
		cout << n << "factorial = " << a << endl;*/

	/*int num;
	cout << "Enter a number: ";
	cin >> num;
	int tot = 1;
	for (int i = 1; i <= num; i++) 
	{
		tot *= i;
	}
	cout << "Factorial of " << num << " is: " << tot << endl;*/


	/*int num;
	cout << "enter a number";
	cin >> num;
	int max_div = num / 2;
	int flag = 1;
	for (int i = 2; i <= max_div; i++)
	{
		if (num%i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		cout << " prime";
	}
	else {
		cout << " not prime";
	}*/

int num;
cout << "enter a number";
cin >> num;
float sq_root = sqrt(num);
cout << "square root " << sq_root;













	system("pause");
}