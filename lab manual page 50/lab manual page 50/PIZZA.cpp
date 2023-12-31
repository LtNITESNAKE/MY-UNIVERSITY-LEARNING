#include<iostream>
using namespace std;
void main()
{
	int qty;
	int bill;
	char FALV, size;
	cout << "FALVOUR \n PRESS B BBQ \n  PRESS S SMOKED \n  PRESS G GRILLED \n  PRESS  M MACCORINI AND CHEESE \n  PRESS C CANTALOUPE AND RICOTTA \n  PRESS X BUTTER LOBSTER \n PRESS Z  ZUCCHINI";
	cin >> FALV;
	switch (FALV)
	{
	case 's':case 'S':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 550 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 850 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1150 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1650 * qty;
			break;
		}break;
	case 'b':case 'B':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 500 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 800 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1100 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1600 * qty;
			break;
		}break;
	case 'g':case 'G':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 600 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 900 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1300 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1900 * qty;
			break;
		}break;
	case 'm':case 'M':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 750 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 950 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1050 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1850 * qty;
			break;
		}break;
	case 'c':case 'C':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 800 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 980 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1100 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 2000 * qty;
			break;
		}break;
	case 'x':case 'X':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 450 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1000 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1200 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1600 * qty;
			break;
		}break;
	case 'z':case 'Z':
		cout << "PRESS S FOR SMALL \n PRESS M FOR MEDIUM \n PRESS L FOR LARGE \n PRESS X for EXTRA LARGE";
		cin >> size;
		switch (size)
		{
		case 's':case 'S':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 500 * qty;
			break;
		case 'm':case 'M':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 800 * qty;
			break;
		case 'l':case 'L':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 1100 * qty;
			break;
		case 'X':case 'x':
			cout << "enter the quantiy";
			cin >> qty;
			bill = 2050 * qty;
			break;
		}break;
	default:
		cout << "enter a valid FALVOUR";
		break;
	}
	cout << "your total bill will be " << bill;


	system("pause");
}