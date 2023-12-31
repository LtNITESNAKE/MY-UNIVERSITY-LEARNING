#include<iostream>
using namespace std;
void maxmin(int a, int b, int c, int & mx, int & mn)
{
	mx = a;
	if (a < b)
		mx = b;
	if (a < c)
		mx = c;

	mn = a;
	if (a > b)
		mn = b;
	if (a > c)
		mn = c;

}
void main()
{
	int min, max;
	int n1, n2, n3;
	cout << "enter three numbers";
	cin >> n1 >> n2 >> n3;
	maxmin(n1, n2, n3, max ,min);
		cout << "MAX " << max << " MIN " << min;
	system("pause");
}