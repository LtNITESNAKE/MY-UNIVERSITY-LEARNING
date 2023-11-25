#include<iostream>
using namespace std;
void main()
{
	char userchoice;
	char size;
	int qty,price,dis;
	cout << "press B for BBQ Pizza \n press S for smoked pizza \n press G for Grilled pizza \n press M for Macaroni \n press C for Cantaloupe \n Press X butter lobster \n press Z fro zucchini";
	cin >> userchoice;
	if (userchoice == 'B' || userchoice == 'b')
	{
		cout<<"Press S for small rs 500"<<endl;
		cout<<"Press M for medium  rs 800 "<<endl;
		cout<<"Press L for large rs 1100"<<endl;
		cout<<"Press X for extra large rs 1600"<<endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}

	}
	if (userchoice == 'S' || userchoice == 's')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}
	if (userchoice == 'g' || userchoice == 'G')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}
	if (userchoice == 'M' || userchoice == 'm')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}
	if (userchoice == 'c' || userchoice == 'C')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}
	if (userchoice == 'X' || userchoice == 'X')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}
	if (userchoice == 'Z' || userchoice == 'z')
	{
		cout << "Press S for small" << endl;
		cout << "Press M for medium" << endl;
		cout << "Press L for large" << endl;
		cout << "Press X for extra large" << endl;
		cin >> size;
		if (size == 'S' || size == 's')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 500;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'M' || size == 'm')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 800;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'L' || size == 'l')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1100;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
		if (size == 'X' || size == 'x')
		{
			cout << "enter quantity" << endl;
			cin >> qty;
			price = qty * 1600;
			if (price > 5000)
			{
				dis = price - (price * 2 / 100);
				cout << "your bill is  after 2% discount is " << dis;
			}
			else {
				cout << "your bill is " << price;
			}
		}
	}

	system("pause");
}