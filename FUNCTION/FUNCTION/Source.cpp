#include<iostream>
using namespace std;
void menu()
{
	cout << "PRESS + to add \n" << "PRESS - to sub \n" << "PRESS * to mul \n" << "PRESS / to div \n";
}
void add(int n1, int n2)
{
	int sum = n1 + n2;
	cout << "sum" << sum;

}
void sub(int n1, int n2)
{
	
	int sub = n1 - n2;
	cout << "sum" << sub;
}
void mul(int n1, int n2)
{
		int mul = n1*n2;
	cout << "mul" << mul;

}
void divide(int n1, int n2)
{
	if (n2 != 0)
	{
		int div = n1 / n2;
		cout << "div" << div;

	}
	else{
		cout << "second number can,t be zero";
}
}
void main()
{
	int n1, n2;
	char z='a';
	while (z!='e'&&z!='E')
	{
		cout << "enter 2number\n";
		cin >> n1 >> n2;
		menu();
		cin >> z;
		switch (z)
		{
		case '+':
			add(n1,n2);
			break;
		case '-':
			sub(n1,n2);
			break;
		case '*':
			mul(n1,n2);
			break;
		case '/':
			divide(n1,n2);
			break;

		}
		cout << "PRESS e to exit or PREss any other character to countinue";
		cin >> z;
	}


	
























	system("pause");


}