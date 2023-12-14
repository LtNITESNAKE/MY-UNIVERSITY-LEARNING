#include<iostream>
using namespace std;
void main()
{

	/*int n;
	int div = 2;
	int show = 1;
	cout << "enter a number";
	cin >> n;
	if (n <= 1) 
	{
		cout << "Not a prime number";
	}
	 else {
		while (div * div <= n) {
			if (n % div == 0) {
				show = 0; 
				break; 
			}
			++div;
		}

		if (show)
		{
			cout << "Prime number";
		}
		else 
		{
			cout << "Not a prime number";
		}
	}*/



	/*int n1,n2;

	cout << "enter 2 number: ";
	cin >> n1>>n2;

	for (int num = n1; num <= n2; ++num)
	{
		if (num <= 1)
		{
			
		}

		int div;
		for ( div = 2; div * div <= num; ++div)
		{
			if (num % div == 0)
			{
				break; 
			}
		}

		if (div * div > num) 
		{
			cout << num << " ";
		}
	}*/


	/*int n1, n2;
	cout << "enter 2 numbers";
	cin >> n1 >> n2;
	int lcm=0;
	if (n1 > n2)
	{
		lcm = n1;
	}
	else if(n2>n1)
	{
		lcm = n2;
	}
	for ( ; lcm%n1 == 0 && lcm%n2 == 0; lcm++)
	{
		cout << lcm;
		
	}*/
	 int decimaln, remain, bin = 0, base = 1;
		cout << "enter a number: ";
		cin >> decimaln;	
	while (decimaln > 0)
	{
		remain = decimaln % 2;
		bin = bin + remain * base;
		decimaln = decimaln / 2;
		base = base * 10;
	}
	cout << "binary = " << bin << endl;






















	system("pause");
}