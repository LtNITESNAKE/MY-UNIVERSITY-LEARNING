#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

const int courses = 2;
const int ALLstudents = 100;

struct course
{
	string course_names=" ";
	string course_codes;
	int credit_hours=0;
	char grades = '\0';
	bool prerequisite_completed;
	string prerequisite_course;
	float midTermMarks = 0.0;
	float labMarks = 0.0;
	float finalExamMarks = 0.0;
};

struct enrollment
{
	string add_date;
	string grad_date = "";
	float fines = 0;
	string pro_to_studu;
	string degree;
	int fscmarks=0, matmarks=0;
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
	float gpa=0;
	float cgpa=0;
	float fees=0;
	float fines=0;
	enrollment enroll;
	course Course[courses];
};

struct universitycourse {
	string course_names;
	string course_codes;
	int credit_hours=0;
	int semester=0;
	string prerequisite_course;
	float passingMarks = 50.0;

	void initializeCourse() {
		cout << "Enter Course Name: ";
		cin.ignore();
		getline(cin, course_names);
		cout << "Enter Course Code: ";
		getline(cin, course_codes);
		cout << "Enter Credit Hours: ";
		cin >> credit_hours;
		cout << "Enter Semester: ";
		cin >> semester;
		cout << "Enter Prerequisite Course (if any): ";
		cin.ignore();
		getline(cin, prerequisite_course);
	}
};

struct DataCell {
	Student* studs;
	int numStudents=0;
	int maxStudents=0;
	universitycourse UnivCourses[courses];
};

struct AuthenticatedUser {
	int index=0;
	string role;
};


