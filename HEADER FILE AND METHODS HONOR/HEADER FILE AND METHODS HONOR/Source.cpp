#include<iostream>
#include "arrayoperation.h"
using namespace ArrayHandler;
using namespace std;
//void input(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "enter anumber";
//		cin >> arr[i];
//	}
//}
//int arraysum(int numbers[], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum + numbers[i];
//	}
//	return sum;
//}
void main()
{
	int num[5], num2[10];
	input(num, 5);
	int s = arraysum(num, 5);

	cout << "sum of ";
	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << " ";
	}
	cout << "sum of the array" << s;


	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;






	system("pause");
}