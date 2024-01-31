#include<iostream>
using namespace std;
void main() {


	int num;
	cin >> num;
	int tot = 1;
	for (int i = 1; i <=num; i++)
	{
		tot = tot*i;
	}
	cout << tot;
	system("pause");
}
