#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
	int studentID;
	string name;
	float GPA;
	float fees;
	float fines;
	// Add relevant fields like course enrollment , grades, etc.
};

struct DataCell {
	Student students[MAX_STUDENTS];
	int numStudents;
};

// Function declarations
void Menu() {
	cout << "DataCell Department Menu:" << endl;
	cout << "1. Add Student" << endl;
	cout << "2. Update Student Information" << endl;
	cout << "3. Display Student Information" << endl;
	cout << "4. Display All Students" << endl;
	cout << "5. Search Student by ID" << endl;
	cout << "6. Sort Students by ID" << endl;
	cout << "7. Manage Fees" << endl;
	cout << "8. Manage Fines" << endl;
	cout << "9. Generate Transcript" << endl;
	cout << "10. Generate Report" << endl;
	cout << "11. Exit" << endl;
	cout << "Enter your choice: ";
}
void addStudent(DataCell& dataCell, const Student& newStudent);
void updateStudentInfo(DataCell& dataCell, int studentID, float newGPA, float newFees, float newFines);
void displayStudentInfo(const Student& student);
void displayAllStudents(const DataCell& dataCell);
int searchStudentByID(const DataCell& dataCell, int studentID);
void sortStudentsByID(DataCell& dataCell);
void manageFees(DataCell& dataCell, int studentID, float paymentAmount);
void manageFines(DataCell& dataCell, int studentID, float fineAmount);
void generateTranscript(const DataCell& dataCell);
void generateReport(const DataCell& dataCell);
bool authenticateUser();

void  main()
{
	DataCell dataCell;
	dataCell.numStudents = 0;

	if (!authenticateUser()) 
	{
		cout << "Authentication failed. Exiting program." << endl;
		
	}

	int choice;

	do {
		system("cls"); // Clear the console screen

			    // Display menu
		Menu();
		cin >> choice;

		switch(choice) 
		{
		case 1: {
			//  Adding a new student
			Student newStudent;
			cout << "Enter student ID: ";
			cin >> newStudent.studentID;
			cout << "Enter student name: ";
			cin.ignore();
			getline(cin, newStudent.name);
			cout << "Enter student GPA: ";
			cin >> newStudent.GPA;
			cout << "Enter student fees: ";
			cin >> newStudent.fees;
			cout << "Enter student fines: ";
			cin >> newStudent.fines;
			addStudent(dataCell, newStudent);
			break; }
		
		case 2: 
			// EUpdating student information
			int studentID;
			float newGPA, newFees, newFines;
			cout << "Enter student ID to update: ";
			cin >> studentID;
			cout << "Enter new GPA: ";
			cin >> newGPA;
			cout << "Enter new fees: ";
			cin >> newFees;
			cout << "Enter new fines: ";
			cin >> newFines;
			updateStudentInfo(dataCell, studentID, newGPA, newFees, newFines);
			break;
		
		case 3: 
			//  Displaying student information
			int studentID;
			cout << "Enter student ID to display: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				displayStudentInfo(dataCell.students[index]);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		
		case 4:
			//  Displaying all students
			displayAllStudents(dataCell);
			break;
		case 5: 
			//  Searching for a student by ID
			int studentID;
			cout << "Enter student ID to search: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				cout << "Student found at index " << index << "." << endl;
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		
		case 6:
			//  Sorting students by ID
			sortStudentsByID(dataCell);
			cout << "Students sorted by ID." << endl;
			break;
		case 7: 
			//  Managing student fees
			int studentID;
			float paymentAmount;
			cout << "Enter student ID to manage fees: ";
			cin >> studentID;
			cout << "Enter payment amount: ";
			cin >> paymentAmount;
			manageFees(dataCell, studentID, paymentAmount);
			break;
		
		case 8: 
			//  Managing student fines
			int studentID;
			float fineAmount;
			cout << "Enter student ID to manage fines: ";
			cin >> studentID;
			cout << "Enter fine amount: ";
			cin >> fineAmount;
			manageFines(dataCell, studentID, fineAmount);
			break;
		
		case 9:
			//  Generating student transcript
			generateTranscript(dataCell);
			break;
		case 10:
			// Generating department report
			generateReport(dataCell);
			break;
		case 11:
			cout << "Exiting program. Goodbye!" << endl;
			break;
		default:
			cout << "Invalid choice. Please enter a valid option." << endl;
		}

		cout << "\nPress Enter to continue...";
		cin.ignore();
		cin.get();

	} while (choice != 11);

	system("pause");
}

