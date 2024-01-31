#include "iostream"
using namespace std;
struct Date
{
	int month, year, day;

};
struct Car
{
	char company[10], colour[10];
	char regnum[10];
	int model, price;
	Date purchasedate;
};
namespace Menus
{
	void menu()
	{
		cout << "1 to add a new car\n";
		cout << "2 to view all cars\n";
		cout << "3 to search car\n";
		cout << "4 to exit\n";
	}
	void searchmenu()
	{
		cout << "R to search by reg#\n";
		cout << "C to search by company name\n";
		cout << "M to search by model\n";
		cout << "Any other key to go to main menu\n";
	}
    
}
namespace Logics
{
	int positiveNumber()
	{
		int num;
		cout << "Enter a number ";
		cin >> num;
		while (num < 0)
		{
			cout << "Number should be +ve\n";
			cin >> num;
		}
		return num;

	}
    
	bool compareChar(char creg[], char reg[])
	{
		int index = 0;
		while (creg[index] != '\0' && reg[index] != '\0')
		{
			if (creg[index] != reg[index])
				return false;
			index++;
		}
		if (creg[index] == '\0' && reg[index] == '\0')
			return true;
		return false;
	}
    
	bool isRegAdded(Car c[], int data, char reg[])
	{
		for (int i = 0; i < data; i++)
		{
			if (compareChar(c[i].regnum, reg))
				return true;
		}
		return false;
	}
	void copy(char destination[], char source[])
	{
		int index = 0;
		while (source[index] != '\0')
		{
			destination[index] = source[index];
			index++;
		}
		destination[index] = '\0';

	}
}
