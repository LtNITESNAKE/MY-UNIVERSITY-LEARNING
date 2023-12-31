#include<iostream>
using namespace std;
namespace ArrayHandler
{
	int arraysum(int numbers[], int size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum = sum + numbers[i];

		}
		return sum;
	 }

	void input(int arr[], int size)
		{
			for (int i = 0; i < size; i++)
			{
				cout << "enter anumber";
				cin >> arr[i];
			}
		}

	bool search(const int number[], const int size, const int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (number[i] == value)
			{
				return true;
			}
			return false;
		}
	}

	 int index(const int number[], const int size, const int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (number[i] == value)
			{
				return i;
			}
			return -1;
		}
	}

	 int countpass(int num[], int size, int criteria)
	 {
		 int p = 0;
		 
		 for (int i = 0; i < size; i++)
		 {
			 if (num[i] >= criteria)
			 {
				 p++;
				 return p;
			 }
		 }
	 }

	 int selection(int num[], int size)
	 {
		 int index = 0;
		 for (int i = 0; i < size; i++)
		 {
			 index = i;
			 for (int j = i; i < j; j--)
			 {
				 if (num[i] > num[j])
				 {
					 int temp = num[i];
					 num[j] = num[i];
					 temp = num[j];
				 }
				 
			 }
		 }
	 }


}

