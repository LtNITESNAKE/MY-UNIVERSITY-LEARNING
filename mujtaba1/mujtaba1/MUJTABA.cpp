#include<iostream>
using namespace std;

void main() {
	int temp_F;
	cout << "Enter the temperature in Fahrenheit Scale: ";
	cin >> temp_F;
	cout << "You entered the temperature in Fahrenheit Scale as: " << temp_F << endl;

	int temp_C = (temp_F - 32) * 5 / 9;
	cout << "Temperature in Centigrade Scale: " << temp_C << " degrees Celsius" << endl;

	system("pause");
}

/*#include<iostream>
using namespace std;

void main()
{
	int marks_PF, marks_DS, marks_ITC;
	const int total_marks_PF = 80;
	const int total_marks_DS_ITC = 60;
    

	cout << "Enter marks obtained in PF: "<<endl;
	cin >> marks_PF;
	cout << "Enter marks obtained in DS: "<<endl;
	cin >> marks_DS;
	cout << "Enter marks obtained in ITC: "<<endl;
	cin >> marks_ITC;

	int total_marks = marks_PF + marks_DS + marks_ITC;
	float percentage = (total_marks) / (total_marks_PF + 2 * total_marks_DS_ITC) * 100;

	cout << "Percentage: " << percentage << "%" << endl;
	system("pause");
    
}*/







	
