#include <iostream> 
#include <cstdlib>  
#include <ctime>    
using namespace std;
void main()
{
	/*PROGRAM 4*/

	srand(static_cast<unsigned>(time(0)));
	int random_number1 = rand() % 101;
	int random_number2 = rand() % 101;
	int input;
	int sum = random_number1 + random_number2;
	cout << "enter the sum of " << random_number1 << "  and  " << random_number2 << endl;
	cin >> input;
	if (input == sum)

		cout << "Congratulations, YOU SCORED 100 % " << endl;

	else
	{
		cout << "Wrong, please enter your answer again" << endl;
		cin >> input;
	  if (input == sum)
	{
		cout << "Congratulations, you scored 66%"<<endl;
	}
	else 
	{
		cout << "try again"<<endl;
		cin >> input;
	if (input == sum)
	{
		cout << "You scored 33%"<<endl;
	}
	else
	{
		cout << "BETTER LUCK NEXT TIME"<<endl;
	}
	}
	}

	/*PROGRAM 3*/

	/*int p_a, p_c, p_p;
	cout << "enter the population of the Pakistan China and Afghanistan" << endl;
	cin >> p_p >> p_c >> p_a;
	if (p_p > p_c && p_p > p_a)
	
	cout << "highest population country is PAKISTAN and it is " << p_p << endl;
	
	else if (p_c > p_a && p_c > p_p)
	
		cout << "highest population country is CHINA and it is " << p_c << endl;
	
	else 
	
		cout << "highest population country is AFGHANISTAN and it is " << p_a << endl;*/
	
	
	
	

	/*PROGRAM 2*/
	/*float CGPA_se1, CGPA_se2;
	cout << "enter  cgpa for first and second semestor : " << endl;
	cin >> CGPA_se1 >> CGPA_se2;
	if(CGPA_se1>4 || CGPA_se2>4)
	{
		cout << "CGPA IS NOT PREDICTABLE " << endl;
	}
    else if (CGPA_se2  < CGPA_se1 )
	{
		cout << "CGPA IS DECREASING" << endl;
	}
	else if (CGPA_se2>CGPA_se1)
	{
		cout << "CGPA IS IMPROVING" << endl;
	}
	else 
	{
		cout << "CGPA IS SAME" << endl;
	}*/

	/*PROGRAM 1*/
	/*int total_amount = 0, age, price_bill = 1000, billforchild, billforadult, billforsenior;

	billforchild = price_bill / 2;
	billforadult = price_bill;
	billforsenior = price_bill - (price_bill*0.2);

	
	cout << "enter age of FIRST family member" << endl;
	cin >> age;

	if ( age < 15) total_amount += billforchild;
	else if (age >= 15 && age <= 59) total_amount += billforadult;
	else 	total_amount += billforsenior;

	cout << "enter age of SECOND family member" << endl;
	cin >> age;

	if (age < 15)	total_amount += billforchild;
	else if ( age >= 15 && age <= 59) total_amount += billforadult;
	else	total_amount += billforsenior;

	cout << "enter age of THIRD family member" << endl;
	cin >> age;

	if (  age < 15)	total_amount += billforchild;
	else if (age >= 15 && age <= 59) total_amount += billforadult;
	else   total_amount += billforsenior;

	cout << "enter age of FOURTH family member" << endl;
	cin >> age;

	if ( age < 15)	total_amount += billforchild;
	else if (age >= 15 && age <= 59) total_amount += billforadult;
	else	total_amount += billforsenior;

	cout << "enter age of FIFTH member of family " << endl;
	cin >> age;

	if ( age < 15)	total_amount += billforchild;
	else if (age >= 15 && age <= 59)	total_amount += billforadult;
	else	total_amount += billforsenior;

	cout << "your total bill will be " << total_amount << endl;
*/


	system("pause");
}

	