#include<iostream>
using namespace std;
void main()
{
	/*int emp[20];
    int empsal[20];
    int max = 0;
    int index = 0;

    cout << "Enter employee numbers and salaries:" << endl;

    for (int i = 0; i < 20; i++)
	{
        cout << "Enter employee number: "<<i;
		cin >> emp[i];
        
        for (int j = 0; j < i; j++) 
		{
            if (emp[i] == emp[j]) 
			{
                cout << "Invalid employee number. Enter again of employee: "<<i;
                cin >> emp[i];
                j = -1;
            }
        }
        cout << "Enter the salary of the employee: "<<i;
        cin >> empsal[i];
        if (empsal[i] > max) {
            max = empsal[i];
            index = i;
        }
    }
    cout << "The employee number " << emp[index] << " has the max salary of " << max << endl;*/

	int branchmark1 [20];
	int branchmark2  [20];
	int branchmark3 [20];
	float avg1 = 0;
	float avg2 = 0;
	float avg3 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int max1=0, max2=0, max3=0;

	for (int i = 0; i < 20; i++)
	{
		cout << "enter the marks of the student " << i<<" ";
		cin >> branchmark1[i];
		sum1 += branchmark1[i];
		if (branchmark1[i] > max1)
		{
			max1 = branchmark1[i];
		}
	}
	for (int i = 0; i < 20; i++)
	{
		cout << "enter the marks of the student " << i << " ";
		cin >> branchmark2[i];
		sum1 += branchmark2[i];
		if (branchmark2[i] > max2)
		{
			max2 = branchmark2[i];
		}
	}
	for (int i = 0; i < 20; i++)
	{
		cout << "enter the marks of the student " << i << " ";
		cin >> branchmark3[i];
		sum1 += branchmark3[i];
		if (branchmark3[i] > max3)
		{
			max3 = branchmark3[i];
		}
	}
	avg1 = (float)sum1 / 20;
	avg2 = (float)sum2 / 20;
	avg3 = (float)sum3 / 20;

	
	if (max1 > max2 && max1 > max3)
	{
		cout << "branch 1 has the max marks of " << max1;
	}
	if (max2 > max3 && max2 > max1)
	{
		cout << "branch 2 has the max marks of " << max2;
	}
	if (max3 > max2 && max3 > max1)
	{
		cout << "branch 3 has the max marks of " << max3;
	}
	cout << "average marks of branch 1 is " << avg1;
	cout << "average marks of branch 2 is " << avg2;
	cout << "average marks of branch 3 is " << avg3;






































	system("pause");
}