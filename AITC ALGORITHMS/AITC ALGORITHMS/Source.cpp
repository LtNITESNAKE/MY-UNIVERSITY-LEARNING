#include <iostream>                                              
using namespace std;
void main()
{
	const int size = 4;
	char ch;
	cout << "which technique you want to apply B fro bubble sort S for selection sort I fro insertion sort";
	cin >> ch;
	int j;
	int key;
	int insertion[] = {21,5,18,2};
	int bubble[] = {21,5,18,2};
	int selection[] = {21,5,18,2};
	switch (ch)
	{
	case 'i':case 'I':
		cout << "insertion sorting" << endl;
		for (int i = 1; i < size; i++)
		{
			key = insertion[i];
			j = i - 1;
			while (j >= 0 && insertion[j] > key)
			{
				insertion[j + 1] = insertion[j];
				j--;
			}
			insertion[j + 1] = key;
		}
		cout << "sorted array will be :";
		for (int i = 0; i < size; i++)
		{
			cout << insertion[i] << " ";
		}
		break;
	case 'b':case 'B':
		cout << "bubble sorting" << endl;

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (bubble[j] > bubble[j + 1])
				{
					int temp = bubble[j];
					bubble[j] = bubble[j + 1];
					bubble[j + 1] = temp;
				}
			}
		}

		cout << "sorted array: ";
		for (int i = 0; i < size; i++) {
			cout << bubble[i] << " ";
		}
		break;
	case 'S': case 's':

		cout << "selection sorting" << endl;
		int index = 0;
		for (int i = 0; i < size - 1; i++)
		{
			index = i;
			for (int j = i + 1; j < size; j++)
			{
				if (selection[index] > selection[j])
				{
					index = j;
				}
			}
			int temp = selection[index];
			selection[index] = selection[i];
			selection[i] = temp;
		}
		cout << "sorted array is :";
		for (int i = 0; i < size; i++)
		{
			cout << selection[i] << "  ";
		}


	}


	system("pause");

}


