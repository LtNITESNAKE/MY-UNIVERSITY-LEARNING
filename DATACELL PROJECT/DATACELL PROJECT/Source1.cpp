#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

const int courses = 2;
const int ALLstudents = 100;
// course
struct course
{
	string course_names;
	string course_codes;
	int credit_hours;
	string grades;
	bool prerequisite_completed;
	string prerequisite_course;
};
//enrollment
struct enrollment
{
	string add_date;
	string grad_date;
	string pro_to_studu;
	string degree;
	int fscmarks, matmarks;
	string CNIC;
	string Email;
	string D_O_B;
	string Address;

};
//user info
struct User {
	string username;
	string password;
};

//student info
struct Student {
	string ID;
	string name;
	string contact;
	float gpa;
	float fees;
	float fines;
	enrollment enroll;
	course Course[courses];

};

// main dep 
struct DataCell {
	Student studs[ALLstudents];
	int numStudents;
};

struct AuthenticatedUser {
	int index;
	string role;
};
// function implementation use
AuthenticatedUser authenticateUser(string enteredUsername, string enteredPassword, User users[], int numUsers) {
	for (int i = 0; i < numUsers; ++i) {
		if (users[i].username == enteredUsername && users[i].password == enteredPassword) {
			AuthenticatedUser authUser;
			authUser.index = i;
			authUser.role = "Administrator";
			return authUser;
		}
	}
	// Authentication failed
	AuthenticatedUser authUser;
	authUser.index = -1;
	authUser.role = "user";
	return authUser;
}
void viewUserProfile(string role) {
	cout << "Welcome to the system!" << endl;
	// User profile
	cout << "User Profile:\n";
	cout << "-----------------------\n";
	cout << "Role: " << role << endl;
	cout << "------------------------\n";
}
// linear search
int searchStudentByID(DataCell& department, string studentID) {
	for (int i = 0; i < department.numStudents; ++i)
	{
		if (department.studs[i].ID == studentID)
		{
			return i;
		}
	}
	return -1;
}
// bulbble sort
void sortStudentsByID(DataCell department) {

	for (int i = 0; i < department.numStudents - 1; ++i)
	{
		for (int j = 0; j < department.numStudents - i - 1; ++j)
		{
			if (department.studs[j].ID > department.studs[j + 1].ID)
			{

				Student temp = department.studs[j];
				department.studs[j] = department.studs[j + 1];
				department.studs[j + 1] = temp;
			}
		}
	}

}

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
	cout << "9. Add Course Details" << endl;
	cout << "10. Course Display By ID " << endl;
	cout << "12.Generate Transcript " << endl;
	cout << "13. Exit" << endl;
	cout << "Enter your choice: ";
}

bool isPrerequisiteCompleted(Student& student, string currentCourseName)
{
	for (int i = 0; i < courses; ++i)
	{
		if (student.Course[i].course_names == currentCourseName)
		{

			if ((student.Course[i].grades != "F" && student.Course[i].grades != "f") && student.Course[i].prerequisite_completed)
			{
				return true;  //  is completed
			}
			else
			{
				student.Course[i].prerequisite_completed = false;
				cout << "Prerequisite for " << currentCourseName << " not completed. Set to false." << endl;
				return false;  //not completed
			}
		}
	}
	// Current course not found
	cout << "Current course " << currentCourseName << " not found in the student's record." << endl;
	return false;
}

void course_prereq(DataCell& dataCell, int index)
{
	for (int i = 0; i < courses; ++i)
	{
		Student newStudent;  // Create a new Student object for each course
		cout << "Enter course " << i + 1 << " name for semester: ";
		cin.ignore();
		getline(cin, newStudent.Course[index].course_names);

		cout << "Enter Course " << i + 1 << " code for semester: ";
		cin.ignore();
		getline(cin, newStudent.Course[index].course_codes);

		cout << "Enter Course " << i + 1 << " Credit hours for semester: ";

		cin >> newStudent.Course[index].credit_hours;

		cout << "Enter student Grade for this semester: ";
		cin.ignore();
		getline(cin, newStudent.Course[index].grades);

		// Prerequisite information
		cout << "Does this course have a prerequisite? (y/n): ";
		char hasPrerequisite;
		cin >> hasPrerequisite;

		if (hasPrerequisite == 'y' || hasPrerequisite == 'Y')
		{
			cout << "Enter the name of the prerequisite course: ";
			cin >> newStudent.Course[index].prerequisite_course;
		}

		// Set prerequisite completion based on grade
		newStudent.Course[index].prerequisite_completed = (newStudent.Course[index].grades != "F" && newStudent.Course[index].grades != "f");

		// Add the current course information to the student at the given index
		dataCell.studs[index].Course[i] = newStudent.Course[index];
	}

	cout << "Student added successfully." << endl;
}

