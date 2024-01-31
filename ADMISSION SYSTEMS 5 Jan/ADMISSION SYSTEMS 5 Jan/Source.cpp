#include "iostream"
using namespace std;
struct Address
{
	char city[10];
	char housenum[10];
	char street[10];
};
struct AdmissionForm
{
	int form_num;
	char app_name[15];
	char app_nic[15];
	char discipline[5];
	Address address;
	float metric_per, inter_per;
	bool ismuslim;
};
void main()
{
	int total_form = 5;
	AdmissionForm* forms = new AdmissionForm[total_form];
	int userchoice, index = 0;
	do
	{

		cout << "Press 1 to issue admission form\n";
		cout << "Press 2 to view all applicants\n";
		cout << "Press 3 to view discipline wise applicants\n";
		cout << "Press 4 to search\n";
		cout << "Press 5 to exit\n";
		cin >> userchoice;
		if (userchoice == 1)
		{
			if (index == total_form)
			{
				cout << "All forms are issued\n";
			}
			else
			{
				forms[index].form_num = index + 1;
				cout << "Enter app name\n";
				cin >> forms[index].app_name;
				cout << "Enter app nic\n";
				cin >> forms[index].app_nic;
				cout << "Enter city \n";
				cin >> forms[index].address.city;
				cout << "Enter house#\n";
				cin >> forms[index].address.housenum;
				cout << "Enter street#\n";
				cin >> forms[index].address.street;
				cout << "Enter Metric%\n";
				cin >> forms[index].metric_per;
				cout << "Enter Inter%\n";
				cin >> forms[index].inter_per;
				cout << "Enter discipline BSCS,BSAI, BSSE\n";
				cin >> forms[index].discipline;

				cout << "Press M if you are muslim\n";
				char ch;
				cin >> ch;
				if (ch == 'M' || ch == 'm')
				{
					forms[index].ismuslim = true;
				}
				else
				{
					forms[index].ismuslim = false;
				}
				index++;



			}

		}
		else if (userchoice == 2)
		{
			if (index == 0)
			{
				cout << "No data\n";
			}
			else
			{
				cout << "Form#\tName\tNIC\tCity\tHouse#\tStreet#\tDisc\tMper\tIper\n";
				for (int i = 0; i < index; i++)
				{
					cout << forms[i].form_num << "\t";
					cout << forms[i].app_name << "\t";
					cout << forms[i].app_nic << "\t";
					cout << forms[i].address.city << "\t";
					cout << forms[i].address.housenum << "\t";
					cout << forms[i].address.street << "\t";
					cout << forms[i].discipline << "\t";
					cout << forms[i].metric_per << "\t";
					cout << forms[i].inter_per << "\t" << endl;

				}
			}

		}
		else if (userchoice == 3)
		{
			if (index == 0)
			{
				cout << "No data\n";
			}
			else
			{
				cout << "Enter discipline\n";
				char dis[5];
				cin >> dis;
				bool matched;
				int ind;
				cout << "Form#\tName\tNIC\tCity\tHouse#\tStreet#\tDisc\tMper\tIper\n";
				for (int i = 0; i < index; i++)
				{
					matched = false;
					ind = 0;
					while (dis[ind] != '\0' && forms[i].discipline[ind] != '\0')
					{
						if (dis[ind] != forms[i].discipline[ind])
							break;

						ind++;
					}
					if (dis[ind] == '\0' && forms[i].discipline[ind] == '\0')
						matched = true;

					if (matched)
					{
						cout << forms[i].form_num << "\t";

						cout << forms[i].app_name << "\t";

						cout << forms[i].app_nic << "\t";
						cout << forms[i].address.city << "\t";
						cout << forms[i].address.housenum << "\t";
						cout << forms[i].address.street << "\t";
						cout << forms[i].discipline << "\t";
						cout << forms[i].metric_per << "\t";
						cout << forms[i].inter_per << "\t" << endl;
					}
				}

			}

		}
		else if (userchoice == 4)
		{
			cout << "Press N for NIC\n";
			cout << "Press F for form num\n";
			cout << "Press X for Name\n";
			char ch;
			cin >> ch;
			switch (ch)
			{
			case 'N': case'n':
				cout << "Enter discipline\n";
				char cnic[5];
				cin >> cnic;
				bool matched;
				int ind;
				cout << "Form#\tName\tNIC\tCity\tHouse#\tStreet#\tDisc\tMper\tIper\n";
				for (int i = 0; i < index; i++)
				{
					matched = false;
					ind = 0;
					while (cnic[ind] != '\0' && forms[i].app_nic[ind] != '\0')
					{
						if (cnic[ind] != forms[i].app_nic[ind])
							break;

						ind++;
					}
					if (cnic[ind] == '\0' && forms[i].app_nic[ind] == '\0')
						matched = true;

					if (matched)
					{
						cout << forms[i].form_num << "\t";

						cout << forms[i].app_name << "\t";

						cout << forms[i].app_nic << "\t";
						cout << forms[i].address.city << "\t";
						cout << forms[i].address.housenum << "\t";
						cout << forms[i].address.street << "\t";
						cout << forms[i].discipline << "\t";
						cout << forms[i].metric_per << "\t";
						cout << forms[i].inter_per << "\t" << endl;
					}
				}
				break;
			default:
				cout << "NOT VALID ,*** ,enter a valid choice";
				break;
			}
		}
		else if (userchoice != 5)
		{
			cout << "invalid input provide valid input\n";
		}

	} while (userchoice != 5);

	system("pause");
}