// Implementation of addStudent function
void addStudent(DataCell& dataCell, const Student& newStudent) 
{
	if (dataCell.numStudents < MAX_STUDENTS)
	{
		dataCell.students[dataCell.numStudents++] = newStudent;
		cout << "Student added successfully." << endl;
	}
	else
	{
		cout << "Cannot add more students. Maximum limit reached." << endl;
	}
}

// Implementation of updateStudentInfo function
void updateStudentInfo(DataCell& dataCell, int studentID, float newGPA, float newFees, float newFines) 
{
	int index = searchStudentByID(dataCell, studentID);
	if (index != -1)
	{
		dataCell.students[index].GPA = newGPA;
		dataCell.students[index].fees = newFees;
		dataCell.students[index].fines = newFines;
		cout << "Student information updated successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}

// Implementation of displayStudentInfo function
void displayStudentInfo(const Student& student)
{
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << student.studentID << endl;
	cout << "Name: " << student.name << endl;
	cout << "GPA: " << student.GPA << endl;
	cout << "Fees: $" << student.fees << endl;
	cout << "Fines: $" << student.fines << endl;
}

// Implementation of displayAllStudents function
void displayAllStudents(const DataCell& dataCell)
{
	if (dataCell.numStudents == 0) 
	{
		cout << "No students found." << endl;
	}
	else {
		cout << "\nAll Students:" << endl;
		for (int i = 0; i < dataCell.numStudents; ++i)
		{
			cout << "-----------------" << endl;
			displayStudentInfo(dataCell.students[i]);
		}
		cout << "-----------------" << endl;
	}
}

// Implementation of searchStudentByID function (linear search)
int searchStudentByID(const DataCell& dataCell, int studentID)
{
	for (int i = 0; i < dataCell.numStudents; ++i) 
	{
		if (dataCell.students[i].studentID == studentID)
		{
			return i;
		}
	}
	return -1;
}

// Implementation of sortStudentsByID function (bubble sort)
void sortStudentsByID(DataCell& dataCell) 
{
	for (int i = 0; i < dataCell.numStudents - 1; ++i)
	{
		for (int j = 0; j < dataCell.numStudents - i - 1; ++j) 
		{
			if (dataCell.students[j].studentID > dataCell.students[j + 1].studentID) 
			{
				// Swap the students
				Student temp = dataCell.students[j];
				dataCell.students[j] = dataCell.students[j + 1];
				dataCell.students[j + 1] = temp;
			}
		}
	}
}

// Implementation of manageFees function
void manageFees(DataCell& dataCell, int studentID, float paymentAmount) 
{
	int index = searchStudentByID(dataCell, studentID);
	if (index != -1) {
		dataCell.students[index].fees -= paymentAmount;
		cout << "Fees managed successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}

// Implementation of manageFines function
void manageFines(DataCell& dataCell, int studentID, float fineAmount) 
{
	int index = searchStudentByID(dataCell, studentID);
	if (index != -1) {
		dataCell.students[index].fines -= fineAmount;
		cout << "Fines managed successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}

// Implementation of generateTranscript function
void generateTranscript(const DataCell& dataCell) {
	// Implement transcript generation logic here
	cout << "Transcript generation  " << endl;
}

// Implementation of generateReport function
void generateReport(const DataCell& dataCell) {
	// Implement reporting logic here
	cout << "Report generation " << endl;
}

// Implementation of user authentication
bool authenticateUser() {
	// Implement authentication logic here
	//  use a username and password system or other authentication methods
	// For simplicity, detailed authentication mechanism
	return true;
}
