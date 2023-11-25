#include <iostream>
using namespace std;
void main()
{
	/*Input two numbers and display which one is greater or both or equal.*/


	/*int num1, num2;
	cout << "enter two numbers : ";
	cin >> num1 >> num2;
	if (num1 > num2)
	{
		cout << "num1 is greater";
	}
	else if(num2>num1)
	{ 
		cout << "num2 is greater";
	}
	else {
		cout << "both are equal";
	}*/

	/*Input a value from user, if user enters an even number 
	then display its square, and if user enters odd value then display its cube.*/

	/*int num;
	cout << "enter a value";
	cin >> num;
	int even = num % 2;
	if (even == 0)
	{
		cout << "square"<<num*num;
	}
	else 
	{
		cout << "cube" << num*num*num;
	}*/

	/*Input age of user and display whether user was born on a leap year or not. */
	
	int age;
	cout << "enter your age : " << endl;
	cin >> age;
	int year = 2023 - age;
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ))
	{
		cout << " born in leap" ;
	}
	else
	{
		cout << "not born leap" ;
	}
	//calculation extra
	/*int mod;
	cout << "m \n";
	cin >> mod;
	int mu = mod % 4;
	int mu = mod % 100;
	int mu = mod % 400;
	cout << mu; */





	/*Input marks obtained by user in his matriculation exams.
	If obtained marks are more than 1100 then tell user ‘invalid marks’ and input again.
	If user enters marks less than 1100 then display his percentage and tell if he has passed or not.
	33 % marks required to pass exams.*/

	int marks;
	cout << "enter obtained marks : " << endl;
	cin >> marks;
	if (marks > 1100)
	{
		cout << "invaild marks input again ";
	}
	cin >> marks;
	 if (marks < 1100)
	{
		float percentage = (float)marks / 1100 * 100;
		if (percentage > 33)
		{
			cout << "passed";
		}
		else {
			cout << " you failed";
		}
	}
	
	
	/*Input 3 values from user and display the highest value or display all are same.*/
	/*int v1, v2,v3;
	cout << "enter three values : ";
	cin >>v1 >> v2>>v3;
	if (v1 > v2 && v1>v3)
	{
		cout << "v1 is highest";
	}
	else if (v2>v1 && v2>v3)
	{
		cout << "v2 is highest";
	}
	else if (v3 > v2 && v3>v1)
	{
		cout << "v3 is the highest";
	}
	else {
		cout << "All are same";
	}*/

	/*Input obtained marks of 5 students in an exam. And display marks of top 3 students*/

	/*int s1, s2, s3, s4, s5;
	cout << "Enter obtained marks of 5 students: ";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;

	
	int highest = s1;

	if (s2 > highest)
	{
		highest = s2;
	}

	if (s3 > highest)
	{
		highest = s3;
	}

	if (s4 > highest) 
	{
		highest = s4;
	}

	if (s5 > highest)
	{
		highest = s5;
	}

	
	int secondHighest = -1;

	if (s1 != highest && s1 > secondHighest)
	{
		secondHighest = s1;
	}

	if (s2 != highest && s2 > secondHighest) 
	{
		secondHighest = s2;
	}

	if (s3 != highest && s3 > secondHighest) 
	{
		secondHighest = s3;
	}

	if (s4 != highest && s4 > secondHighest)
	{
		secondHighest = s4;
	}

	if (s5 != highest && s5 > secondHighest)
	{
		secondHighest = s5;
	}

	
	int thirdHighest = -1;

	if (s1 != highest && s1 != secondHighest)
	{
		thirdHighest = s1;
	}

	if (s2 != highest && s2 != secondHighest)
	{
		thirdHighest = s2;
	}

	if (s3 != highest && s3 != secondHighest) 
	{
		thirdHighest = s3;
	}

	if (s4 != highest && s4 != secondHighest) 
	{
		thirdHighest = s4;
	}

	if (s5 != highest && s5 != secondHighest) 
	{
		thirdHighest = s5;
	}

	cout << "Top three students with the highest marks:" << endl;

	if (highest != -1)
	{
		cout << "Student with the highest marks: " << highest << " marks" << endl;
	}

	if (secondHighest != -1) 
	{
		cout << "Student with the second highest marks: " << secondHighest << " marks" << endl;
	}

	if (thirdHighest != -1) 
	{
		cout << "Student with the third highest marks: " << thirdHighest << " marks" << endl;
	}*/


/*Input an alphabet from user and display its ASCII code.*/

//char in;
//int ask = 0;
//cout << "enter an alphabet : ";
//cin >> in;
//if ((in >= 'A' && in <= 'Z') || (in >= 'a' && in <= 'z'))
//{
//	ask = in;
//	cout << "ASCII :" << ask  ;
//}
//else {
//	cout << "invalid entry;;;;;;; plz enter an aplhabhet";
//}


/*Input a character from user and display whether user entered an alphabet or not.*/
/*
char in;
cout << "enter a character : " << endl;
cin >> in;
if ((in >= 'A' && in <= 'Z') || (in >= 'a' && in <= 'z'))
{
	cout << "user entered alphabhet" << endl;
}
else {
	cout << "user didnot enter aplhabhet"<<endl;
}
*/

/*Input a character from user and display whether user entered a lower case alphabet,
upper case alphabet or none of them.*/

//char in;
//cout << "enter a character" << endl;
//cin >> in;
//if (in >= 'A' && in <= 'Z')
//{
//	cout << "uppercase" << endl;
//}
//else if (in >= 'a' && in <= 'z')
//{
//	cout << "lowercase" << endl;
//}
//else {
//	cout << "user didn't any alphabet" << endl;
//}



/*Make a quiz program for user which inputs a character and then inputs ASCII of that character from user.
Display whether user entered correct ASCII or not. */

//char in;
// int ascii;
//cout << "enter a character : " << endl;
//cin >> in;
//cout << "enter that character ASCII : " << endl;
//cin >> ascii;
//if (in == ascii)
//{
//	cout << "you entered correct ASCII : ";
//
//}
//else {
//	cout << "you didnt entered correct ASCII ";
//}


/*12-	Make a quiz program for user which inputs 5 characters and then inputs ASCII each character from user.
Display the how many answers of user were correct and how many were in correct.*/
//
//char c1, c2, c3, c4, c5;
//int a1, a2, a3, a4, a5;
//cout << "enter five characters :" << endl;
//cin >> c1 >> c2 >> c3 >> c4 >> c5;
//cout << "enter ascii for those five characters in sequence for correct evaluation : " << endl;
//cin >> a1 >> a2 >> a3 >> a4 >> a5;
//int corrected = 0;
//if (c1 == a1)
//{
//	corrected++;
//}
//if (c2 == a2)
//{
//	corrected++;
//}
//if (c3 == a3)
//{
//	corrected++;
//}
//if (c4 == a4)
//{
//	corrected++;
//}
//if (c5 == a5)
//{
//	corrected++;
//}
//cout << "correct guess were : " << corrected << endl;

















	system("pause");
}