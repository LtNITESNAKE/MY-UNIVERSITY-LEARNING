#include<iostream>
using namespace std;
void main()
{
	/*int age;
	cout << "enter you age:" << endl;
	cin >> age;
	if (age <= 12)
	{
		cout << "you are a child";
	}
	else {
		if (age >= 13 && age <= 19)
		{
			cout << "you are an teen";
		}
		else {
			if (age >= 20 && age <= 64)
			{
				cout << "you are an adult";
			}
			else {
					cout << " you are a senior";
				
			}
		}
	}*/

	float weight, height;
	cout << "Enter your weight in kg and height in centimeters: " << endl;
	cin >> weight >> height;

	// Convert height from centimeters to meters
	height = height / 100.0;

	// Calculate BMI
	float bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "Underweight";
	else if (bmi < 24.9)
		cout << "Normal weight";
	else if (bmi < 29.9)
		cout << "Overweight";
	else
		cout << "Obese";
	












	system("pause");
}