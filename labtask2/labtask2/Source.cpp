#include<iostream>
using namespace std;
void main()
{
	/*int marks;
	cout << "enter your marks:" << endl;
	cin >> marks;
	if (marks > 49)
	{
		cout << "you pass";
	}
	if(marks<49)
	{
		cout << "you fail";
	}*/

	/*int age;
	cout << "enter you age" << endl;
	cin >> age;
	if (age >= 18)
	{
		cout << "you are eligibile";

	}
	if (age < 18)
	{
		cout << "you are not eligible";
	}*/

	/*int num;
	cout << "enter any number";
	cin >> num;
	if (num <= 9)
	{
		cout << "number is one digit";
	}
	if (num <= 99)
	{
		if (num > 9)
			cout << " number is two digit";
	}
	if (num <= 999)
	{
		if (num > 99)
			cout << " number is three digit";
	}if (num > 999)
	{
			cout << " number is four digit";
	}*/

	/*int temp_m, temp_t, temp_w;
	cout << "enter the temprature in Celsuis on monday";
	cin >> temp_m;
	cout << "enter the temprature in Celsuis on tuesday";
	cin >> temp_t;
	cout << "enter the temprature in Celsuis on wednesday";
	cin >> temp_w;
	if (temp_m > 37)
	{
		cout << "hottest day ";
	}
	if (temp_m < 15)
	{
		cout << " coldest day ";
	}
	if (temp_t > 37)
	{
		cout << "hottest day ";
	}
	if (temp_t < 15)
	{
		cout << " coldest day ";
	}
	if (temp_w > 37)
	{
		cout << "hottest day ";
	}
	if (temp_w < 15)
	{
		cout << " coldest day ";
	}*/

	
	/*int age, obt_marks, total_marks;
	cout << "enter you age " << endl;
	cin >> age;
	if (age > 25)
	{
		cout << "you are not eligible" << endl;

	}
	if (age < 18)
	{
		cout << "you are not eligible" << endl;
	}
     if (age > 18)
	{
	   if(age<25)
	   {
		cout << "you are eligible" << endl;
		cout << "enter your obtained marks " << endl;
		cin >> obt_marks;
		cout << "enter your total marks" << endl;
		cin >> total_marks;
		float percentage = ((float)obt_marks / total_marks) * 100;
		cout << "your percentage is " << percentage << endl;
		}
	}*/

             /*int marks;
			 cout << "enter your marks" << endl;
			 cin >> marks;
			 if (marks > 79)
			 {
				 cout << "A GRADE" << endl;
			 }
			 if (marks > 70)
			 {
				 if(marks<80)
				 cout << "B GRADE" << endl;
			 }
			 if (marks > 60)
			 {
				 if (marks<70)
					 cout << "C GRADE" << endl;
			 }if (marks > 49)
			 {
				 if (marks<60)
					 cout << "D GRADE" << endl;
			 }
			 if (marks < 50)
			 {
				 cout << "F GRADE" << endl;
			 }*/
 
          int income;
		  float taxpayable;
		  cout << "enter you salary";
		  cin >> income;
		  if (income < 600000)
		  {
			  taxpayable = 0;
		  }
		  if (income > 6000000)
		  {
			 if(income<1200000)
			  taxpayable =(income*2.5)/100;
			 		
		  }
		  if (income > 1200000)
		  {
			  if(income<2400000)

			  taxpayable = 15000+(income*12.5) / 100;
			 
		  }
		  if (income > 2400001)
		  {
			 if(income<3600000)
			 taxpayable = 165000 + (income*22.5) / 100;
			 
		  }
		  if (income > 3600001)
		  {
			  if (income<6000000)
				  taxpayable = 435000 + (income*27.5) / 100;
			 
		  }
		  if (income > 6000001)
		  {
			  if (income<12000000)
				  taxpayable = 1095000 + (income*35) / 100;
			 
		  }
		 
		  if (income > 12000000)
		  {
			  taxpayable = 2955000 + (income * 35) / 100;
			 
		  }
		  cout << "tax" << taxpayable << endl;













	system("pause");
}