void addStudent(DataCell& dataCell, Student newStudent)
{
	// Check if the student with the same ID already exists
	int existingIndex = searchStudentByID(dataCell, newStudent.ID);
	if (existingIndex != -1) {
		// Handle the case where the student already exists 
		cout << "Student with ID " << newStudent.ID << " already exists. Updating information." << endl;

	}
	else {
		// Add the new student
		if (dataCell.numStudents < ALLstudents) {
			dataCell.studs[dataCell.numStudents++] = newStudent;
			cout << "Student added successfully." << endl;
		}
		else {
			// If the array is full, increase its size
			const int newSize = ALLstudents + 10;
			if (dataCell.numStudents < newSize) {
				// Allocate a new array with the increased size
				Student* newStudents = new Student[newSize];

				// Copy existing data to the new array
				for (int i = 0; i < dataCell.numStudents; ++i) {
					newStudents[i] = dataCell.studs[i];
				}

				// Add the new student to the new array
				newStudents[dataCell.numStudents++] = newStudent;

				// Update the DataCell with the new array and size
				for (int i = 0; i < dataCell.numStudents; ++i) {
					dataCell.studs[i] = newStudents[i];
				}

				cout << "Student added successfully." << endl;
			}
		}
	}
}

void displayStudentInfo(Student student)
{
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << student.ID << endl;
	cout << "Name: " << student.name << endl;
	cout << "Contact no: " << student.contact << endl;
	cout << "GPA: " << student.gpa << endl;
	cout << "Fees: RS" << student.fees << endl;
	cout << "Fines: RS" << student.fines << endl;
}

void coursedisplay(DataCell&datacell, int index)
{
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << datacell.studs[index].ID << endl;
	cout << "Name: " << datacell.studs[index].name << endl;
	cout << "GPA: " << datacell.studs[index].gpa << endl;

	// Display course details
	cout << "\nCourse Details:" << endl;
	for (int i = 0; i < courses; i++) {
		cout << "-----------------" << endl;
		cout << "Course Name: " << datacell.studs[index].Course[i].course_names << endl;
		cout << "Course Code: " << datacell.studs[index].Course[i].course_codes << endl;
		cout << "Credit Hours: " << datacell.studs[index].Course[i].credit_hours << endl;
		cout << "Grade: " << datacell.studs[index].Course[i].grades << endl;

		// Display prerequisite information
		if (datacell.studs[index].Course[i].prerequisite_completed) {
			cout << "Prerequisite Completed: Yes" << endl;
		}
		else {
			cout << "Prerequisite Completed: No";
			if (!datacell.studs[index].Course[i].prerequisite_course.empty()) {
				cout << " - Prerequisite Course can't be studied : " << datacell.studs[index].Course[i].prerequisite_course;
			}
			cout << endl;
		}
	}
	cout << "-----------------" << endl;
}

void displayAllStudents(DataCell& department)
{
	if (department.numStudents == 0)
	{
		cout << "No students found." << endl;
	}
	else {
		cout << "\nAll Students:" << endl;
		for (int i = 0; i < department.numStudents; ++i)
		{
			cout << "-----------------" << endl;
			displayStudentInfo(department.studs[i]);
		}
		cout << "-----------------" << endl;
	}

}

