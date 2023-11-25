#include<iostream>
using namespace std;
void main()
{
	/*float speed_tcs = 40, distance, time;
	cout << "enter the distance in kilometers :" << endl;
	cin >> distance;
	time = distance / speed_tcs;
	cout << "the time which will take tcs to arrive : " << time << "hours" << endl;*/

	/*int speed_tcs = 40;
	int distance;
	int time;
	cout << "Enter the distance in meters: " << endl;
	cin >> distance;
	speed_tcs = (40 * 1000) / 60;
	time = distance / speed_tcs;
	cout << "The time it will take for TCS to arrive is approximately " << time << " minutes." << endl;*/


	int ali_wperh = 500,salary, hours,home,medical;
	cout << "enter the worked by hours : "<<endl;
	cin >> hours;
	salary = hours*ali_wperh;
	cout << "your amount is : " << salary<<endl;
	cout << "enter home allowance : "<<endl;
	cin >> home;
	cout << "enter medical allowance : " << endl;
	cin >> medical;
	salary = salary + home + medical;
	int tax = (salary * 10) / 100;
	int salary1 = salary - tax;
	cout << "your tax is : " << tax << endl;
	cout << "your salary after tax is : " << salary1 << endl;























	system("pause");
}