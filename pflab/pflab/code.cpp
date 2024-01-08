#include "iostream"
#include "Proj.h"
using namespace std;
using namespace Menus;
using namespace Logics;

void main()
{
	int capacity = 3;
	Car* cinfo = new Car[capacity];
	int index = 0;
	int userchoice;
	do
	{
		menu();
		cin >> userchoice;
		if (userchoice == 1)
		{
			if (index == capacity)
			{
				cout << "Out of memory\n";
			}
			else
			{
				char reg[10];
				cout << "Enter reg number ";
				cin >> reg;
				while (isRegAdded(cinfo,index,reg))
				{
					cout << "Reenter Reg number is already added ";
					cin >> reg;
				}
				//strcpy(cinfo[index].regnum, reg);
				copy(cinfo[index].regnum, reg);
				cout << "Enter company name ";
				cin>>cinfo[index].company;
				cout << "Enter model ";
				cinfo[index].model = positiveNumber();
				cout << "Enter price ";
				cinfo[index].price = positiveNumber();
				cout << "Enter colour ";
				cin>>cinfo[index].colour;
				cout << "Enter purchae date month,day and year ";
				cin >> cinfo[index].purchasedate.month;
				cin >> cinfo[index].purchasedate.day;
				cin >> cinfo[index].purchasedate.year;
				index++;
			}

		}
		else if (userchoice == 2)
		{
			if (index == 0)
			{
				cout << "No car details\n";
			}
			else
			{
				cout << "Reg#\tCompany\tColour\tModel\tPrice\tDate\n";
					for (int i = 0; i < index; i++)
					{
						cout << cinfo[i].regnum << "\t";
						cout << cinfo[i].company << "\t";
						cout << cinfo[i].colour << "\t";
						cout << cinfo[i].model << "\t";
						cout << cinfo[i].price << "\t";
						cout << cinfo[i].purchasedate.month << "-" 
							   <<cinfo[i].purchasedate.day<<"-"<<cinfo[i].purchasedate.year;
						cout << endl;
					}

			}
			

		}

	} while (true);
	

		
	system("pause");
}













