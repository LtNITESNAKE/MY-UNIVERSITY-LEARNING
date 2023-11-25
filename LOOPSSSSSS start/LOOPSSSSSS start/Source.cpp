#include<iostream>
using namespace std;
void main()
{
	/*int n;
	cout << "enter a number";
	cin >> n;
	int mul = 1;
	while (mul <= 10)
	{
		cout << n << "*" << mul << "=" << n*mul << endl;
		mul++;
	}*/

	/*int n;
	cout << "enter a number";
	cin >> n;
	while (n != 0)
	{
		cin >> n;
	}*/

	/*int n=1;
	int div = 0;
	int even = 0;
	int odd = 0;
	int neg = 0;
	int pos = 0;
	int sum = 0;

	while (n != 0)
	{
		cout << "enter a number : " << endl;
		cin >> n;
		div++;
		sum += n;
		if (n % 2 == 0)
		{
			even++;
		}
		else if (n % 2 == 1)
		{
			odd++;
		}
		 if (n<0)
		{ 
			neg++;
		}
		 if (n > -1)
		{
			pos++;
		}

	}
	
	cout << " even number" <<even<< endl;
	cout << " odd num" << odd << endl;
	cout << " negative number" << neg << endl;
	cout << " positive number" << pos << endl;

	cout << "sum" << sum<<endl;
	cout << "average" << sum / div;*/














		//// Input two numbers
		//int num1, num2;
		//cout << "Enter first number: ";
		//cin >> num1;
		//cout << "Enter second number: ";
		//cin >> num2;

		//// Find the maximum of the two numbers
		//int max;
		//if (num1 > num2) 
		//{
		//	max = num1;
		//}
		//else
		//{
		//	max = num2;
		//}

		//// Find the LCM using a while loop
		//int lcm = max;
		//while (lcm % num1 != 0 || lcm % num2 != 0) 
		//{
		//	lcm += max;
		//}

		//// Print the LCM
		//cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
	


		//int sum = 0;
		//int num;
		//cout << "enter a number \n";
		//cin >> num;
		//sum += num;
		//while (num != 0)
		//{
		//	cin >> num;
		//	sum += num;
		//}
		//cout << "sum =" << sum;
             

	//int n, m, o;
	//cout << "Enter First Digit: ";
	//cin >> n;
	//cout << "Enter Second Digit: ";
	//cin >> m;
	//cout << "Enter Third Digit: ";
	//cin >> o;

	//int maxDigit;

	//
	//if (n >= m && n >= o)
	//{
	//	maxDigit = 100 * n + 10 * m + o;
	//}
	//else if (m >= n && m >= o)
	//{
	//	maxDigit = 100 * m + 10 * n + o;
	//}
	//else {
	//	maxDigit = 100 * o + 10 * n + m;
	//}

	//cout << "Maximum Number is: " << maxDigit << endl;





//int num, sum = 0;
//
//cout << "Enter a number: ";
//cin >> num;
//
//if (num < 0)
//{
//	num = -num;
//}
//while (num != 0)
//{
//	sum += num % 10;  // Add the last digit to the sum
//	num /= 10;        // Remove the last digit from the number
//}
//
//cout << "Sum = " << sum << endl;






//int n, m, o;
//cout << "Enter First Digit: ";
//cin >> n;
//cout << "Enter Second Digit: ";
//cin >> m;
//cout << "Enter Third Digit: ";
//cin >> o;
//
//int maxDigit;
//
//if (n >= m && n >= o) {
//	maxDigit = 100 * n;
//
//	if (m >= o) {
//		maxDigit += 10 * m + o;
//	}
//	else {
//		maxDigit += 10 * o + m;
//	}
//}
//else if (m >= n && m >= o) {
//	maxDigit = 100 * m;
//
//	if (n >= o) {
//		maxDigit += 10 * n + o;
//	}
//	else {
//		maxDigit += 10 * o + n;
//	}
//}
//else {
//	maxDigit = 100 * o;
//
//	if (n >= m) {
//		maxDigit += 10 * n + m;
//	}
//	else {
//		maxDigit += 10 * m + n;
//	}
//}
//
//cout << "Maximum Number is: " << maxDigit << endl;










	system("pause");
}