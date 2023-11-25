/*#include <iostream>
using namespace std;

void  main() 
{
	int ali;
	int raza;
	int ahmed;
	int amount;
	int profit;
	int ali2;
	int raza2;

	cout << "Enter the amount invested by all users: " << endl;
	cin >> amount;
	ali = amount;
	ahmed = 2 * ali;
	raza = ali / 2;
	int total = ali + ahmed + raza;
	
	cout << "Amount contributed by Ahmed: " << ahmed << endl;
	cout << "Amount contributed by Raza: " << raza << endl;

	profit = (total* 50) / 100;

	cout << "Amount received by Ali: " << ali - profit << endl;
	cout << "Amount received by Ahmed: " << ahmed - profit << endl;
	cout << "Amount received by Raza: " << raza - profit << endl;

	system("Pause");
}*/
/*#include <iostream>
using namespace std;

void main()
{
	int ali;
	int raza;
	int ahmed;
	float amount;
	float profit;
	int ali2;
	int raza2;

	cout << "Enter the amount invested by Ali: " << endl;
	cin >> amount;
	ali = amount;
	ahmed = 2 * ali;
	raza = ali / 2;

	ali2 = ali - ahmed - raza;
	raza2 =  raza;

	cout << "Amount contributed by Ahmed: " << ahmed << endl;
	cout << "Amount contributed by Raza: " << raza << endl;

	profit = (amount * 50) / 100;

	cout << "Amount received by Ali: " << ali + profit << endl;
	cout << "Amount received by Ahmed: " << ahmed + profit << endl;
	cout << "Amount received by Raza: " << raza2 + profit << endl;

	system("pause");
}*/
/*#include <iostream>
using namespace std;
void main()
{
	float ali, ahmad, raza, totalInvestment, profit;

	cout << "Enter the amount invested by Ali: ";
	cin >> ali;

	// Calculate the amounts contributed by Ahmed and Raza
	ahmad = 2 * ali;
	raza = ali / 2;

	cout << "Amount contributed by Ahmad: " << ahmad << endl;
	cout << "Amount contributed by Raza: " << raza << endl;

	// Calculate the total investment
	totalInvestment = ali + ahmad + raza;

	// Calculate the profit (50% of total investment)
	profit = 0.5 * totalInvestment;

	// Calculate the amount each person will receive after 6 months
	ali += profit;
	ahmad += profit;
	raza += profit;

	cout << "Amount received by Ali: " << ali << endl;
	cout << "Amount received by Ahmad: " << ahmad << endl;
	cout << "Amount received by Raza: " << raza << endl;

	system("pause");
}*/
/*#include <iostream>
using namespace std;

void main()
{
	float ali, ahmed, raza, totalInvestment, profit;

	cout << "Enter the amount invested by Ali: ";
	cin >> ali;

	// Calculate the amounts contributed by Ahmed and Raza
	ahmed = 2 * ali;
	raza = ali / 2;

	cout << "Amount contributed by Ahmed: " << ahmed << endl;
	cout << "Amount contributed by Raza: " << raza << endl;

	// Calculate the total investment
	totalInvestment = ali + ahmed + raza;

	// Calculate the profit earned in a 6-month period (50% of total investment)
	profit = 0.5 * totalInvestment;

	// Calculate the amount each person will receive after 6 months
	ali += (profit / 3); // Divide profit equally among Ali, Ahmed, and Raza
	ahmed += (profit / 3);
	raza += (profit / 3);

	cout << "Amount received by Ali after 6 months: " << ali << endl;
	cout << "Amount received by Ahmed after 6 months: " << ahmed << endl;
	cout << "Amount received by Raza after 6 months: " << raza << endl;

	system("pause");
}*/
