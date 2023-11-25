#include<iostream>
using namespace std;
void main()
{
	/*int hours;
	int amount_hours;

	cout << "enter hours emplyee worked and amount paid per hours" << endl;
	cin >> hours>>amount_hours;
	int salary = amount_hours*hours;
	cout << "your salary will be" <<salary<< endl;
	*/



	/*int CGPA;
	int hours_studied;
	float quality_points;
	cout << "enterhours studied" << endl;
	cin >> hours_studied;
	cout << "enter quality points" << endl;
	cin >> quality_points;
	CGPA = quality_points / hours_studied * 4;
	cout << "your CGPA IS " <<CGPA<< endl;*/
	
	/*int kilometer;
	cout << "enter distance in kilometer" << endl;
	cin >> kilometer;
	int meter = kilometer*1000;
		cout << "distance in meter is" << meter << endl;*/

	/*int monthly_salary;
	cout << "enter your monthly salary" << endl;
	cin >> monthly_salary;
	int year_salary = monthly_salary * 12;
		cout << "your yearly salary is " << endl;*/

	int basic_salary;
	int medical_allowance;
	int home_allowance;

	cout << "enter basic salary " << endl;
	cin >> basic_salary;
	cout << "enter medcial allowance " << endl;
	cin >> medical_allowance;
	cout << "enter basic salary " << endl;
	cin >> home_allowance;
	int tax = (basic_salary * 10) / 100;
	int sum = basic_salary + medical_allowance + home_allowance;
	int gross = sum - tax;
	cout << "your net salary" << sum<<endl;
	cout << "your gross salary" << gross << endl;



	system("pause");
}