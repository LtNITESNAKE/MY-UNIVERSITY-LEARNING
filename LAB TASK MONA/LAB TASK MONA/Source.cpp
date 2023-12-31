#include<iostream>
using namespace std;
void main()
{
repeatwhole:
	char choice;
	int max, min, sum = 0;
    float average;
	int num[10];

	max = num[0];
	for (int i = 0; i < 10; i++)
	{
		cout << " enter " <<i<<" number ";
		cin >> num[i];
		sum += num[i];
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	min = num[0];
	int i = 0;
	while (i < 10)
	{
		
	   if( num[i]<min)
		{
			min = num[i];
		}
		i++;
	}
repeat:
	cout << " PRESS 1 to display maximum value \n PRESS 2 to display minimum value \n PRESS 3 to display sum \n PRESS 4 to display average";
	cin >> choice;
	switch (choice)
	{
	case '1':
		cout << "maximum number is " << max<<endl;
		break;
	case '2':
		cout << "minimum number is " << min << endl;
		break;
	case '3':
		cout << "sum of the array is " << sum << endl;
		break;
	case '4':
		average = sum / 10;
		cout << "average of the array" << average << endl;
		break;
	}
	char quitter;
	cout << "  PRESS Q for quit \n PRESS r to repeat for more  answer in the same array \n  PRESS any other key to reenter new values for array and restart the program as a new one \n ";
	cin >> quitter;
	if (quitter == 'Q' || quitter == 'q')
	{
		
	}
	else if(quitter == 'r' || quitter == 'R')
{
		goto repeat;
	}
	else {
		goto repeatwhole;
	}

	system("pause");
}