#include<iostream>
using namespace std;
void main()
{
	/*Program Number 1: Retail Store Billing System */

	/*char categ;
	int bill = 0;
	int given_by_cus = 0;
	int remain = 0;
	int sale=0;
	int price = 0;
	while (true)
	{

		cout << " **** menu ***** \n press F for food item \n press C for cosmetics \n  press D for detergents \n press L for cold drinks \n press j for juices ";
		cin >> categ;
		switch (categ)
		{
		case 'F': case 'f':
			cout << "1. APPLES :: price  RS 250" << endl;
			cout << "2. orange :: price  RS 200" << endl;
			cout << "3. banana :: price  RS 150" << endl;
			cout << "4. grapes :: price  RS 270" << endl;
			cout << "5. papaya :: price  RS 450" << endl;
			break;
		case 'C': case 'c':
			cout << "1. perfume :: price  RS 650" << endl;
			cout << "2. lotion :: price  RS 320" << endl;
			cout << "3. face wash :: price  RS 238" << endl;
			cout << "4. body spray :: price  RS 500" << endl;
			cout << "5. shampoo :: price  RS 350" << endl;
			break;
		case 'D': case'd':
			cout << "1. surf :: price  RS 320" << endl;
			cout << "2. soap :: price  RS 120" << endl;
			cout << "3. Laundry Boosters:: price  RS 423" << endl;
			cout << "4. Stain removers :: price  RS 364" << endl;
			cout << "5. Fabric Softener :: price  RS 670" << endl;
			break;
		case 'l': case 'L':
			cout << "1. sevenup :: price  RS 130" << endl;
			cout << "2. fanta :: price  RS 120" << endl;
			cout << "3. apple:: price  RS 80" << endl;
			cout << "4. pepsi :: price  RS 120" << endl;
			cout << "5. string :: price  RS 150" << endl;
			break;
		case 'j': case 'J':
			cout << "1. apple juice :: price  RS 220" << endl;
			cout << "2. orange juice :: price  RS 280" << endl;
			cout << "3. mango juice:: price  RS 325" << endl;
			cout << "4. banana juice :: price  RS 230" << endl;
			cout << "5. strawberry juice:: price  RS 340" << endl;
			break;
		}
		while (true)
		{
			int qty=0;
			char selected;
			cout << "enter the number of the item you want to add " << endl;
			cin >> selected;
			if (categ == 'F' || categ == 'f')
			{
				switch (selected)
				{
				case '1':
					price = 250;
					break;
				case '2':
					price= 200;
					break;
				case '3':
					price = 150;
					break;
				case '4':
					price = 270;
					break;
				case '5':
					price = 450;
					break;
				}
			}
			else if (categ == 'C' || categ == 'c')
			{
				switch (selected)
				{
				case '1':
					price = 650;
					break;
				case '2':
					price = 320;
					break;
				case '3':
					price = 238;
					break;
				case '4':
					price = 500;
					break;
				case '5':
					price = 350;
					break;
				}
			}
				 else if (categ == 'D' || categ == 'd')
				{
					switch (selected)
					{
					case '1':
						price = 320;
						break;
					case '2':
						price = 120;
						break;
					case '3':
						price = 423;
						break;
					case '4':
						price = 364;
						break;
					case '5':
						price = 670;
						break;
					}
				}
				 else if (categ == 'L' || categ == 'l')
				{
					switch (selected)
					{
					case '1':
						price = 130;
						break;
					case '2':
						price = 120;
						break;
					case '3':
						price = 80;
						break;
					case '4':
						price = 120;
						break;
					case '5':
						price = 150;
						break;
					}
				}
				else if (categ == 'J' || categ == 'j')
				{
					switch (selected)
					{
					case '1':
						price = 220;
						break;
					case '2':
						price = 280;
						break;
					case '3':
						price = 325;
						break;
					case '4':
						price = 230;
						break;
					case '5':
						price = 340;
						break;
					}
				}

				cout << "enter quantity " << endl;
				cin >> qty;

				bill += qty*price;
				char repeat;

				cout << "do you want to add another item into the bill press y for yes";
				cin >> repeat;

				if (repeat != 'y' && repeat != 'Y')
				{
					break;
				}
		}
		cout << "your bill is RS " << bill << endl;
		sale += bill;

		cout << "enter the amount form customer"<<endl;
		cin >> given_by_cus;

		while (given_by_cus < bill)
		{
			int more;
			cout << "insufficient amount enter more amount " << endl;
			cin >> more;
			given_by_cus += more;
		}

		remain = given_by_cus - bill;
		cout << "remaining amount is RS " << remain << endl;

		char anotherrepeat;
		cout << "do you want to compute another bill press y for yes"<<endl;
		cin >> anotherrepeat;

		if (anotherrepeat != 'Y' && anotherrepeat != 'y')
		{
			break;
		}
		bill = 0;
	}
	cout << " your total sale of the day is  RS " << sale << endl;*/

	/*PROGRAM::2 :bANK OF PUNJAB*/

	//int uiit=0, biit=0, bims=0;
	//int BIIT = 150000, BIMS = 65235 , UIIT = 58564; 
	//int fee[200];
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "enter the fee of the student" <<i+1<< endl;
	//	cin >> fee[i];
	//	while (fee[i] < 0 && fee[i] / 500 == 0)
	//	{
	//		cout << " NOT VALID \n renter fee of the student "<< i + 1<<endl;
	//		cin >> fee[i];
	//	 }
	//		char dep;
	//		cout << "enter the department of the student "<< i + 1 << endl;
	//		cin >> dep;
	//
	//		while (dep != 'U' && dep != 'u' && dep != 'B' && dep != 'b' && dep != 'M' && dep != 'm')
	//		{
	//			cout << "not valid \n please renter correct department"<< i + 1<<endl;
	//			cin >> dep;
	//		}
	//		switch (dep)
	//		{
	//		case 'U': case 'u':
	//			UIIT += fee[i];
	//			uiit++;
	//			break;
	//		case 'B': case 'b':
	//			BIIT += fee[i];
	//			biit++;
	//			break;
	//		case 'm': case 'M':
	//			BIMS += fee[i];
	//			bims++;
	//			break;
	//		}	
	//}
	//
	//cout << "BIIT ::" << BIIT << "\n" << "UIIT ::" << UIIT << "\n" << "BIMS ::" << BIMS<<"\n";
	//cout << "total student who deposited fee in BIIT  " << biit<<endl;
	//cout << "total student whi deposited fee in BIMS  " << bims<<endl;
	//cout << "total student who deposited fee in UIIT  " << uiit<<endl;
	//
	//int aBIIT = BIIT - 150000;
	//int aBIMS = BIMS - 65235;
	//int aUIIT = UIIT - 58564;
	//
	//if (aBIIT > aBIMS && aBIIT > aUIIT)
	//{
	//	cout << "Max fee deposited is in BIIT = " << aBIIT<<endl;
	//}
	//else if(aBIMS > aBIIT && aBIMS > aUIIT)
	//{
	//	cout << "Max fee deposited is in BIMS = " << aBIMS<<endl;
	//}
	//else if (aUIIT > aBIIT && aUIIT > aBIMS)
	//{
	//	cout << "Max fee deposited is in UIIT = " << aUIIT<<endl;
	//	
	//}
	//else {
	//	if (aBIIT == aUIIT || aBIIT == aBIMS)
	//	{
	//		cout << "Max fee deposited is in BIIT = " << aBIIT << endl;
	//	}
	//	 if (aBIMS == aBIIT|| aBIMS==aUIIT)
	//	{
	//		cout << "Max fee deposited is in BIMS = " << aBIMS << endl;
	//	}
	//	 if (aUIIT == aBIIT || aUIIT == aBIMS)
	//	{
	//		cout << "Max fee deposited is in UIIT = " << aUIIT << endl;
	//	}
	//}



		/*Program Number 3: Input a number from user and display numbers divisible on that (excluding
	1 and itself). If number is prime display message “Number is Prime”
	Sample Execution 1
	Enter a number 24
	Number divisible are 2, 4, 6, 8, and 12
	Sample Execution 2
	Enter a number 13
	Number is prime
	*/

	/*int num;
	int flag = 1;

	cout << "enter a number ";
	cin >> num;

	for (int index = 2; index < num; index++)
	{
		if (num % index == 0)
		{
			cout << "number is divisible by " << index << endl;
			flag = 0;
		}
	}
	if (flag)
	{
		cout << "number is prime" << endl;
	}*/

	/*Program Number 4: Input a number from user and display maximum numbers divisible on that (excluding 1 and itself). If number is prime display message “Number is Prime”.
Sample Execution 1
Enter a number 24
Max Number divisible is 12
Sample Execution 2
Enter a number 13
Number is prime
*/
/*int num;
int flag = 1;
int max = 0;
cout << "enter a number ";
cin >> num;

for (int index = 2; index < num; index++)
{

	if (num % index == 0)
	{
		if (index > max)
		{
			max = index;
		}
		flag = 0;
	}
}

if (flag)
{
	cout << "number is prime" << endl;
}
else {
	cout << " max Number is divisible by " << max << endl;
}*/

/*Program Number 5: Input two number from user and display greatest common divisor
(GCD is a greatest number that is divided on both numbers for example if first number is 24 and second number is 12
common divisor on both numbers are 1. 2, 3, 4, 6,12 but GCD is maximum among all that is 12).
Sample Execution 1
Enter first number 24
Enter second number 2 12
GCD = 12
Sample Execution 2
Enter first number 60
Enter second number 75
GCD= 15
Sample Execution 3
Enter first number 11
Enter second number 13
GCD= 1
*/



//int n1, n2;
//int div = 1;
//cout << "enter two numbers";
//cin >> n1 >> n2;
//
//for (int i = 2; (i <= n1) && (i <= n2); i++)
//{
//	if ((n1 % i == 0) && (n2 % i == 0))
//	{
//		div = i;
//	}
//}
//cout << "the GCD between " << n1 << "and" << n2 << " is " << div;

/*: Input two positive number from user and add both number without using - and +. (Hint: you can use ++ and loop)
Logic: Consider a scenario where you have to teach addition to a small kid of class one.
Let’s say you want to add 4 and 6
how would you teach him? There are various method one method is as follow.
First number was 4 you will draw four lines and keep on adding one line until 6 lines are added.
Use this logic to implement above program, user can enter any number.
*/
//
//int n1, n2;
//cout << "enter two positive numbers";
//cin >> n1 >> n2;
//int i=1;
//while (i <= n1 + n2)
//{
//	int j = 1;
//	cout << " | ";
//	i++;
//	cout << j;
//}
//cout << endl;
//cout << " total will be "<< n1 + n2 <<" well done ";

/*Program Number 6: Write a program that reads integer number from user,
this process of reading numbers continues until user enter a number less than zero.
After reading numbers program have to display
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

//int num=0, min=-1, max=0,sd=0,dd=0,td=0,fd=0;
//int valid = 0, sum = 0; float avg = 0;
//cout << "enter a number";
//while (num >=0)
//{
//	cin >> num;
//	if (num >= 0)
//	{
//		sum += num;
//		valid++;
//		if (num > max)
//		{
//			max = num;
//		}
//		 if (min ==-1 || num < min)
//		{
//			min = num;
//		}
//		if (num > 0 && num < 10)
//		{
//			sd++;
//		}
//		else if (num > 9 && num < 100)
//		{
//			dd++;
//		}
//		else if (num > 99 && num < 1000)
//		{
//			td++;
//		}
//		else if (num > 999)
//		{
//			fd++;
//		}
//
//	}
//	else {
//		break;
//	}
//}
//avg = (float)sum / valid;
//	
//cout<<"Total valid numbers entered by user"<<valid<<endl;
//cout<<"Sum of all valid numbers	"<<sum<<endl;
//cout<<"Average of valid numbers	"<<avg<<endl;
//cout<<"Maximum among valid numbers"<<max<<endl;
//cout<<"Minimum among valid numbers"<<min<<endl;
//cout<<"single digits"<<sd<<endl;
//cout<<"double digits"<<dd<<endl;
//cout<<"three digits"<<td<<endl;
//cout<<"four or more digits"<<fd<<endl;

/*Program Number 7:  Write a program that reads character from user,
this process of reading character continues until user enter ‘!’. After reading characters program have to display
1.	Total valid characters
2.	How many characters are vowel
3.	How many characters are digits
4.	How many alphabets
5.	How many alphabets in lower case
6.	How many alphabets in upper case
7.	How many characters are other than digits and alphabets
*/

//char userchoice='0';
//int valid = 0, vowel = 0, digits = 0, alphabets = 0, alpha_lower = 0, alpha_upper = 0, special = 0;
//cout << "enter the characters";
//while (userchoice != '!')
//{
//	cin >> userchoice;
//	if (userchoice != '!')
//	{
//		valid++;
//		if ((userchoice >= 'A' && userchoice < 'Z') || (userchoice >= 'a' && userchoice <= 'z'))
//		{
//			alphabets++;
//			if (userchoice >= 'A'&&userchoice <= 'Z')
//			{
//				alpha_upper++;
//			}
//			if (userchoice >= 'a'&&userchoice <= 'z')
//			{
//				alpha_lower++;
//			}
//		}
//		switch (userchoice)
//		{
//		case 'a':case'A':
//		case 'e':case'E':
//		case 'i':case'I':
//		case 'o':case'O':
//		case 'u':case'U':
//			vowel++;
//			break;
//		}
//		if (userchoice >= '0'&&userchoice <= '9')
//		{
//			digits++;
//		}
//		else {
//			special++;
//		}
//	}
//}
//cout << "\n Total valid characters" << valid;
//cout << "\n characters are vowel"<<vowel;
//cout << "\n characters are digits" << digits;
//cout << "\n alphabets" << alphabets;
//cout << "\n alphabets in lower case" << alpha_lower;
//cout << "\n alphabets in upper case" << alpha_upper;
//cout << "\n characters are other than digits and alphabets" << special;

/*Program Number 8: You are supposed to make a converter from decimal to binary. Read a decimal number and display its binary. Note that user can enter any number of his choice.
Sample Execution
Enter a number 6
Binary = 110
*/

//int decimaln, remain, bin = 0, base = 1;
//	cout << "enter a number: ";
//	cin >> decimaln;
//while (decimaln > 0)
//{
//	remain = decimaln % 2;
//	bin = bin + remain * base;
//	decimaln = decimaln / 2;
//	base = base * 10;
//}
//cout << "binary :" << bin;

/*Program Number 9: You are supposed to make a converter from binary to decimal.
Read a binary number and display its binary. Note that user can enter any number of his choice.
Validate that number entered must be binary.
Sample Execution
Enter a number 110
Decimal = 6
*/

//int binary, temp, decimal = 0, base = 1, flag = 1;
//
//while (flag)
//{
//	cout << "Enter a binary number: ";
//	cin >> binary;
//	temp = binary; 
//	flag = 1; 
//	while (temp > 0) 
//	{
//		int digit = temp % 10;
//		if (digit != 0 && digit != 1) 
//		{
//			flag = 0; 
//			break;
//		}
//		temp /= 10;
//	}
//	if (flag) 
//	{
//		break; 
//	}
//	else
//	{
//		cout << "Invalid input. Please enter a binary number." << endl;
//		flag = 1;
//	}
//}
//while (binary > 0)
//{
//	int remain = binary % 10;
//	decimal += remain * base;
//	binary /= 10;
//	base *= 2;
//}
//cout << "Decimal = " << decimal << endl;

/*Program Number 10: Input two fraction add and display its answer a/b + c/d =e/f
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
//int max;
//if (b > d) {
//	max = b;
//}
//else {
//	max = d;
//}
//int lcm = 0;
//for (int i = max; ; i += max)
//{
//	if (i % b == 0 && i % d == 0) 
//	{
//		lcm = i;  
//		break;
//	}
//}
//
//int numenator = a*(lcm / b) + c*(lcm / d);
//cout << a << "/" << b << "+" << c << "/" << d << "=" << numenator << "/" << lcm;

/*Program Number 11: In PF class there are 60 students
you are supposed to enter marks obtained midterm exam and
display marks in descending order. Also count and display how many students are excellent,
good, average and below average. Following is criteria for excellent, good, average and below average.
Total marks of PF is 100.
	> = 80% excellent
	> 69 and < 80 good
 >= 60 and < 70 average
 < 60 is below average.
Validation: While taking input ensure that marks should be positive and should not be greater than total marks.
*/

//int students_marks[6];
//int stud_exce, stud_good, stud_avg, stud_bavg;
//stud_exce = stud_good = stud_avg = stud_bavg = 0;
//for (int i = 0; i < 6; i++)
//{
//	cout << "enter the marks of student " << i + 1<<endl;
//	cin >> students_marks[i];
//	while (true)
//	{
//		if (students_marks[i] >= 0 && students_marks[i] < 101)
//		{
//			break;
//		}
//		else {
//			cout << "invalid marks, renenter marks of the student" << i+1 << endl;
//			cin >> students_marks[i];
//		}
//	}
//	if (students_marks[i] >= 80)
//	{
//		stud_exce++;
//	}
//	else if (students_marks[i] < 80 && students_marks[i] >69)
//	{
//		stud_good++;
//	}
//	else if (students_marks[i] < 70 && students_marks[i] >=60)
//	{
//		stud_avg++;
//	}
//	else if (students_marks[i] < 60)
//	{
//		stud_bavg++;
//	}
//}
//for (int i = 0; i < 6 - 1; i++)
//{
//	int maxIndex = i;
//	for (int j = i + 1; j <6 ; j++) 
//	{
//		if (students_marks[j] > students_marks[maxIndex])
//		{
//			maxIndex = j;
//		}
//	}
//	int temp = students_marks[i];
//	students_marks[i] = students_marks[maxIndex];
//	students_marks[maxIndex] = temp;
//}
//for (int i = 0; i < 6; i++) 
//{
//	cout << students_marks[i] << " "<<endl;
//}
//cout << "\n Excellent: " << stud_exce;
//cout << "\n Good: " << stud_good;
//cout << "\n Average: " << stud_avg;
//cout << "\n Below Average: " << stud_bavg;


/*Program Number 12: Write a C++ program that declares an
integer type array of size 10 and you are supposed to reverse that array. For example.
A10 A14 A18 A22 A26 A30 A34 A38 A42 A46
10 	12 	35 	65 	42 	25 	56 	28 	98 	45

Reverse of Array.

A10 A14 A18 A22 A26 A30 A34 A38 A42 A46
45 	98 	28 	56 	25 	42 	65 	35 	12 	10
*/

//int list[10];
//for (int i = 0; i < 10; i++)
//{
//	cout << "enter the " << i + 1 << " number" << endl;
//	cin >> list[i];
//}
//for (int i = 0,j=9; i < j; i++,j--)
//{
//	int temp=list[i];
//	list[i] = list[j];
//	list[j] = temp;
//}
//for (int i = 0; i < 10; i++)
//{
//	cout << list[i]<<" ";
//}

/*Program Number 13: Write a C++ program that inputs an integer and display maximum number transformed from its digits.
Sample Execution:
Input a number 7856890
Maximum number made from above numbers digits = 9887650
Hint: Count digits of number. Declare dynamic array and store each digit in array. Arrange array in descending order.
Transform number from that.
*/

//int num;
//cout << "enter a number";
//cin >> num;
//int size=0;
//int temp = num;
//while (temp != 0)
//{
//	int j = 0;
//	j = temp % 10;
//	size++;
//	temp /= 10;
//}
//int * point = new int[size];
//for (int i = 0; i < size; i++)
//{	
//	point[i] = num % 10;
//	num /= 10;
//}
//for (int i = 0; i < size - 1; i++)
//{
//	for (int j = i + 1; j < size; j++)
//	{
//		if (point[i] < point[j])
//		{
//			int temp = point[i];
//			point[i] = point[j];
//			point[j] = temp;
//		}
//	}
//}
//cout << "maximum number form that number is ";
//for (int i = 0; i < size; i++)
//{
//	cout  << point[i];
//}
//cout << endl;

/*Program Number 14: Write a C++ program that declares and integer array of size 20.
Input numbers in array and compute sum of all numbers. */

//int add[20];
//int sum = 0;
//for (int i = 0; i < 20; i++)
//{
//	cout << "enter " << i + 1 << " number ";
//	cin >> add[i];
//	sum += add[i];
//}
//cout << "the sum of the array is " << sum;


/*Program Number 15: Write a C++ program that inputs number in array of size 20.
Display most repeated number in array. */

//const int size = 20;
//int a[size];
//
//for (int i = 0; i < size; i++) 
//{
//	cout << "Enter " << i+1 << " numbers: ";
//	cin >> a[i];
//}
//
//int mostRepeatedNumber = a[0];
//int maxCount = 0;
//
//for (int i = 0; i < size - 1; i++) 
//{
//	int count = 1; 
//	for (int j = i + 1; j < size; j++) 
//	{
//		if (a[i] == a[j])
//		{
//			count++;
//		}
//	}
//
//	if (count > maxCount)
//	{
//		maxCount = count;
//		mostRepeatedNumber = a[i];
//	}
//}
//
//cout << "the most repeated number in the array" << mostRepeatedNumber<<endl;







	system("pause");
}