#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
const int courses = 2;
const int ALLstudents = 100;

struct course
{
	string course_names;
	string course_codes;
	int credit_hours;
	string grades;
	bool prerequisite_completed;
	string prerequisite_course;
};
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
struct User {
	string username;
	string password;
};
struct Student {
	string ID;
	string name;
	string contact;
	float gpa;
	float cgpa;
	float fees;
	float fines;
	enrollment enroll;
	course Course[courses];

};
struct DataCell {
	Student* studs;
	int numStudents;
	int maxStudents;
};
struct AuthenticatedUser {
	int index;
	string role;
};

// datacell dynamic
DataCell inDataCell() 
{
	DataCell dataCell;
	dataCell.studs = new Student[ALLstudents];
	dataCell.numStudents = 0;
	dataCell.maxStudents = ALLstudents;
	return dataCell;
}
// checking user and giving role
AuthenticatedUser authenticateUser(string enteredUsername, string enteredPassword, User users[], int numUsers) 
{
	for (int i = 0; i < numUsers; i++) 
	{
		if (users[i].username == enteredUsername && users[i].password == enteredPassword) 
		{
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

AuthenticatedUser loginUser(User users[], int numUsers) {
	string enteredUsername, enteredPassword;

	cout << "Enter your username: ";
	cin >> enteredUsername;

	cout << "Enter your password: ";
	cin >> enteredPassword;

	return authenticateUser(enteredUsername, enteredPassword, users, numUsers);
}

void viewUserProfile(string role)
{
	cout << "Welcome to the system!" << endl;
	// User profile
	cout << "User Profile:\n";
	cout << "-----------------------\n";
	cout << "Role: " << role << endl;
	cout << "------------------------\n";
}
// linear search
int searchStudentByID(DataCell& department, string studentID)
{
	for (int i = 0; i < department.numStudents; i++)
	{
		if (department.studs[i].ID == studentID)
		{
			return i;
		}
	}
	return -1;
}
// bulbble sort
void sortStudentsByID(DataCell department)
{

	for (int i = 0; i < department.numStudents - 1; i++)
	{
		for (int j = 0; j < department.numStudents - i - 1; j++)
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
	cout << "10. Course Display By ID" << endl;
	cout << "11. Student Details Add" << endl;
	cout << "12. Generate Transcript" << endl;
	cout << "13. Manage Course GPA" << endl;
	cout << "14. EXIT" << endl;
	cout << "Enter your choice: ";
}

void course_prereq(DataCell& dataCell, int index)
{
	for (int i = 0; i < courses; i++)
	{
		// Create a new Student object for each course
		Student newStudent;  
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

void addStudent(DataCell& dataCell, const Student& newStudent)
{
	// Check if the student with the same ID already exists
	int existingIndex = searchStudentByID(dataCell, newStudent.ID);

	if (existingIndex != -1) 
	{
		cout << "Student with ID " << newStudent.ID << " already exists." << endl;
		dataCell.studs[existingIndex] = newStudent; 
	}
	else {
		// Check if there's enough space, and if not, increase size
		if (dataCell.numStudents >= dataCell.maxStudents) 
		{
			int newSize = dataCell.maxStudents + 10;
			Student* newStudents = new Student[newSize];
			for (int i = 0; i < dataCell.numStudents; i++)
			{
				newStudents[i] = dataCell.studs[i];
			}
			newStudents[dataCell.numStudents++] = newStudent;
			// Update the DataCell with the new array and size
			dataCell.studs = newStudents;
			dataCell.maxStudents = newSize;
			cout << "Student added successfully." << endl;
		}
		else {
			// Enough space, add the new student
			dataCell.studs[dataCell.numStudents++] = newStudent;
			cout << "Student added successfully." << endl;
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

void displayStudentInfofortranscript(Student student)
{
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << student.ID << endl;
	cout << "Name: " << student.name << endl;
	cout << "GPA: " << student.gpa << endl;
}

void coursedisplay(DataCell&datacell,int index)
{
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << datacell.studs[index].ID << endl;
	cout << "Name: " << datacell.studs[index].name << endl;
	cout << "GPA: " << datacell.studs[index].gpa << endl;

	// Display course details
	cout << "\nCourse Details:" << endl;
	for (int i = 0; i < courses; i++) 
	{
		cout << "-----------------" << endl;
		cout << "Course Name: " << datacell.studs[index].Course[i].course_names << endl;
		cout << "Course Code: " << datacell.studs[index].Course[i].course_codes << endl;
		cout << "Credit Hours: " << datacell.studs[index].Course[i].credit_hours << endl;
		cout << "Grade: " << datacell.studs[index].Course[i].grades << endl;

		// Display prerequisite information
		if (datacell.studs[index].Course[i].prerequisite_completed)
		{
			cout << "Prerequisite Completed: Yes" << endl;
		}
		else 
		{
			cout << "Prerequisite Completed: No";
			if (!datacell.studs[index].Course[i].prerequisite_course.empty())
			{
				cout << " - Prerequisite Course can't be studied : " << datacell.studs[index].Course[i].prerequisite_course;
			}
			cout << endl;
		}
	}
	cout << "-----------------" << endl;
}

void displayAllStudents(DataCell& department)
{
	if (department.numStudents== 0)
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

void updateStudentInfo(DataCell& department, int index)
{
	cout << "What information would you like to update?" << endl;
	cout << "1. GPA" << endl;
	cout << "2. Contact Number" << endl;
	cout << "3. Fee" << endl;
	cout << "4. Email " << endl;
	cout << "5. Address " << endl;
	cout << "6. Exit Updating Section " << endl;
	cout << "Enter your choice: ";

	int choice;
	cin >> choice;
	do {
		switch (choice)
		{
		case 1:
			cout << "Enter new GPA: ";
			cin >> department.studs[index].gpa;
			break;
		case 2:
			cout << "Enter new Contact Number: ";
			cin >> department.studs[index].contact;
			break;
		case 3:
			cout << "Enter new Fee: ";
			cin >> department.studs[index].fees;
			break;
		case 4:
			cout << "Enter new Email: ";
			cin >> department.studs[index].enroll.Email;
			break;
		case 5:
			cout << "Enter new Address: ";
			cin >> department.studs[index].enroll.Address;
			break;
		default:
			cout << "Invalid choice." << endl;
		}
	} while (choice <= 6);
}

void manageFees(DataCell& department, int index)
{
	float paymentAmount;
	cout << "Current fees: RS" << department.studs[index].fees << endl;
	cout << "Enter payment amount: ";
	cin >> paymentAmount;
	department.studs[index].fees -= paymentAmount;
	cout << "Fees managed successfully. Remaining fees: RS" << department.studs[index].fees << endl;
}

void manageFines(DataCell& department, int index)
{
	float fineAmount;
	cout << "Current fines: RS" << department.studs[index].fines << endl;
	cout << "Enter fine amount: ";
	cin >> fineAmount;
	department.studs[index].fines -= fineAmount;
	cout << "Fines managed successfully. Remaining fines: RS" << department.studs[index].fines << endl;
}
void calculateCGPA(DataCell& department, int index)
{
	float totalCreditHours = 0;
	float totalGradePoints = 0;

	for (int i = 0; i < courses; i++)
	{
		float creditHours = department.studs[index].Course[i].credit_hours;
		totalCreditHours += creditHours;
		float gradePoints = 0;
		if (department.studs[index].Course[i].grades == "A" || department.studs[index].Course[i].grades == "a")
			gradePoints = 4.0;
		else if (department.studs[index].Course[i].grades == "B" || department.studs[index].Course[i].grades == "b")
			gradePoints = 3.0;
		else if (department.studs[index].Course[i].grades == "C" || department.studs[index].Course[i].grades == "c")
			gradePoints = 2.5;
		else if (department.studs[index].Course[i].grades == "D" || department.studs[index].Course[i].grades == "d")
			gradePoints = 2.0;
		else if (department.studs[index].Course[i].grades == "F" || department.studs[index].Course[i].grades == "f")
			gradePoints = 1.5;


		totalGradePoints += (gradePoints * creditHours);
	}

	department.studs[index].cgpa = totalGradePoints / totalCreditHours;
}

int getStringSize(const string& str)
{
	int count = 0;
	for (const char* charPtr = str.c_str(); *charPtr != '\0'; ++charPtr)
	{
		++count;
	}
	return count;
}

void Studentdetails(DataCell& department, int index)
{
	cout << "------- Student Details -------" << endl;

	cout << "Enter Student CNIC (13 digits): ";
	cin >> department.studs[index].enroll.CNIC;
	while (getStringSize(department.studs[index].enroll.CNIC) != 13)
	{
		cout << "Invalid CNIC. Please enter a 13-digit CNIC: ";
		cin >> department.studs[index].enroll.CNIC;
	
	}
	cout << "Enter Student Email: ";
	cin.ignore();
	getline(cin, department.studs[index].enroll.Email);
	cout << "Enter Student Date of Birth: ";
	getline(cin, department.studs[index].enroll.D_O_B);
	cout << "Enter Student Address: ";
	cin.ignore();
	getline(cin, department.studs[index].enroll.Address);
	char choice;
	cout << "is student graduated enter (y/n)";
	cin >> choice;
	if (choice != 'Y'&&choice != 'y')
	{
	}
	else {
		cout << "Graduation Date: ";
		cin.ignore();
		getline(cin, department.studs[index].enroll.grad_date);
	}

}

void generateTranscript(DataCell& department, int index)
{
	cout << "------- Transcript for Student ID: " << department.studs[index].ID << " -------" << endl;
	cout << "Name: " << department.studs[index].name << endl;
	cout << "Admission Date: " << department.studs[index].enroll.add_date << endl;

	cout << "------- Courses -------" << endl;
	for (int i = 0; i < courses; i++)
	{
		cout << "Course " << i + 1 << ": " << department.studs[index].Course[i].course_names << endl;
		cout << "Code: " << department.studs[index].Course[i].course_codes << endl;
		cout << "Credit Hours: " << department.studs[index].Course[i].credit_hours << endl;
		cout << "Grade: " << department.studs[index].Course[i].grades << endl;
		cout << "Prerequisite Course: " << department.studs[index].Course[i].prerequisite_course << endl;
		cout << "Prerequisite Completed: " << (department.studs[index].Course[i].prerequisite_completed ? "Yes" : "No") << endl;
		cout << "------------------------" << endl;
	}

	cout << "CGPA: " << department.studs[index].cgpa << endl;
}


void Menuforuser() {
	cout << "DataCell Department Menu:" << endl;
	cout << "3. Display Student Information" << endl;
	cout << "4. Display All Students" << endl;
	cout << "5. Search Student by ID" << endl;
	cout << "6. Sort Students by ID" << endl;
	cout << "10. Course Display By ID " << endl;
	cout << "12.Generate Transcript " << endl;
	cout << "13. Exit" << endl;
	cout << "Enter your choice: ";
}

void performTask(DataCell& dataCell, bool& exitProgram,string role)
{
	dataCell.numStudents = 0;
	int choice;
	do {
		system("cls");
		if (role == "Administrator") {
			Menu();
		}
		else {
			Menuforuser();
		}
		cin >> choice;

		switch (choice)
		{
		case 1: {
			// Adding a new student
			if (role == "Administrator")
			{
				Student newStudent;
				cout << "Enter student ID: ";
				cin >> newStudent.ID;
				int index = searchStudentByID(dataCell, newStudent.ID);
				cout << "Enter student name: ";
				cin.ignore();
				getline(cin, newStudent.name);
				cout << "Enter Student Contact Number (11 digits): ";
				cin >> dataCell.studs[index].contact;
				while (getStringSize(dataCell.studs[index].contact) != 11)
				{
					cout << "Invalid Contact Number. Please enter an 11-digit number: ";
					cin >> dataCell.studs[index].contact;
				}
				cout << "Enter Student admission date (YYYY-MM-DD): ";
				cin >> dataCell.studs[index].enroll.add_date;
				cout << "Enter Student Program to Study: ";
				cin.ignore();
				getline(cin, dataCell.studs[index].enroll.pro_to_studu);
				cout << "Enter Student Degree: ";
				getline(cin, dataCell.studs[index].enroll.degree);
				cout << "Enter Student FSC marks: ";
				cin >> dataCell.studs[index].enroll.fscmarks;
				cout << "Enter Student Matric marks: ";
				cin >> dataCell.studs[index].enroll.matmarks;
				addStudent(dataCell, newStudent);

			}
			else {
				cout << "Access denied. Only administrators can add students." << endl;
			}
			break;
		}
		case 2: {
	     // Updating student information
			if (role == "Administrator") {
				string studentID;
				cout << "Enter student ID to update: ";
				cin >> studentID;
				updateStudentInfo(dataCell, searchStudentByID(dataCell,studentID));

			}
			else {
				cout << "Access denied. Only administrators can Update students information." << endl;
			}
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
			if (role == "Administrator") {
				string studentID;
				float paymentAmount;
				cout << "Enter student ID to manage fees: ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				manageFees(dataCell,index);

			}
			else {
				cout << "Access denied. Only administrators can manage students fee." << endl;
			}
			break;
		}
		case 8: {
			// Managing student fines
			if (role == "Administrator") 
			{
				string studentID;
				float fineAmount;
				cout << "Enter student ID to manage fines: ";
				cin >> studentID;
			
				manageFines(dataCell, searchStudentByID(dataCell, studentID));
			}
			else {
				cout << "Access denied. Only administrators can manage students fine." << endl;
			}
			break;
			}
		case 9: {
			// couse addition for the student
			if (role == "Administrator") {

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
			}
			else {
				cout << "Access denied. Only administrators can add students courses." << endl;
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
				coursedisplay(dataCell,index);
			}
			else {
				cout << "Student not found." << endl;
			}
			break;
		}
		case 11: {
			// student previous details and dates 
			if (role == "Administrator") {
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
			}
			else {
				cout << "Access denied. Only administrators can add students details." << endl;
			}
			break;
			
		}
		case 12: {
			// Generating student transcript
			string studentID;
			cout << "Enter student ID to enter student : ";
			cin >> studentID;
			int index = searchStudentByID(dataCell, studentID);
			if (index != -1)
			{
				generateTranscript(dataCell,index);
			}
			else {
				cout << "Student not found." << endl;
			}

			break;
		}
		case 13:
		{
			if (role == "Administrator") {
				string studentID;
				cout << "Enter student ID to enter student : ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				if (index != -1)
				{
					calculateCGPA(dataCell, index);
				}
				else {
					cout << "Student not found." << endl;
				}
				
			}
			else {
				cout << "Acess denied, only admin can  calculate the GPA and CGPA of the student";
			}
			break;

		}
		case 14:  {
			char choice;
			cout << " Press E to exit \n Press R to return back to login screen  ";
			cin >> choice;
			if (choice != 'r' && choice != 'R')
			{
				cout << "Exiting program. Goodbye!" << endl;
				exitProgram = false;
			}
			else {
				cout << "Returning back to login Screen";
				exitProgram = true;
			}
			break;
		}
		default:
			cout << "Invalid choice. Please enter a valid option." << endl;
		}

				cout << "\nPress Enter to continue...";
				cin.ignore();
				cin.get();
		}while (choice != 14 );
	} 

void main() 
	{
		const int MAX_USERS = 2;
		User users[MAX_USERS];
		int numUsers = 0;
		DataCell dataCell = inDataCell();
		bool exitProgram = false;

		// Allow multiple users
		char newUserOption;
		do {
			cout << "---- User Credentials ----\n";
			cout << "Are you a user or administrator? (a/u): ";
			cin >> newUserOption;

			if (newUserOption == 'a' || newUserOption == 'A') {
				cout << "Enter your username and password\n";
				cout << "Enter username: ";
				cin >> users[numUsers].username;
				cout << "Enter password: ";
				cin >> users[numUsers].password;
				numUsers++;
			}
			else if (newUserOption == 'U' || newUserOption == 'u') {
				cout << "--- USER WELCOME --- \n ";
				cout << "Enter password: ";
				cin >> users[numUsers].password;
			}
			system("cls");
			cout << "Are you a new User (y/n)? ";
			cin >> newUserOption;
		} while (newUserOption == 'Y' || newUserOption == 'y');

		AuthenticatedUser authenticatedUser;

		do {
			// Login
			system("cls");
			cout << "----------LOGIN---------\n";
			cout << "Enter your credentials" << endl;

			authenticatedUser = loginUser(users, numUsers);

			if (authenticatedUser.index != -1) {
				system("cls");
				viewUserProfile(authenticatedUser.role);
				system("cls");
				performTask(dataCell, exitProgram, authenticatedUser.role);
			}
			else {
				cout << "Authentication failed." << endl;
				system("cls");
				viewUserProfile(authenticatedUser.role);
				cout << "You can only view information." << endl;
				system("cls");
				Menuforuser();
				performTask(dataCell, exitProgram, "User");
			}
		} while (exitProgram);
	}

