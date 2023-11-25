#include<iostream>
using namespace std;
void main()
{
	/*Statement: Input three digits from user and print maximum number that these three digits forms 
	for example
Enter First Digit 5
Enter Second Digit 8
Enter Third Digit 2
Maximum Number is 852
*/

	/*int n, m, o;
	cout << "input first digits";
	cin >> n;
	cout << "input first digits";
	cin >> m;
	cout << "input first digits";
	cin >> o;
	int max;

	if (n > m && n > o)
	{
		max = n * 100;
		if (m > o)
		{
			max += m * 10 + o;
		}
		else {
			max += o * 10 + m;
		}
	}
	if (m > n && m >o)
	{
		max = m * 100;
		if (n > o)
		{
			max += n * 10 + o;
		}
		else {
			max += o * 10 + n;
		}
	}
	if (o > n && o >m)
	{
		max = o * 100;
		if (n >m)
		{
			max += n * 10 + m;
		}
		else {
			max += m * 10 + n;
		}
	}

	cout << "maximun digit is ::" << max;
*/
	/*Statement: Write a C++ program that inputs two numbers and print their LCM.*/

	//int num1, num2;
	//cout << "enter two number :";
	//cin >> num1 >> num2;

	//int max;
	//if (num1 > num2)
	//{
	//       max = num1;
	// }
	//else {
	//	max = num2;
	//}
	//
	//int lcm = max;
	//while (lcm%num1 != 0 || lcm%num2 != 0)
	//{
	//	lcm += max;
	//}

	//cout << "lcm :: " << lcm;

	/*Statement: Write a C++ program in which you have to input a number from user and print next 10 even number from that number. 
	Sample Execution: Enter a number 27 Output: 28 30 32 34 36 38 40 42 44 46*/


	/*int num;
	cout << "enter  a number :";
	cin >> num;
		if (num % 2 == 0)
		{
			
		}
		else {
			num-=1;
		}
		int repeat = 1;

		while (repeat <= 10)
		{
			cout << num << endl;
			num += 2;
			repeat++;
		}*/

		/*Statement: Write a C++ program in which you have to input a number from user until user enters 0.
		Count and display total positive number entered and average of all positive numbers.
		Also display sum of all negative numbers.*/

//int num;
//cout << "enter number" << endl;
//cin >> num;
//int pos = 0;
//int neg = 0;
//float avgp = 0;
//int sumn = 0;
//int sump=0;
//while (num != 0)
//{
//	if(num>0)
//	{
//		sump += num;
//		pos++;
//	}
//	else {
//		sumn = sumn + num;
//		neg++;
//	}
//	cin >> num;
//}
//cout << "total positive :: " << pos << endl;
//cout << "average ::" <<((float) sump / pos) << endl;
//cout << "sum negative ::" << sumn;

/*Statement: Write a C++ program that inputs a number from user and tell how many digit number is entered by a user.
Sample execution:
Enter a number 5689 
It�s a 4 digit number 
Note that user can enter any number of his choice. Hint use / (keep on reducing a number until number is reduced to 0)
*/

//int num;
//cout << "enter number";
//cin >> num;
//int digit = 0;
//
//while (num != 0)
//{   
//	
//	if (num % 10 != 0)
//	{
//		digit++;
//	}
//	num /= 10;
//}
//cout << "it is a " << digit << "digit number";

/*Statement: Write a C++ program that inputs a number from user and display sum of its digits. 
Sample execution:
Enter a number 5  8    2    1
Sum = 16
Note that user can enter any number of his choice. Hint use / and % operator (keep on reducing a number until number is reduced to 0)
*/

// int num;
//cout << "enter number";
//cin >> num;
//int sum = 0;
//
//while (num != 0)
//{   
//
//	sum += num % 10;                           //// yehan hai////
//	num /= 10;
//}
//cout << "sum " << sum << endl;

        /*Statement: Display following using loop. 
        Program 7	Program 8
        6                                6 5 4 3 2 1
        6 5								 6 5 4 3 2 
        6 5 4 							 6 5 4 3 
        6 5 4 3							 6 5 4 
        6 5 4 3 2						 6 5 
        6 5 4 3 2 1						 6 
        6 5 4 3 2						 6 5 
        6 5 4 3							 6 5 4 
        6 5 4							 6 5 4 3 
        6 5								 6 5 4 3 2
        6								 6 5 4 3 2 1 */

//int num=6;
//cout << "program 7 \n \n";
//while (num >-5 && num<=6)
//{
//	switch (num)
//	{
//	case 6:  case -4:
//		cout << "6 \n "; break;
//	case 5:  case -3:
//		cout << "6 5 \n"; break;
//	case 4:  case -2:
//		cout << "6 5 4 \n"; break;
//	case 3:  case -1:
//		cout << "6 5 4 3 \n"; break;
//	case 2: case 0:
//		cout << "6 5 4 3 2 \n"; break;
//	case 1: 
//		cout << "6 5 4 3 2 1 \n"; break;
//	}
//	num -= 1;
//
//}
//
//int num1 = 6;
//cout << "program 8 \n \n \n";
//while (num1 >-5 && num1 <= 6)
//{
//	switch (num1)
//	{
//	case 1:  
//		cout << "6 \n"; break;
//	case 2:  case 0:
//		cout << "6 5 \n"; break;
//	case 3:  case -1:
//		cout << "6 5 4 \n"; break;
//	case 4:  case -2:
//		cout << "6 5 4 3 \n"; break;
//	case 5: case -3:
//		cout << "6 5 4 3 2 \n"; break;
//	case 6: case -4:
//		cout << "6 5 4 3 2 1 \n "; break;
//	}
//	num1 -= 1;
//
//}

/*Statement: Write a C++ program in which you have to input two numbers from user and display all odd number between them. 
Sample Execution 1: 
Enter a first number 3 
Enter second number 10 
Output 5 7 9
Sample Execution 2: 
Enter a first number 10 
Enter second number 3 
Output 9 7 5
*/
//int num1, num2;
//
//cout << "Enter the first number: ";
//cin >> num1;
//
//cout << "Enter the second number: ";
//cin >> num2;
//
//int start, end;
//
//if (num1 < num2)
//{
//	start = num1;
//	end = num2;
//}
//else 
//{
//	start = num2;
//	end = num1;
//}
//
//cout << "Odd numbers between " << start << " and " << end << ": ";
//
//int current = start;
//
//while (current <= end)
//{
//	if (current % 2 != 0 && current != num1 && current != num2)
//	{
//		cout << current << " ";
//	}
//	current++;
//}


/*Statement: Write a program that reads integer number from user, 
this process of reading numbers continues until user enter a number 
less than zero. After reading numbers program have to display
1.	Total valid numbers entered by user
2.	Sum of all valid numbers
3.	Average of valid numbers
4.	Maximum among valid numbers
5.	Minimum among valid numbers
6.	How many entered numbers are single digit
7.	How many entered numbers are double digit
8.	How many entered numbers are three digit
9.	How many entered numbers are four or more than four digit numbers
*/
//int n=0;
//cout << "enter number";
//int v = 0, sumv = 0, max = 0, min = 0;  int sd = 0, dd = 0, td = 0, fd = 0;
//float avgv;
//while (n>-1 )
//{    
//	cin >> n;
//	sumv += n;
//	v++;
//		if (n >= max)
//		{
//			max = n;
//		}
//		else
//		{
//			min = n;
//		}
//	
//		if (n < 10 && n>0)
//		{
//			sd++;
//		}
//		else if (n < 100)
//		{
//			dd++;
//		}
//		else if (n < 1000)
//		{
//			td++;
//		}
//		else {
//			fd++;
//		
//	}
//}
//avgv = (float)sumv / v;
//cout << "total valid number entered" << v << endl;
//cout << "sum of valid numbers" <<  sumv<< endl;
//cout << "average of the valid numbers" << avgv << endl;
//cout << "MAXIMUM VALID NUMBER IS " << max << endl;
//cout << "MINIMUM VALID NUMBER IS " << min << endl;
//cout<<"valid number is one digit"<<sd<<endl;
//cout<<"valid number is two digit"<<dd<<endl;
//cout<<"valid number is three digit"<<td<<endl;
//cout<<"valid number is fourth digit"<<fd<<endl;

/*Statement: You are supposed to make a converter from decimal to binary.
Read a decimal number and display its binary. 
Note that user can enter any number of his choice.
Sample Execution
Enter a number 6
Binary = 110
*/
//int decimaln, remain, bin = 0, base = 1;
//
//	// read the decimal number from the user
//	cout << "enter a number: ";
//	cin >> decimaln;
//// convert decimal to binary
//while (decimaln > 0)
//{
//	remain = decimaln % 2;
//	bin = bin + remain * base;
//	decimaln = decimaln / 2;
//	base = base * 10;
//}
//
//// display the binary equivalent
//cout << "binary = " << bin << endl;

//int binary, temp, decimal = 0, base = 1, validityState = 1;
//
//// Keep asking for input until a valid binary number is provided
//while (validityState)
//{
//	// Read the binary number from the user
//	cout << "Enter a binary number: ";
//	cin >> binary;
//
//	temp = binary; // Store the original value for validation
//
//							   // Validate that the entered number is binary
//	validityState = 1; // Assume it's valid until proven otherwise
//	while (temp > 0) 
//	{
//		int digit = temp % 10;
//		if (digit != 0 && digit != 1) 
//		{
//			validityState = 0; // Set validityState to 0 if not valid
//			break;
//		}
//		temp /= 10;
//	}
//
//	if (validityState) 
//	{
//		break; // Break out of the loop if the number is a valid binary
//	}
//	else
//	{
//		cout << "Invalid input. Please enter a binary number." << endl;
//		validityState = 1;
//	}
//}
//
//// Convert binary to decimal
//while (binary > 0)
//{
//	int remainder = binary % 10;
//	decimal += remainder * base;
//	binary /= 10;
//	base *= 2;
//}
//
//// Display the decimal equivalent
//
//	cout << "Decimal = " << decimal << endl;

/*Statement: Input two fraction add and display its answer a/b + c/d =e/f
Sample Execution
Input value of a 6
Input value of b 4 
Input value of c 5
Input value of d 8
6/4 + 5/8 = 17/8
*/
//int a, b, c, d, e, f;
//
//cout << "Input value of a: ";
//cin >> a;
//cout << "Input value of b: ";
//cin >> b;
//cout << "Input value of c: ";
//cin >> c;
//cout << "Input value of d: ";
//cin >> d;
//
//// Calculate the maximum value using while loop
//int max = b;
//int tempD = d;  // Store the original value of d
//
//while (tempD > 0) 
//{
//	max = tempD;
//	tempD /= 2;
//}
//
//// Find the least common multiple (LCM) of b and d
//int lcm = max;
//
//while (lcm % b != 0 || (d != 0 && lcm % d != 0))
//{
//	lcm += max;
//}
//
//// Calculate the numerator and denominator for the sum
//if (d != 0) 
//{
//	e = a * (lcm / b) + c * (lcm / d);
//}
//else 
//{
//	e = a * (lcm / b);
//}
//f = lcm;
//
//// Simplify the fraction using while loop
//int divisor = 1;
//int check = 1;
//
//while (check <= e && check <= f) 
//{
//	if (e % check == 0 && f % check == 0) 
//	{
//		divisor = check;
//	}
//	check++;
//}
//
//e /= divisor;
//f /= divisor;
//
//cout << a << "/" << b << " + " << c << "/" << d << " = " << e << "/" << f << endl;



/*Statement: Write a program in C++ to calculate the series
(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
Sample Output:
Input the value for nth term: 5
1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
The sum of the above series is: 35*/

//int num;
//cout << "Input the value for nth term: ";
//cin >> num;
//
//int i = 1;
//int j = 1;
//int total = 0;
//
//while (i <= num) 
//{
//	int sum = 0;
//	int k = 1;
//
//	while (k <= j)
//	{
//		sum += k;
//		total += k;
//		cout << k;
//		if (k < j) 
//		{
//			cout << "+";
//		}
//		k++;
//	}
//
//	cout << " = " << sum << endl;
//	j++;
//	i++;
//}
//cout << "the sum of the above series is : " << total;



int n=1;
int np = 0, nn = 0, sp = 0, sn = 0; float  anv = 0;
while (n != 0)
{
	cout << "enter a value";
	cin >> n;
	if (n < 0)
	{
		n = (-n);
	}

	switch (n)
	{
	case 'n':

		np++;
		sp += n;
		break;
	case '-n':
		nn++;
		sn += (-n);
		anv = ((float)sn / nn);
		break;
	}
}
cout << "total positive number:"<<np;
cout << "total negataive number:" << nn;
cout << "total sum of positve number:" << sp;
cout << "average of negative number:" << anv;



















  
















	system("pause");
}