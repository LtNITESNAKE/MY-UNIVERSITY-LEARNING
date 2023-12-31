#include<iostream>
using namespace std;
void main()
{
	/*int d = 1;
	for (; ;)
	{
		if (d % 2 == 1 && d % 3 == 1 && d % 4 == 1 && d % 5 == 1 && d % 6 == 1 && d % 7 == 0)
		{
		
		}
		d++;
	}
	cout << d;*/
	int d = 1;
	int count = 0;

	while (count < 5) {
		if (d % 2 == 1 && d % 3 == 1 && d % 4 == 1 && d % 5 == 1 && d % 6 == 1 && d % 7 == 0) {
			cout << "Value " << count + 1 << ": " << d << endl;
			count++;
		}
		d++;
	}


	system("pause");

}