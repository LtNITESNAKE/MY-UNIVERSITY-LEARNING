#include<iostream>
using namespace std;
void main()
{
	/*float pprice_b, pprice_o, pprice_d;
	float sprice_b, sprice_o, sprice_d;

	cout << "enter the purchase price for beans,oil and detegrent:" << endl;
	cin >> pprice_b >> pprice_o >> pprice_d;
	cout << "enter the selling price for beans,oil and detegrent:" << endl;
	cin >> sprice_b >> sprice_o >> sprice_d;

	float profit_b = sprice_b - pprice_b;
	float profit_o = sprice_o - pprice_o;
	float profit_d = sprice_d - pprice_d;

	float total_profit = profit_b + profit_o + profit_d;
	cout << "your profit on beans is:" << profit_b << endl;
	cout<<"your profit on oil is :"<<profit_o<<endl;
	cout<<"your profit on detergent is :"<<profit_d<<endl;

	cout << "your total profit is :" << total_profit << endl;*/

	float units_com, cost_unit;
	cout << "enter the units consumed:" << endl;
	cin >> units_com;
	cout << "enter the cost per unit:" << endl;
	cin >> cost_unit;
	float total_cost = cost_unit*units_com;
	cout << "total bill to be paid:" << total_cost << endl;

	system("pause");
}