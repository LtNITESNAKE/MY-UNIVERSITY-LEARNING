#include<iostream>
using namespace std;

struct Employee {
	int EmpID;
	char Empname[20];
	int EmpSalary;
};

void Menu() {
	cout << "Press 1 to Display highest Paid Employee" << endl;
	cout << "Press 2 to Display Lowest Paid Employee" << endl;
	cout << "Press 3 to Search Specific Employee using EMP ID" << endl;
	cout << "Press 4 to Update salary of specific Employee Using Emp ID" << endl;
	cout << "Press 5 to Display All employees" << endl;
	cout << "Press 6 to exit program" << endl;
}

int employeeByID(Employee emp[], int ID, int user) {
	for (int i = 0; i < user; i++) {
		if (emp[i].EmpID == ID) {
			return i;
		}
	}
	return -1;
}

int losalary( Employee emp[], int user) {
	
	int lowestSalary = emp[0].EmpSalary;

	for (int i = 0; i < user; i++) {
		if (emp[i].EmpSalary < lowestSalary) {
			return i;
		}
	}
	return 0;
	
}

int hisalary(Employee emp[], int user) {

	int highestSalary = emp[0].EmpSalary;

	for (int i = 0; i < user; i++) {
		if (emp[i].EmpSalary > highestSalary) {
			return i;
		}
	}
	return 0;
	
}

void updateInfo(Employee emp[], int ID, char newname[], int newsalary, int user) {
	int index = employeeByID(emp, ID, user);
	if (index != -1) {
		
		for (int i = 0; i < 20 && newname[i] != '\0'; i++) {
			emp[index].Empname[i] = newname[i];
		}
		emp[index].Empname[19] = '\0'; 
		emp[index].EmpSalary = newsalary;
		cout << "Employee information updated successfully." << endl;
	}
	else {
		cout << "Employee not found." << endl;
	}
}

void displayAllEmployees(Employee emp[], int user) 
{
	for (int i = 0; i < user; i++) 
	{
		cout << "Employee ID: " << emp[i].EmpID << ", Name: " << emp[i].Empname << ", Salary: " << emp[i].EmpSalary << endl;
	}
}

void  main() {
	const int MAX_EMPLOYEES = 3;
	Employee EMP[MAX_EMPLOYEES];
	int newuser = 0;

	for (int i = 0; i < MAX_EMPLOYEES; i++) {
		cout << "Enter Employee ID: ";
		cin >> EMP[i].EmpID;

		cout << "Enter Employee Name: ";
		cin >> EMP[i].Empname;

		cout << "Enter Employee Salary: ";
		cin >> EMP[i].EmpSalary;

		newuser++;
	}

	int userchoice;
	cout << "WELCOME TO PROGRAM";
	Menu();
	cin >> userchoice;

	do {
		switch (userchoice) {
		case 1: {
			int highestSal = hisalary( EMP, newuser);
				cout << "Highest salary is " << EMP[highestSal].EmpSalary<< " of employee " << EMP[highestSal].Empname << endl;
			break;
		}
		case 2: {
			int lowestSal = losalary(EMP, newuser);
				cout << "Lowest salary is " << EMP[lowestSal].EmpSalary << " of employee " << EMP[lowestSal].Empname << endl;
						break;
		}
		case 3: {
			int id;
			cout << "Enter employee ID: ";
			cin >> id;
			int index = employeeByID(EMP, id, newuser);
			if (index != -1) {
				cout << "Employee name: " << EMP[index].Empname << endl;
				cout << "Employee salary: " << EMP[index].EmpSalary << endl;
			}
			else {
				cout << "Employee not found." << endl;
			}
			break;
		}
		case 4: {
			int ID;
			char newname[20];
			int newsalary;
			cout << "Enter employee ID to update: ";
			cin >> ID;
			cout << "Enter new name: ";
			cin >> newname;
			cout << "Enter new salary: ";
			cin >> newsalary;
			updateInfo(EMP, ID, newname, newsalary, newuser);
			break;
		}
		case 5:
			displayAllEmployees(EMP, newuser);
			break;
		case 6:
			cout << "Exiting program. Goodbye!" << endl;
			break;
		default:
			cout << "Enter valid number." << endl;
		}

	

	} while (userchoice <= 6);

	system("pause");
}
