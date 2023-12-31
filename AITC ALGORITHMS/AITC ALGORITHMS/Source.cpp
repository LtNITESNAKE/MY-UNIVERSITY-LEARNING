#include <iostream>                                              
using namespace std;
void main()
{
	/*cout << "insertion sorting" << endl;

	int size;
	int j;
	int key;

	cout << "enter the size of array";
	cin >> size;
	int*insertion = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "enter elements for array";
		cin >> insertion[i];
	}
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
		cout << insertion[i]<<" ";
	}*/

	/*cout << "bubble sorting" << endl;

	int size;
	cout << "enter the size of the array: ";
	cin >> size;

	int* bubble = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "enter the element " << i + 1 << " of the array: ";
		cin >> bubble[i];
	}
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
	}*/

	
	/*cout<<"selection sorting" << endl;

	int size;
	cout << "enter the size of the array";
	cin >> size;
	int * selection = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "enter the values in array";
		cin >> selection[i];
	}

	int index = 0;
	for (int i = 0; i < size-1; i++)
	{
		index = i;
		for (int j = i+1; j < size ; j++)
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
		cout << selection[i]<<"  ";
	}*/





	system("pause");

}


