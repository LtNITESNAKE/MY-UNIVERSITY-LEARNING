#include<iostream>
using namespace std;
void main()
{
	int price ,total=0, qty;
	char ty,size;

	cout << "PRESS p for pizza /n press b for bbq /n press z for burger";
	cin >> ty;
	switch (ty)
	{
	case 'p': case 'P':
		cout << "PRESS L for large \n PRESS M for medium \n PRESS S for small";
		cin >> size;
		switch (size)
		{
		case 'M': case 'm':
			cout << "price for medium is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'l': case 'L':
			cout << "price for large is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'S': case 's':
			cout << "price for small is "; 
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		}break;
	case 'B': case 'b':
		cout << "PRESS L for large \n PRESS M for medium \n PRESS S for small";
		cin >> size;
		switch (size)
		{
		case 'M': case 'm':
			cout << "price for medium is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'l': case 'L':
			cout << "price for large is"; 
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'S': case 's':
			cout << "price for small is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		}break;
	case 'Z': case 'z':
		cout << "PRESS L for large \n PRESS M for medium \n PRESS S for small";
		cin >> size;
		switch (size)
		{
		case 'M': case 'm':
			cout << "price for medium is"; 
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'l': case 'L':
			cout << "price for large is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		case 'S': case 's':
			cout << "price for small is ";
			cin >> price;
			cout << "enter the quantity";
			cin >> qty;
			total += price*qty; break;
		}break;
	}
	cout << "total bill will be " << total;
	system("pause");
}