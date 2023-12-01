//#include<iostream>
//using namespace std;
//void main()
//{
	/*int a;
	cout << "enter a number";
	cin >> a;

	if (a >= 0 && a <= 9)
	{
		cout << "positive 1 digit ";
	}
	else if (a < 0 && a >= -9)
	{
		cout << "negative 1 digit";
	}
	else if (a > 9 && a <= 99)
	{
		cout << "positive 2 digits ";
	}
	else if (a < 0 && a >= -99)
	{
		cout << "negative 2 digits";
	}
	else if (a >= 100 && a <= 999)
	{
		cout << "positive 3 digits ";
	}
	else if (a < -99 && a >= -999)
	{
		cout << "negative 3 digits";
	}
	else if (a >= 1000)
	{
		cout << "positive more than 3 digits";
	}
	else if (a <= -1000)
	{
		cout << "negative more than 3 digits";
	}*/

	/*int a;
	cout << "enter your monthly salary ";
	cin >> a;

	int y = a * 12;
	int ty, mt;

	if (y < 300000)
	{
		cout << "is exempted from tax \n";
		mt = 0;
		ty = 0;
	}
	else if (y >= 300000 && y < 600000)
	{
		if (y > 350000)
		{
			mt = 3000 + (y - 350000) * 1 / 100;
			ty = mt * 12;
		}
		else
		{
			mt = 3000;
			ty = mt * 12;
		}
	}
	else if (y >= 600000 && y < 1000000)
	{
		if (y > 650000)
		{
			mt = 5000 + (y - 650000) * 2 / 100;
			ty = mt * 12;
		}
		else
		{
			mt = 5000;
			ty = mt * 12;
		}
	}
	else if (y >= 1000000)
	{
		mt = y * 17 / 100;
		ty = mt * 12;
	}

	cout << "monthly tax: " << mt << endl;
	cout << "annual tax: " << ty << endl;*/

	/*char c;
	cout << "enter marks form 0 to 9" << endl;
	cin >> c;
	switch (c)
	{
	case '8': case '9': case '10':
		cout << "EXCELLENT";
		break;

	case '6': case'7':
		cout << "GOOD";
		break;

	case '5':
		cout << "SATISFACTORY";
		break;

	case '4':
		cout << "POOR";
		break;

	case '0': case '1': case '2': case '3':
		cout << "FAIL";
		break;

	default :

		cout << "enter valid marks";
		break;
	}*/

//char c;
//cout << "enter SCORE";
//cin >> c;
//switch (c)
//{
//case '-1':
//	cout << "OUT! Execellent ball";
//	break;
//case '0':
//	cout << "BALL MISSED";
//	break;
//case '1':
//	cout << "ONE RUN";
//	break;
//case '2':
//	cout << "SCORED A DOUBLE";
//	break;
//case '3':
//	cout << "Good shot stopped at the boundary, three scores";
//	break;
//case '4':
//	cout << "Good shot, crossed the boundary rope and four runs";
//	break;
//case '6':
//	cout << "IT's a six execellent shot by the batsman";
//	break;
//
//}


#include<iostream>
using namespace std;
void main()
{

          /*char c;
          int d = 0;
          int w = 1;
          int b=50000;
          cout << "PRESS b for balance inquriy" << "\n" << "press d for deposit amount" << "\n" << "press w fro withdraw amount \n";
          cin >> c;
          switch (c)
          {
          case 'b': case 'B':
          	cout << "total balance present in account" << b;
          	break;
          
          case 'd': case'D':
          	cout << "enter amount to be deposited ";
          	cin >> d;
          	d += b;
          	break;
          	
          
          case 'w': case 'W':
          	cout << "enter amount to withdraw";
          	cin >> w;
          	if (w > b)
          	{
          		while (w > b)
          		{
          			cout << "enter valid amount to be withdraw";
          			cin >> w;
          
          		}

          	}
			b -= w;
          	break;
          
          }
          if(c=='b'||c=='B')
          {
          	cout << "total balance present in account" << b;
          }
          else if (c == 'd' || c == 'D')
          {
          	cout << "enter amount to be deposited ";
          		cin >> d;
          		d += b;
          }
		  else if (c == 'w' || c == 'W')
		  {
			  cout << "enter amount to withdraw";
			  cin >> w;
			  if (w > b)
			  {
				  while (w > b)
				  {
					  cout << "enter valid amount to be withdraw";
					  cin >> w;

				  }

			  }
			  b -= w;
		  }*/

	/*int mon, tue, wed;

	cout << "enter the temperature of monday ,tuesday and wednesday";
	cin >> mon >> tue >> wed;
	if ((mon < tue)<=15 && (mon< wed)<=15)
	{
		cout << "MONDAY is coldest";
	}
	else if ((tue < mon)<=15 && (tue< wed)<=15)
	{
		cout << "tuesday is coldest";
	}
	else if ((wed < mon)<=15 && (wed< tue)<=15)
	{
		cout << "wednesday is coldest";
	}*/




































			  system("pause");
}
