#include<iostream>
using namespace std;
void main()
{     
	int fam_mem, total_amount = 0,age, price_bill=1000, billforchild , billforadult , billforsenior;

	billforchild = price_bill / 2;
	billforadult = price_bill;
	billforsenior = price_bill - (price_bill*0.2);

	cout << "enter the numbers of family member" << endl;
	cin >> fam_mem;

	cout << "enter age of FIRST family memeber"<<endl;
	cin >> age;

	if (fam_mem >= 1 && age < 15) total_amount += billforchild;
	else if (fam_mem >= 1 && age >= 15 && age <= 59) total_amount += billforadult;
	else 	total_amount += billforsenior;
	
	cout << "enter age of SECOND family memeber" << endl;
	cin >> age;

	if (fam_mem >= 2 && age < 15)	total_amount += billforchild;
	else if (fam_mem >= 2 && age >= 15 && age <= 59) total_amount += billforadult;
	else	total_amount += billforsenior;

	cout << "enter age of THIRD family memeber" << endl;
	cin >> age;

	if (fam_mem >= 3 && age < 15)	total_amount += billforchild;
	else if (fam_mem >= 3 && age >= 15 && age <= 59) total_amount += billforadult;
	else   total_amount += billforsenior;

	cout << "enter age of FOURTH family memeber" << endl;
	cin >> age;

	if (fam_mem >= 4 && age < 15)	total_amount += billforchild;
	else if (fam_mem >= 4 && age >= 15 && age <= 59) total_amount += billforadult;
	else	total_amount += billforsenior;
	
	cout << "enter age of FIFTH family memeber" << endl;
	cin >> age;

	if (fam_mem >= 5 && age < 15)	total_amount += billforchild;
	else if (fam_mem >= 5 && age >= 15 && age <= 59)	total_amount += billforadult;
	else	total_amount += billforsenior;

	cout << "your total bill be " << total_amount << endl;
	system("pause");
}