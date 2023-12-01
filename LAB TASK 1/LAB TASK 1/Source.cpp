#include<iostream>
using namespace std;
void main()
{
	/*int n;
	int value=1;
	cout << "enter a number";
	cin >> n;
	int m=n;
	while (value<=m)
	{
		n--;
		cout<< n;
		
		value++;
	}*/
	
	/*int n;
	int limit=1;
	cout << "enter a number";
	cin >> n;
	while (limit<=n)
	{
		cout << limit;
		limit++;
	}
*/


	int n1,n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	if (n1 < n2)
	{
		int current = n1 + 1;
		while (current < n2)
		{
			cout << current << " ";
			++current;
		}
	}
	else if (n2 < n1) 
	{
		int current = n1 - 1;
		while (current > n2) 
		{
			cout << current << " ";
			--current;
		}
	}

















	system("pause");
}