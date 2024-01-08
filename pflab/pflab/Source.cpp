#include "iostream"
using namespace std;

//passing arrays to functions
// array is passed by reference
void input(int num[], int size)
{
	for (int i = 0; i < size; i++)
	{
	
		cout << "Enter a number ";
		cin >> num[i];
	}
}
void display(int num[], int size)
{
	for (int i = 0; i < size; i++)
	{

		cout << num[i] << " ";
	}
	cout << endl;
}
bool IsExsist(int num[], int size, int val)
{
	for (int i = 0; i < size; i++)
	{
		if (num[i] == val)
			return true;
	}
	return false;
}
//int indexOf(int num[], int size, int val)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (num[i] == val)
//			return i;
//	}
//	return -1;
//}
int countEven(int n[], int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (n[i] % 2 == 0)
			c++;
	}
	return c;
}
int* EveNumber(int num[],int size,int &s)
{
	int totaleven = countEven(num, size);
	s = totaleven;
	if (totaleven == 0)
		return NULL;
	
	int* even = new int[totaleven];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (num[i] % 2 == 0)
		{
			even[index] = num[i];
			index++;
		}
	}
	return even;
}
void OrderByAscending(int number[], int size)
{
	int minindex;
	int temp;
	for (int i = 0; i < size; i++)
	{
		minindex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (number[minindex] > number[j])
			{
				minindex = j;
			}
		}
		temp = number[i];
		number[i] = number[minindex];
		number[minindex] = temp;
	}
}
void main()
{
	int numbers[5];

	input(numbers, 5);
	int total;
	int* evennum = EveNumber(numbers, 5,total);

	int ind=indexOf(evennum, total, 4);
	cout << "Index of 4:: " << ind << endl;
	system("pause");
	
}



