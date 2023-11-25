#include<iostream>
using namespace std;
char sizemenu()
{
	char size;

	cout << "Press S for SMALL \n";
	cout << "press M for medium \n";
	cout << "press L for large \n";
	cin >> size;
	return size;

}
void calculatebill(int price)
{
	cout << "Enter qunatity ";
	int qty;
	cin >> qty;
	cout << "Pay " << qty*price << endl;
}
void main()
{

	char userchoice;
	char size;

	cout << "Select Your flavour \n \t B for BBQ \n \t C for crown curst \n \t T for tikka \n  \t F for fijita" << endl;
	cin >> userchoice;
	if (userchoice == 'B' || userchoice == 'b')
	{
		size = sizemenu();
		if (size == 'S' || size == 's')
		{
			calculatebill(1000);

		}
		else if (size == 'M' || size == 'm')
		{
			calculatebill(1500);
		}
		else if (size == 'l' || size == 'L')
		{
			calculatebill(2500);
		}

	}
	if (userchoice == 'C' || userchoice == 'c')
	{
		size = sizemenu();
		if (size == 'S' || size == 's')
		{
			calculatebill(1500);

		}
		else if (size == 'M' || size == 'm')
		{
			calculatebill(2500);
		}
		else if (size == 'l' || size == 'L')
		{
			calculatebill(3000);
		}

	}
	if (userchoice == 'T' || userchoice == 't')
	{
		size = sizemenu();
		if (size == 'S' || size == 's')
		{
			calculatebill(500);

		}
		else if (size == 'M' || size == 'm')
		{
			calculatebill(1000);
		}
		else if (size == 'l' || size == 'L')
		{
			calculatebill(1500);
		}

	}
	if (userchoice == 'f' || userchoice == 'F')
	{
		size = sizemenu();
		if (size == 'S' || size == 's')
		{
			calculatebill(800);

		}
		else if (size == 'M' || size == 'm')
		{
			calculatebill(1600);
		}
		else if (size == 'l' || size == 'L')
		{
			calculatebill(2400);
		}

	}


	system("pause");
}