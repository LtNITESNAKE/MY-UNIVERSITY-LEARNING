#include<iostream>
using namespace std;
void main()
{
	int arr[10];
	int ocount, ecount, sumo, sume;
	ocount = ecount = sumo = sume = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "enter the element " << i + 1 << " in array ";
		cin >> arr[i];
		if (arr[i] % 2 == 0)
		{
			sume += arr[i];
			ecount++;
		}
		else {
			sumo += arr[i];
			ocount++;
		}
	}
	cout << "array is :" ;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "even count" << ecount << endl;
	int i = 0;
	cout << "even are :";
	while (i < 10)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i]<<"  ";
		}
		i++;
	}
	cout << "\n sum of even numbers" << sume<<endl;
	cout << endl;
	int j = 0;
	cout<< "odd count " << ocount << endl;
	cout << "odd are :";
	while (j < 10)
	{
		if (arr[j] % 2 == 0)
		{}
		else {
			cout << arr[j] << "  ";
		}
		
		j++;
	}
	cout << " \n sum of odd numbers" << sumo<<endl;
	cout << endl;  
	int search;

	cout << "\n enter  a number to be searched";
	cin >> search;
	bool flag=0;
	for (int a = 0; a < 10; a++)
	{
		if (search == arr[a])
		{
			flag = 1;
		}

	}

	if (flag)
	{
		cout << "found"<<endl;
	}
	else {
		cout << "not found"<<endl;
	}
















	system("pause");
}