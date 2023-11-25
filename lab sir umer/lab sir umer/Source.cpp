#include<iostream>
using namespace std;
void main()
{
	/*char input;

	cout << "enter a character" << endl;
	cin >> input;
	if (input >= 65 && input <= 90)
	{
		cout << "UPPERCASE";
	}
	else if (input >= 97 && input <= 122)
	{
		cout << "LOWERCASE";
	}
	else{
	cout<<"Not an aplhabhat";
	}
	*/


		/*char input;
		cout << "Enter a character: ";
		cin >> input;

		if (input >= 'A' && input <= 'Z')
		{
			
			char lowercase = input + ('a' - 'A');
			cout << "Lowercase: " << lowercase << endl;
		}
		else {
			char uppercase = input + ('A' - 'a');
			cout << "Uppercase" <<uppercase <<endl;
		}*/
	 
	
	/*int num1, num2;
	char input;
	cout << "enter two numbers and opretion you want to perform (+ ,- ,*,/)";
	cin >> num1 >> num2 >> input;
	if (input == '+')
	{
		cout << num1 << "+ =" << num2 << num1 + num2;
	}
	else if (input == '-')
	{
		cout << num1 << "- =" << num2 << num1 - num2;
	}
	else if (input == '*')
	{
		cout << num1 << "* =" << num2 << num1 * num2;
	}
	else if (input == '/')
	{
		if (num2 == 0)
		{
			cout << "can't divide by 0";
		}
		else
			cout << num1 << "/ =" << num2 << num1 / num2;
	}*/


       /*char ch1, ch2, ch3, ch4, ch5;
       cout << "Enter 5 characters: ";
       cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
       
       int digitCount = 0;
       int uppercaseCount = 0;
       int lowercaseCount = 0;
       int specialCount = 0;
       
       if (ch1>='0' && ch1<='9')
	   {
       	digitCount++;
       }
       else if (ch1>='A' && ch1<='Z')
	   {
       	uppercaseCount++;
       }
       else if (ch1>='a' && ch1<='z') 
	   {
       	lowercaseCount++;
       }
       else {
       	specialCount++;
       }
       
	   if (ch2 >= '0' && ch2 <= '9')
	   {
		   digitCount++;
	   }
	   else if (ch2 >= 'A' && ch2 <= 'Z')
	   {
		   uppercaseCount++;
	   }
	   else if (ch2 >= 'a' && ch2 <= 'z')
	   {
		   lowercaseCount++;
	   }
	   else {
		   specialCount++;
	   }


	   if (ch3 >= '0' && ch3 <= '9')
	   {
		   digitCount++;
	   }
	   else if (ch3 >= 'A' && ch3 <= 'Z')
	   {
		   uppercaseCount++;
	   }
	   else if (ch3 >= 'a' && ch3 <= 'z')
	   {
		   lowercaseCount++;
	   }
	   else {
		   specialCount++;
	   }


	   if (ch4 >= '0' && ch4 <= '9')
	   {
		   digitCount++;
	   }
	   else if (ch4 >= 'A' && ch4 <= 'Z')
	   {
		   uppercaseCount++;
	   }
	   else if (ch4 >= 'a' && ch4 <= 'z')
	   {
		   lowercaseCount++;
	   }
	   else {
		   specialCount++;
	   }


	   if (ch5 >= '0' && ch5 <= '9')
	   {
		   digitCount++;
	   }
	   else if (ch5 >= 'A' && ch5 <= 'Z')
	   {
		   uppercaseCount++;
	   }
	   else if (ch5 >= 'a' && ch5 <= 'z')
	   {
		   lowercaseCount++;
	   }
	   else {
		   specialCount++;
	   }
      
       
       if ((digitCount >= 1) && (uppercaseCount >= 1) && (lowercaseCount >= 1) && (specialCount >= 1)) 
	   {
       	cout << "Strong strength" << endl;
       }
       else if (digitCount>=1 && lowercaseCount>=1 && uppercaseCount>=1)
	   {
       	cout << "Medium strength" << endl;
       }
       else 
	   {
       	cout << "Low strength" << endl;
       }*/


	   /*Task 5: A bowler bowls an over of six balls.
	   Input result on each ball user can enter 0 (dot ball), 1 (Single run), 2 (Double runs), 3 (Triple Score), 4 (4 runs means boundry),
	   5 (5 runs), 6 (6 runs means boundry) and w/W (wicket).Display how many are dot balls, boundries and total wickets.*/


	/*char ball1, ball2, ball3, ball4, ball5, ball6;

	int db = 0;
	int b = 0;
	int w = 0;

	cout << "Enter the result of each ball (0, 1, 2, 3, 4, 5, 6, w/W): ";
	cin >> ball1 >> ball2 >> ball3 >> ball4 >> ball5 >> ball6;

	if (ball1 == '0')
	{
		db++;
	}
	else if (ball1 == '4' || ball1 == '6')
	{
		b++;
	}
	else if (ball1 == 'w' || ball1 == 'W') 
	{
		w++;
	}

	if (ball2 == '0')
	{
		db++;
	}
	else if (ball2 == '4' || ball2 == '6') 
	{
		b++;
	}
	else if (ball2 == 'w' || ball2 == 'W')
	{
		w++;
	}

	if (ball3 == '0') 
	{
		db++;
	}
	else if (ball3 == '4' || ball3 == '6') 
	{
		b++;
	}
	else if (ball3 == 'w' || ball3 == 'W')
	{
		w++;
	}

	if (ball4 == '0')
	{
		db++;
	}
	else if (ball4 == '4' || ball4 == '6') 
	{
		b++;
	}
	else if (ball4 == 'w' || ball4 == 'W')
	{
		w++;
	}

	if (ball5 == '0') 
	{
		db++;
	}
	else if (ball5 == '4' || ball5 == '6')
	{
		b++;
	}
	else if (ball5 == 'w' || ball5 == 'W')
	{
		w++;
	}

	if (ball6 == '0') 
	{
		db++;
	}
	else if (ball6 == '4' || ball6 == '6')
	{
		b++;
	}
	else if (ball6 == 'w' || ball6 == 'W') 
	{
		w++;
	}

	cout << "Dot balls: " << db << endl;
	cout << "Boundaries: " << b << endl;
	cout << "Wickets: " << w << endl;*/




	















	system("pause");

}