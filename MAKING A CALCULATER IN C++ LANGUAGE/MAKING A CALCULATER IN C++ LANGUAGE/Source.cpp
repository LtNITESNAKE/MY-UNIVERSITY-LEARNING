#include<iostream>
using namespace std;


float add(float x, float y)
{
	return x + y;
}
float sub(float x, float y)
{
	return x - y;
}
float mul(float x, float y)
{
	return x*y;
}
float divide(float x, float y)
{
	return x / y;
}

int main()
{

	cout << "WElCOME TO OUR CALCULATOR PROGRAM ***" << endl;

	float n1, n2, answer;
	while (true)
	{
		cout << "ENTER THE VALUE FOR NUMBER 1:" << endl;
		cin >> n1;
		cout << "ENTER THE VALUE FOR NUMBER 2:" << endl;
		cin >> n2;

		cout << "Press a for addition , Press s for subtraction,Press m for multipication ,Press d for division" << endl;
		char input;
		cin >> input;

		switch (input)
		{
		case 'A':
			answer = add(n1, n2);
			break;

		case 'S':
			answer = sub(n1, n2);
			break;

		case 'M':
			answer = mul(n1, n2);
			break;

		case 'D':
			answer = divide(n1, n2);
			break;
		}


		if (input == 'a')  answer = add(n1, n2);
		if (input == 's')  answer = sub(n1, n2);
		if (input == 'm')  answer = mul(n1, n2);
		if (input == 'd')  answer = divide(n1, n2);

		cout << "YOUR ANSWER IS : " << answer << endl;

		cout << "PRESS ANY KEY IF YOUR WANT TO COUNTINUE ....PRESS Q TO QUIT" << endl;
		cin >> input;

		if (input == 'Q' || input=='q') break;



	}



	return 0;
}
