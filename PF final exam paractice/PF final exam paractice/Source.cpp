#include<iostream>
#include<vector>
#include "string"
using namespace std;
string reverse(string s)
{
	string rev = "";
	for (int i = s.length() - 1; i >= 0; i--)
		rev = rev + s[i];
	return rev;
}
enum Color {
	RED,
	GREEN,
	BLUE
};
enum grade {
	A,B,C,D,E,F
};
struct Book {
	 int id;
	char title[30];
	char author[20];
	int price;

};
bool idcheck(Book book[], int index,int ch)
{
	for (int i = 0; i < index; i++)
	{
		if (ch == book[i].id)
		{
			return false;
		}

	}
	return true ;

}
bool hasalphabhets(char ch[])
{
	for (int i = 0; i < 20; i++)
	{
		if (ch[i] >= 'A'&&ch[i] >= 'Z' || (ch[i] >= 'a'&&ch[i] >= 'z') || ch[i] == ' ')
		{
			return true;
		}

	}

	return false;
}
void expensive(Book book[],int booksize, int & index)
{
	int max;
	max = book[0].price;
	index = 0;
	for (int i = 1; i < booksize; i++)
	{
		if (max < book[i].price)
			index = i;


	}
}
void input_char_array(char ch[])
{
	int i = 0;
	char c;
	while (true)
	{
		ch[i] = getchar();
		if (ch[i] == '\n')
		{
			ch[i] = '\0';
			return;
		}
		i++;
	}
}
bool all(char ch[])
{
	int i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 'A'&&ch[i] <= 'Z')
			i++;
		else if (ch[i] >= 'a'&&ch[i] <= 'z')
			i++;
		else
			return false;
	}
	return true;
}
struct Student {
	string name;
	grade grades;
};
grade convertToGrade(const string& gradeStr) {
	if (gradeStr == "A") return grade::A;
	else if (gradeStr == "B") return grade::B;
	else if (gradeStr == "C") return grade::C;
	else if (gradeStr == "D") return grade::D;
	else return grade::F;
}
void main()
{
	//int val;
	//cin >> val;
	//int a[20];
	//int j = 0;
	//int sum = 0;
	//for (int i = 0; i < 20; i++)
	//{
	//		a[i] = val +j;
	//		sum += a[i];
	//		//j += 5;
	//		j += 50;

	//}
	//int i = 0;
	//	while(i < 20)
	//	{
	//		cout << a[i] << " "; i++;
	//     }
	//	cout << "sum" << sum;

	/*int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 4; i >= 0; i--)
	{
		cout << a[i]<<" ";
	}*/

	//int sum = 0;
	//int a[5];
	//int e=0; int o = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//cin >> a[i];
	//if (a[i] % 2 == 0)
	//	e++;
	//else o++;
	//
	////if (a[i] % 2 == 0 && a[i]>0)
	//	//sum += a[i];
	//}
	//cout << e << "\n\n";
	//cout << o << "\n";

	//int a[10];
	//int p=0;
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> a[i];
	//	if (a[i] < 45)
	//		p++;
	//}
	//cout << endl;
	//cout << p;

	/*int a[5];
	int b[5];
	for (int i = 0,j=4; i < 5; i++,j--)
	{
		cin >> a[i];
		b[j] = a[i];

	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << b[i]<<" ";
	}*/
	/*int a[5];
	int b[5];
	int s = 0, s1 = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i]; s += a[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i]; s1 += b[i];
	}
	if (s == s1)
		cout << "equal";
	else cout << "not equal";*/

	/*int a[5];
	int b[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i]; 
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i]; 
	}
	bool t = true;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] != b[i])
		{
			t = false;
			break;
		}
	}
	if (t)
		cout << "equal";
	else cout << "not equal";
*/

//char ch[20];
//cin >> ch;
//int n = 0, u = 0, l = 0;
//for (int i = 0; i < 20; i++)
//{
//	if (ch[i] >= '0' && ch[i] <= '9')
//	{
//		n++;
//	}
//	else if (ch[i] >= 'A' && ch[i] <= 'Z')
//	{
//		u++;
//	}
//	else if (ch[i] >= 'a' && ch[i] <= 'z')
//	{
//		l++;
//	}
//}
//cout << n << endl;
//cout << u << endl;
//cout << l << endl;

//char ch[14];
//cin >> ch;
//while (true)
//{
//	int i;
//	
//		i = 0;
//		while (ch[i] != '\0')
//		{
//			i++;
//		}
//		int a = 0;       int s = 0;
//		for (int j = 0, q = 10; j < 4 && q < 14;j++,q++)
//		{
//				if (ch[j] >= '0'&&ch[j] <= '9')
//					if (ch[q] >= '0'&&ch[q] <= '9')
//						a++;
//					
//		}
//		if (ch[4] == '-' && ch[9] == '-')
//		{
//			s++;
//		}
//		int m = 0;
//		for (int n = 5; n<9; )
//		{
//			if (ch[n] == 'A' || ch[n] == 'a')
//				n++; else break;
//			if (ch[n] == 'r' || ch[n] == 'R')
//				n++; else break;
//			if (ch[n] == 'I' || ch[n] == 'i')
//				n++; else break;
//			if (ch[n] == 'D' || ch[n] == 'd')
//				m++; else break;
//						n++;
//		}
//
//		if (a !=4 || i!= 14 || s!=1 || m!=1 )
//		{
//			cout << "INValid arid number , enter agian";
//			cin >> ch;
//		}
//		else {
//			break;
//		}
//}
//cout << "ok";

//char ch[20];
//input_char_array(ch);
//cout << ch << endl;

//char name[10];
//cin >> name;
//while (!all(name))
//{
//	cout << "re-enter invalid name";
//	cin >> name;
//}

//
//char ch[10];
//cin >> ch;
//int i = 0;
//
//while (ch[i] != '\0')
//i++;
//
//cout << i << endl;


//char ch[10];
//cin >> ch;
//int i = 0, a = 0, d = 0;
//while (ch[i] != '\0')
//{
//	i++;
//	if ((ch[i] >= 'A'&&ch[i] <= 'Z')||(ch[i] >= 'a'&&ch[i] <= 'z'))
//		++a;
//	else if (ch[i] >= '0'&&ch[i] <= '9')
//		d++;
//}
//
//cout << "length: " << i << "\nAplaha: " << a << "\nDigits: " << d;



//Book book[5];
//
//
//for (int i = 0; i < 5; i++)
//{
//	cout << "enter book id";
//	cin >> book[i].id;
//	while (!idcheck(book,i,book[i].id))
//	{
//		cout << "invalid id id already exist enter new one";
//		cin >> book[i].id;
//     }
//	cout << "enter book title";
//	cin.ignore();
//	gets_s(book[i].title);
//	cout << "enter book auther name";
//	cin.ignore();
//	gets_s(book[i].author);
//	while (!hasalphabhets(book[i].author)) {
//		cout << "invalid name  enter new one";
//		cin >> book[i].author;
//	}
//	cout << "enter book price";
//	cin >> book[i].price;
//	
//
//} 
//
//int index;
//expensive(book, 5, index);
//
//cout << "Expensive Book Information:" << endl;
//cout << "Book id: " << book[index].id << endl;
//cout << "Book title: " << book[index].title << endl;
//cout << "Book author: " << book[index].author << endl;
//cout << "Book price: " << book[index].price << endl;




	/*cout << "Enter a string ";
	string s;
	cin >> s;
	if (s == reverse(s))
		cout << "paindrome\n";
	else
		cout << "Not palindrome\n";
*/



	// Declare a vector of integers
	std::vector<int> numbers;

	// Add elements to the vector
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);

	// Access elements
	std::cout << "First element: " << numbers[0] << std::endl;

	// Iterate through the vector
	for (int i : numbers) {
		std::cout << i << " ";
	}

	std::vector<Color> colors;
	colors.push_back(RED);
	colors.push_back(GREEN);
	colors.push_back(BLUE);

	for (Color c : colors) {
		switch (c) {
		case RED:
			std::cout << "Red" << std::endl;
			break;
		case GREEN:
			std::cout << "Green" << std::endl;
			break;
		case BLUE:
			std::cout << "Blue" << std::endl;
			break;
		}
	}



	std::vector<Student> students;

	// Get the number of students from the user
	int numStudents;
	std::cout << "Enter the number of students: ";
	std::cin >> numStudents;

	// Get student information from the user
	for (int i = 0; i < numStudents; ++i) {
		Student student;
		std::cout << "Enter name for student " << i + 1 << ": ";
		std::cin >> student.name;

		std::string gradeStr;
		std::cout << "Enter grade (A, B, C, D, F) for " << student.name << ": ";
		std::cin >> gradeStr;

		student.grades = convertToGrade(gradeStr);

		// Add the student to the vector
		students.push_back(student);
	}

	// Display student information
	std::cout << "\nStudent Information:" << std::endl;
	for (const auto& student : students) {
		std::cout << "Name: " << student.name << ", Grade: ";
		switch (student.grades) {
		case A:
			std::cout << "A";
			break;
		case B:
			std::cout << "B";
			break;
		case C:
			std::cout << "C";
			break;
		case D:
			std::cout << "D";
			break;
		case F:
			std::cout << "F";
			break;
		}
		std::cout << std::endl;
	}

















































































































































































































































































































































		system("pause");








}