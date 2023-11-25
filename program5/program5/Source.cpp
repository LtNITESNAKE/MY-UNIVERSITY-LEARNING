#include<iostream>
using namespace std;
void main()
{
	
	/*manager ali is working since three year his first year package was 50000 basic salary and 10000 house allowance. 
	after every six month salary was incremented to 10% of basic salary. ali save 5% of his earning every month 
	display amount earned by ali along whith his  total saving */ 

	int basic_salary_ali = 50000;
	int home_allowance_ali = 10000;
	int first_year_ali = basic_salary_ali+ home_allowance_ali;
	int earningpermonth_ali = basic_salary_ali / 12;
	int secondyear_6month1_ali = earningpermonth_ali ;
	int secondyear_6month2_ali = earningpermonth_ali+(earningpermonth_ali*10/100);
	int second_year_ali = (secondyear_6month1_ali)*6 + (secondyear_6month2_ali)*6 ;
	int thirdyear_6month1_ali = secondyear_6month2_ali + (secondyear_6month2_ali * 10 / 100);
	int thirdyear_6month2_ali = thirdyear_6month1_ali + (thirdyear_6month1_ali * 10 / 100);
	int third_year_ali = (thirdyear_6month1_ali) * 6 + (thirdyear_6month2_ali) * 6 ;
	int total_earning_ali = first_year_ali + second_year_ali + third_year_ali;
	cout << "ali total earning : " << total_earning_ali<<endl;
	int saving_firstyearand6month_ali = (earningpermonth_ali * 5 / 100) * 18;
	int saving_secondyearlast6month_ali = (secondyear_6month2_ali * 5 / 100) * 6;
	int saving_thirdfirst6months_ali = (thirdyear_6month1_ali * 5 / 100) * 6;
	int saving_thirdlast6months_ali = (thirdyear_6month2_ali * 5 / 100) * 6;
	int total_saving_ali = saving_firstyearand6month_ali + saving_secondyearlast6month_ali + saving_thirdfirst6months_ali + saving_thirdlast6months_ali;
	cout << "ali total saving : " << total_saving_ali << endl;

	/*raza is working since 2 years first year his montly earning was 45000(basic salary + 12000 home alownace)  next year 
	salary was incremented to 10% of basic salary.  he save 10% of his annunal income in first year in second year 
	he saved 5% of basic salary each month. 
	display total saving of  raza also display total basic salary raza has received so far  */ 
	
	int monthly_earning_raza = 45000;
	int home_allowance_raza = 12000;
	int first_year_monthly_salary_raza = monthly_earning_raza - home_allowance_raza;
	int first_yearly_salary_raza = first_year_monthly_salary_raza * 12;
	int second_year_monthly_salary_raza = first_year_monthly_salary_raza + (first_year_monthly_salary_raza * 10 / 100);
	int second_yearly_salary_raza = second_year_monthly_salary_raza * 12;
	int total_salary_raza = first_yearly_salary_raza + second_yearly_salary_raza;
	cout << "raza total basic salary : " << total_salary_raza << endl;
	int first_year_saving_raza = first_yearly_salary_raza * 10 / 100;
	int second_year_savingpermonth_raza = second_year_monthly_salary_raza * 5 / 100;
	int second_year_saving_raza = second_year_savingpermonth_raza * 12;
	int total_saving_raza = first_year_saving_raza + second_year_saving_raza;
	cout << "raza total saving : " << total_saving_raza << endl;
	
	
	/*rehan is working for 2 months on hourly basics per hour salary is 1000 in first month he worked
	 48 hours ,in second month he worked 20 hours in week one ,  10 hours in week 2,15 hours in week 3
	 and 12 hours in week4 calculate and show total earing of rehan after deducting 10% of tax .display
	 tax rehan has paid.*/

	int rehan_hourly_rate = 1000;
	int rehan_one_month_salary = 48 * rehan_hourly_rate;
	int rehan_second_month_salary = (20 + 10 + 15 + 12) * rehan_hourly_rate;
	int rehan_total_salary = rehan_one_month_salary + rehan_second_month_salary;
	int rehan_taxed_paid = (rehan_total_salary * 10) / 100;
	int rehan_salary_taxed = rehan_total_salary - rehan_taxed_paid;
	cout << "rehan total salary after paying taxes:" << rehan_salary_taxed << endl;
	cout << "rehan given taxed :" << rehan_taxed_paid << endl;


	system("pause");
}


