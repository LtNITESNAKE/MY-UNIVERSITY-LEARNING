#include<iostream>
using namespace std;
void main()
{
	/*int num,count=0;
	cout << "enter a number ";
	cin >> num;

	while(num != 0)
 	{ 
     		num /= 10;
		count++;
		
	}
	
	cout << "the number in digits " <<count<< endl;
*/


	/*int num;
	cout << "enter a number";
	cin >> num;
	if((number&1)==0)
	if (num / 2 * 2 == num) {
		cout<< " is even." << endl;
	}
	else {
		cout << " is odd." << endl;
	}*/


	/*int num, rev=0;
	cout << "n : \n";
	cin >> num;
		int c = num;
		while (c != 0)
		{
			rev = rev * 10 + c % 10;
			c = c / 10;
		}
		cout << "REV : \n " << rev;*/



	/*int num, rev = 0;
	cout << "n : \n";
	cin >> num;
	int c = num;
	while (c != 0)
	{
		rev = rev * 10 + c % 10;
		c = c / 10;
	}
	if (rev == num)
	{
		cout << "pail \n";
	}
	else {
		cout << "not pail";
	}*/


	/*int num1, num2, sum;
	cout << " enter 2 positive num";
	cin >> num1 >> num2;
	sum = num1;
	int count = 1;
		while (count <= num2)
		{
			sum++;
			count++;
	}
		cout << "sum : " << sum;*/
	int num1, num2, sum;
	cout << " enter 2 num";
	cin >> num1 >> num2;
	if (num1 < 0 && num2 < 0)
	{
		num1 *= -1;
		num2 *= -1;
	sum = num1;
	int count = 1;
	while (count <= num2)
	{
		sum++;
		count++;
	}
	num1 *= -1;
	num2 *= -1;
	sum = num1;
	cout << "sum : " << sum; 



















	system("pause");
}