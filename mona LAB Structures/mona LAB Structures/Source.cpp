#include<iostream>
using namespace std;
struct student {
	char Stuid[10];
	char StuName[10];
	float StuCGPA;
};
void main()
{
	int s;
	cout << "enter the size of the array";
	cin >> s;
	student *sdata = new student[s];
	int min = sdata[0].StuCGPA;
	int max=0;
	int indexmx=0;
	int indexmi = 0;
	for (int i = 0;i<s;i++)
	{

		cout << "enter student id" << i + 1<<" ";
		cin >> sdata[i].Stuid;
		cout << "enter student name" << i + 1 << " ";
		cin >> sdata[i].StuName;
		cout << "enter student CGPA" << i + 1 << " ";
		cin >> sdata[i].StuCGPA;
	}
	for (int i = 0; i < s; i++)
	{
		if (sdata[i].StuCGPA > max)
		{
			indexmx = i;
			max = sdata[i].StuCGPA;
		}
		else {
			indexmi = i;
			min = sdata[i].StuCGPA;
		}
	}
	cout << "minimum CGPA is " << min << "of student " << sdata[indexmi].StuName<<endl;
	cout << "maximum CGPA is " << max << "of student " << sdata[indexmx].StuName<<endl;



	system("pause");
}