void updateStudentInfo(DataCell& dataCell, string studentID, string newcontact, float newGPA, float newFees, float newFines)
{
	int index = searchStudentByID(dataCell, studentID);
	if (index != -1)
	{
		dataCell.studs[index].contact = newcontact;
		dataCell.studs[index].gpa = newGPA;
		dataCell.studs[index].fees = newFees;
		dataCell.studs[index].fines = newFines;
		cout << "Student information updated successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}
void manageFees(DataCell& department, string studentID, float paymentAmount)
{
	int index = searchStudentByID(department, studentID);
	if (index != -1) {
		department.studs[index].fees = department.studs[index].fees - paymentAmount;
		cout << "Fees managed successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}

void manageFines(DataCell& department, string studentID, float fineAmount)
{
	int index = searchStudentByID(department, studentID);
	if (index != -1) {
		department.studs[index].fines = department.studs[index].fines - fineAmount;
		cout << "Fines managed successfully." << endl;
	}
	else {
		cout << "Student not found." << endl;
	}
}

void Studentdetails(DataCell& deparment, int index)
{
	cout << "------- Student Details -------";
	cout << "Enter Student admission date";
	getline(cin, deparment.studs[index].enroll.add_date);
	cout << "Enter Student Program to Study";
	getline(cin, deparment.studs[index].enroll.pro_to_studu);
	cout << "Enter Student Degree";
	getline(cin, deparment.studs[index].enroll.degree);


}

void generateTranscript(DataCell department) {

}

void performTask(DataCell& dataCell)
{
	dataCell.numStudents = 0;
	int choice;

	do {
		system("cls");

		Menu();
		cin >> choice;

		switch (choice)
		{
		case 1: {
			// Adding a new student
			Student newStudent;
			cout << "Enter student ID: ";
			cin >> newStudent.ID;
			cout << "Enter student name: ";
			cin.ignore();
			getline(cin, newStudent.name);
			cout << "enter student contact ";
			getline(cin, newStudent.contact);
			cout << "Enter student GPA: ";
			cin >> newStudent.gpa;
			cout << "Enter student fees: ";
			cin >> newStudent.fees;
			cout << "Enter student fines: ";
			cin >> newStudent.fines;
			addStudent(dataCell, newStudent);
			break;
		}
		case 2: {
			// Updating student information
			string studentID;
			string contact;
			float newGPA, newFees, newFines;
			cout << "Enter student ID to update: ";
			cin >> studentID;
			cout << "enter student new Contact number: ";
			cin >> contact;
			cout << "Enter new GPA: ";
			cin >> newGPA;
			cout << "Enter new fees: ";
			cin >> newFees;
			cout << "Enter new fines: ";
			cin >> newFines;
			updateStudentInfo(dataCell, studentID, contact, newGPA, newFees, newFines);
			break;
		}
		case 3: {
			// Displaying student information
			string studentID;
			cout << "Enter student ID to display: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				displayStudentInfo(dataCell.studs[index]);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		}
		case 4: {
			// Displaying all students
			displayAllStudents(dataCell);
			break;
		}
		case 5: {
			// Searching for a student by ID
			string studentID;
			cout << "Enter student ID to search: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				cout << "Student found at index " << index << "." << endl;
				displayStudentInfo(dataCell.studs[index]);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		}
		case 6: {
			// Sorting students by ID
			sortStudentsByID(dataCell);
			cout << "Students sorted by ID." << endl;
			break;
		}
		case 7: {
			// Managing student fees
			string studentID;
			float paymentAmount;
			cout << "Enter student ID to manage fees: ";
			cin >> studentID;
			cout << "Enter payment amount: ";
			cin >> paymentAmount;
			manageFees(dataCell, studentID, paymentAmount);

			break;
		}
		case 8: {
			// Managing student fines
			string studentID;
			float fineAmount;
			cout << "Enter student ID to manage fines: ";
			cin >> studentID;
			cout << "Enter fine amount: ";
			cin >> fineAmount;
			manageFines(dataCell, studentID, fineAmount);
			break;
		}
		case 9: {
			// couse addition for the student
			string studentID;
			cout << "Enter student ID to enter course: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				course_prereq(dataCell, index);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		}
		case 10: {
			// course displayed of the student by ID
			string studentID;
			cout << "Enter student ID to display: ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1) {
				coursedisplay(dataCell, index);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		}
		case 11: {
			// student previous details and dates 
			string studentID;
			cout << "Enter student ID to enter student : ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1)
			{
				Studentdetails(dataCell, index);
			}
			else {
				cout << "Student not found." << endl;
			}

			break;
		}

		case 12: {
			// Generating student transcript
			generateTranscript(dataCell);
			break;
		}
		case 13: {
			cout << "Exiting program. Goodbye!" << endl;
			break;
		}
		default:
			cout << "Invalid choice. Please enter a valid option." << endl;
		}

		cout << "\nPress Enter to continue...";
		cin.ignore();
		cin.get();
	} while (choice != 13);
}

void main()
{
	const int MAX_USERS = 100;
	User users[MAX_USERS];
	int numUsers = 0;

	// Allow multiple users
	char newUserOption;
	do {
		system("cls");
		cout << "Are you a new user? (y/n): ";
		cin >> newUserOption;

		if (newUserOption == 'y' || newUserOption == 'Y') {
			cout << "Enter username: ";
			cin >> users[numUsers].username;

			cout << "Enter password: ";
			cin >> users[numUsers].password;

			numUsers++;
		}
	} while (newUserOption == 'y' || newUserOption == 'Y');

	// Login
	string enteredUsername, enteredPassword;
	cout << "Enter username: ";
	cin >> enteredUsername;

	cout << "Enter password: ";
	cin >> enteredPassword;

	// Authenticationx
	AuthenticatedUser authenticatedUser = authenticateUser(enteredUsername, enteredPassword, users, numUsers);
	if (authenticatedUser.index != -1) {
		cout << "User authenticated. Proceeding with the program." << endl;

		DataCell dataCell;
		// Program after authentication
		viewUserProfile(authenticatedUser.role);
		system("pause");
		performTask(dataCell);
	}
	else {
		cout << "Authentication failed. Exiting program." << endl;
	}
	system("pause");

}