DataCell inDataCell()
{
	DataCell dataCell;
	dataCell.studs = new Student[ALLstudents];
	dataCell.numStudents = 0;
	dataCell.maxStudents = ALLstudents;
	return dataCell;
}
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
int getStringSize(const string& str) {
	int count = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		++count;
	}

	return count;
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
		cin >> newStudent.Course[index].grades;

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
		newStudent.Course[index].prerequisite_completed = (newStudent.Course[index].grades != 'F' && newStudent.Course[index].grades != 'f');

		// Add the current course information to the student at the given index
		dataCell.studs[index].Course[i] = newStudent.Course[index];
	}

	cout << "Student added successfully." << endl;
}
void updateStudentInfo(DataCell& department, int index)
{
	int choice;
	do {
		cout << "What information would you like to update?" << endl;
		cout << "1. GPA" << endl;
		cout << "2. Contact Number" << endl;
		cout << "3. Fee" << endl;
		cout << "4. Email " << endl;
		cout << "5. Address " << endl;
		cout << "6. Exit Updating Section " << endl;
		cout << "Enter your choice: ";

		cin >> choice;

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
	} while (choice != 6);
}
void displayUniversityCourses(DataCell& dataCell) {
	cout << "University Courses:" << endl;
	for (int i = 0; i < courses; ++i) {
		cout << "Course Name: " << dataCell.UnivCourses[i].course_names << endl;
		cout << "Course Code: " << dataCell.UnivCourses[i].course_codes << endl;
		cout << "Credit Hours: " << dataCell.UnivCourses[i].credit_hours << endl;
		cout << "Prerequisite Course: " << dataCell.UnivCourses[i].prerequisite_course << endl;
		cout << "-----------------" << endl;
	}
}
bool canEnroll(Student& student, universitycourse& course) {
	for (int i = 0; i < courses; ++i) {
		if (course.course_codes == student.Course[i].prerequisite_course) {
			return student.Course[i].prerequisite_completed;
		}
	}
	return true;
}
void calculateGrades(DataCell& deparment, int& index,int totalMidTermMarks, int totalLabMarks, int totalFinalExamMarks) {
	int total = totalFinalExamMarks + totalLabMarks + totalMidTermMarks;
	int obtained = deparment.studs[index].Course[index].finalExamMarks + deparment.studs[index].Course[index].midTermMarks + deparment.studs[index].Course[index].labMarks;
	float percentage = ((float)obtained / total) * 100;
	if (percentage >= 89 && percentage <= 100)
	{
		deparment.studs[index].Course[index].grades = 'A';
}
	else if (percentage >= 79 && percentage <89)
	{
		deparment.studs[index].Course[index].grades = 'B';
	}
	else if (percentage >= 69 && percentage <79)
	{
		deparment.studs[index].Course[index].grades = 'c';
	}
	else if (percentage >= 50 && percentage <69)
	{
		deparment.studs[index].Course[index].grades = 'D';
	}
	else if ( percentage <50)
	{
		deparment.studs[index].Course[index].grades = 'F';
	}

}
void enrollInUniversityCourse(DataCell& dataCell, Student& student) {
	displayUniversityCourses(dataCell);

	cout << "Enter the course code to enroll: ";
	string courseCode;
	cin >> courseCode;

	for (int i = 0; i < courses; ++i) {
		if (courseCode == dataCell.UnivCourses[i].course_codes) {
			// Check prerequisites
			if (canEnroll(student, dataCell.UnivCourses[i])) {
				cout << "Enrolled in " << dataCell.UnivCourses[i].course_names << endl;
				student.Course[i].course_names = dataCell.UnivCourses[i].course_names;
				student.Course[i].course_codes = dataCell.UnivCourses[i].course_codes;
				student.Course[i].credit_hours = dataCell.UnivCourses[i].credit_hours;
				student.Course[i].prerequisite_course = dataCell.UnivCourses[i].prerequisite_course;

				system("cls");
				cout << "entering grading system----"<<endl;

				cout << "enter mid lab and finals marks of " << student.Course[i].prerequisite_course << endl;

				cout << "Enter Total Marks for Mid-Term: ";
				float totalMidTermMarks;
				cin >> totalMidTermMarks;

				cout << "Enter Obtained Marks for Mid-Term: ";
				cin >> student.Course[i].midTermMarks;

				cout << "Enter Total Marks for Lab: ";
				float totalLabMarks;
				cin >> totalLabMarks;

				cout << "Enter Obtained Marks for Lab: ";
				cin >> student.Course[i].labMarks;

				cout << "Enter Total Marks for Final Exam: ";
				float totalFinalExamMarks;
				cin >> totalFinalExamMarks;

				cout << "Enter Obtained Marks for Final Exam: ";
				cin >> student.Course[i].finalExamMarks;

				// Calculate grades based on obtained marks and total marks
				calculateGrades(dataCell , i, totalMidTermMarks, totalLabMarks, totalFinalExamMarks);

				// Check prerequisite completion
				if (student.Course[i].grades == 'F' || student.Course[i].grades == 'f') {
					cout << "You can't enroll in " << dataCell.studs[i].Course[i].course_names
						<< " because you have failed this course previously." << endl;
					dataCell.studs[i].Course[i].prerequisite_completed = false;
					return;
				}

				cout << "Enrolled in " << dataCell.UnivCourses[i].course_names << endl;
			}
		}
	}
	
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
void addCourseDetails(DataCell& dataCell, int index) {
	cout << "Enter course details for student " << dataCell.studs[index].ID << ":" << endl;
	for (int i = 0; i < courses; ++i) {
		cout << "Enter grade for course " << i + 1 << ": ";
		cin >> dataCell.studs[index].Course[i].grades;
	}
}
void calculateGPA(Student& student) {
	float totalCreditHours = 0;
	float totalGradePoints = 0;

	for (int i = 0; i < courses; i++) {
		int creditHours = student.Course[i].credit_hours;
		totalCreditHours += creditHours;
		int gradePoints = 0;

		// Assuming you want to take GPA from the user
		cout << "Enter GPA for course " << i + 1 << ": ";
		cin >> gradePoints;

		totalGradePoints += (gradePoints * creditHours);
	}

	student.gpa = (totalGradePoints / totalCreditHours);
}
void calculateCGPA(DataCell& department, int index) {
	int totalCreditHours = 0;
	int totalGradePoints = 0;

	for (int i = 0; i < courses; i++) {
		int creditHours = department.studs[index].Course[i].credit_hours;
		totalCreditHours += creditHours;
		int gradePoints = department.studs[index].Course[i].grades;

		totalGradePoints += (gradePoints * creditHours);
	}

	department.studs[index].cgpa = (float)totalGradePoints / totalCreditHours;
}
void Studentdetails(DataCell& department, int index)
{
	cout << "------- Student Details -------" << endl;

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
	department.studs[index].cgpa = 0;
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
	cout << "9. Enrollment of student " << endl;
	cout << "10. Course Display By ID" << endl;
	cout << "11. Student Details Add" << endl;
	cout << "12. Generate Transcript" << endl;
	cout << "13. Manage Course GPA" << endl;
	cout << "14. Manage CGPA " << endl;
	cout << "15. Add University Courses" << endl;
	cout << "16. EXIT" << endl;
	cout << "Enter your choice: ";
}
void Menuforuser() {
	cout << "DataCell Department Menu:" << endl;
	cout << "3. Display Student Information" << endl;
	cout << "4. Display All Students" << endl;
	cout << "5. Search Student by ID" << endl;
	cout << "6. Sort Students by ID" << endl;
	cout << "10. Course Display By ID" << endl;
	cout << "12. Generate Transcript" << endl;
	cout << "16. EXIT" << endl;
	cout << "Enter your choice: ";
}
void addUniversityCourses(DataCell& dataCell) {
	for (int i = 0; i < courses; ++i) {
		cout << "Enter details for University Course " << i + 1 << endl;
		dataCell.UnivCourses[i].initializeCourse();
	}
}
void displayStudentInfoWithCourses(DataCell& department, int index) {
	cout << "\nStudent Information:" << endl;
	cout << "Student ID: " << department.studs[index].ID << endl;
	cout << "Name: " << department.studs[index].name << endl;
	cout << "Contact no: " << department.studs[index].contact << endl;
	cout << "GPA: " << department.studs[index].gpa << endl;
	cout << "Fees: RS" << department.studs[index].fees << endl;
	cout << "Fines: RS" << department.studs[index].fines << endl;

	// Display course details
	cout << "\nCourse Details:" << endl;
	for (int i = 0; i < courses; i++) {
		cout << "-----------------" << endl;
		cout << "Course Name: " << department.studs[index].Course[i].course_names << endl;
		cout << "Course Code: " << department.studs[index].Course[i].course_codes << endl;
		cout << "Credit Hours: " << department.studs[index].Course[i].credit_hours << endl;
		cout << "Grade: " << department.studs[index].Course[i].grades << endl;

		// Display prerequisite information
		cout << "Prerequisite Completed: ";
		if (department.studs[index].Course[i].prerequisite_completed) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}

		// Display prerequisite course if available
		if (!department.studs[index].Course[i].prerequisite_course.empty()) {
			cout << " - Prerequisite Course: " << department.studs[index].Course[i].prerequisite_course;
		}
		cout << endl;
	}
	cout << "-----------------" << endl;
}
void coursedisplay(DataCell& datacell, int index) {
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
		cout << "Prerequisite Completed: ";
		if (datacell.studs[index].Course[i].prerequisite_completed) {
			cout << "Yes";
		}
		else {
			cout << "No";

			// Iterate over characters to check if not empty
			bool hasPrerequisite = false;
			for (int j = 0; datacell.studs[index].Course[i].prerequisite_course[j] != '\0'; j++) {
				hasPrerequisite = true;
				break;
			}

			if (hasPrerequisite) {
				cout << " - Prerequisite Course can't be studied : " << datacell.studs[index].Course[i].prerequisite_course;
			}
		}
		cout << endl;
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
			displayStudentInfoWithCourses(department, i);
		}
		cout << "-----------------" << endl;
	}

}
void performTask(DataCell& dataCell, bool& exitProgram, string role)
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
				cin >> newStudent.contact;
				while (getStringSize(newStudent.contact) != 11)
				{
					cout << "Invalid Contact Number. Please enter an 11-digit number: ";
					cin >> newStudent.contact;

				}
				cout << "Enter Student admission date (YYYY-MM-DD): ";
				cin >> newStudent.enroll.add_date;
				cout << "Enter Student Program to Study: ";
				cin.ignore();
				getline(cin,newStudent.enroll.pro_to_studu);
				cout << "Enter Student Degree: ";
				getline(cin, newStudent.enroll.degree);
				cout << "Enter Student FSC marks: ";
				cin >> newStudent.enroll.fscmarks;
				cout << "Enter Student Matric marks: ";
				cin >> newStudent.enroll.matmarks;
				cout << "Enter student Fee ";
				cin >> newStudent.fees;
				cout << "Enter student Fines ";
				cin >>newStudent.fines;
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
				updateStudentInfo(dataCell, searchStudentByID(dataCell, studentID));

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
				displayStudentInfoWithCourses(dataCell, index);
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
				displayStudentInfoWithCourses(dataCell, index);
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
				cout << "Enter student ID to manage fees: ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				if (index != -1) {
					manageFees(dataCell, index);
				}
				else {
					cout << "Student not found." << endl;
				}
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
				cout << "Enter student ID to manage fines: ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				if (index != -1) {
					manageFines(dataCell, index);
				}
				else {
					cout << "Student not found." << endl;
				}
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
					enrollInUniversityCourse(dataCell, dataCell.studs[index]);
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
				coursedisplay(dataCell, index);
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
					addCourseDetails(dataCell, index);
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
				generateTranscript(dataCell, index);
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
				cout << "Enter student ID to calculate GPA: ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				if (index != -1)
				{
					calculateGPA(dataCell.studs[index]);
					cout << "GPA calculated successfully." << endl;
				}
				else {
					cout << "Student not found." << endl;
				}
			}
			else {
				cout << "Access denied. Only administrators can calculate GPA." << endl;
			}
			break;
		}
		case 14:
		{
			if (role == "Administrator") {
				string studentID;
				cout << "Enter student ID to calculate CGPA: ";
				cin >> studentID;
				int index = searchStudentByID(dataCell, studentID);
				if (index != -1)
				{
					calculateCGPA(dataCell, index);
					cout << "CGPA calculated successfully." << endl;
				}
				else {
					cout << "Student not found." << endl;
				}
			}
			else {
				cout << "Access denied. Only administrators can calculate CGPA." << endl;
			}
			break;
		}
		case 15: {
			// Adding university courses
			if (role == "Administrator") {
				addUniversityCourses(dataCell);
				cout << "University courses added successfully." << endl;
			}
			else {
				cout << "Access denied. Only administrators can add university courses." << endl;
			}
			break;
		}
		case 16: {
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
	} while (choice != 16);
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



