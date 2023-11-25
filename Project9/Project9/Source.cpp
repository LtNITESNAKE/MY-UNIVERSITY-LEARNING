#include<iostream>
using namespace std;
void main()
{
	/*1-	Input Semester fee from user. Display Total Degree Fee.*/
	int sf;
	int tf;
	cout << "enter the semester fee"<<endl;
	cin >> sf;
	tf = sf * 8;
	cout << "total degree fee is " << tf << endl;

	/*2-	Input Semester fee and discount in percentage given to user. 
	Display Discount per semester and Total Degree Fee.*/

	int sf, tf;
	float d,ds;
	cout << "enter the semester fee  and discount in percentage ";
		cin >> sf >> d;
		ds = sf*d/100;
		tf = (sf * 8) - ds*8;
		cout << "discount per semster  :::" << ds <<"\t"<<"fee of total degree is" << tf;


	/*3-	Input Semester Fee, Discount percentage and number of failed courses in degree. 
	Each fail course cost 12000.
	Display Discounted Semester Fee, Failed Coursed Amount and Total Degree Fee Given.*/


	int sf,tdf,fails,fcf,fc = 12000;
	float dp,dsf;
	cout<<"enter the semester fee"<<endl;
	cin >> sf;
	cout<<"enter the discount"<<endl;
	cin >> dp;
	cout<<"enter the failed coured"<<endl;
	cin >> fails;
	
	fcf = fails*fc;
	dsf = sf-(sf*dp / 100);
	tdf = dsf * 8;
	cout << "failed coursed fee will be " << fcf << endl;
	cout << "discounted semester  fee will be " << dsf << endl;
	cout << "total dergree fee will be " << tdf << endl;

	/*4-	Input Time in hours, minutes and seconds (separately) from user. 
	Convert and display time in seconds.*/

	float h, m, s;
	cout << "enter the time hours :" << endl;
	cin >> h;
	cout << "enter the time in minutes :" << endl;
	cin >> m;
	cout << "enter the time in seconds :" << endl;
	cin >> s;
	int th = h * 60;
	int tm = m * 60;
	int totalins = th + tm + s;
	cout << "time in seconds" << totalins << endl;

	/*5-	Input Two Times in hours, minutes and seconds.
	Add both times and display total Seconds in both times.*/

	float h,h1, m,m1, s,s1;
	cout << "enter the time hours :" << endl;
	cin >> h>>h1;
	cout << "enter the time in minutes :" << endl;
	cin >> m>>m1;
	cout << "enter the time in seconds :" << endl;
	cin >> s>>s1;
	int th = (h * 60)+ (h1 * 60);
	int tm = (m * 60)+ (m1 * 60);
	int ts = s + s1;
	int totalins = th + tm + ts;
	cout << "time in seconds" << totalins << endl;

	/*6-	Input time in minutes it takes you to reach BIIT from home. 
	Display how many seconds will it take to reach BIIT.*/

	int min;
	cout << "enter time in minutes" << endl;
	cin >> min;
	int s = min * 60;
	cout << "time in second to reach biit form home : " << s << endl;


	/*7-	Input Basic monthly salary, extra monthly hours he has worked, 
	Number of holidays he has taken. Number of extra projects he has done yearly, 
	his tax percentage on basic salary, his bonus percentage on his whole yearly income without tax.
	Calculate and display his Yearly Basic Salary, Yearly Extra Work Amount,
	Holidays deduction (1000 per holiday), Total Project Bonus (25000 per project), Total Yearly Income, 
	Total Bonus Yearly, Yearly Tax amount on Basic salary And final take home amount.
	NOTE: Hourly rate of extra work is 1500 per hour.*/

	int bms, emh, nh, npy ;
	float tpbs, bopwyiwot;
	int ybs, yewa, hd, tpy, tyi, tby, ytab, ftha;
	cout << "enter you basic salary : " << endl;
	cin >> bms;
	cout << "enter montly hours worked extra : " << endl;
	cin >> emh;
	cout << "enter  number of holidays takens : " << endl;
	cin >> nh;
	cout << "enter number of extra project done yearly : " << endl;
	cin >> npy;
	cout << "enter the tax percentage on basic salary :" << endl;
	cin >> tpbs;
	cout << "bonus percentage on his whole yearly income without tax : " << endl;
	cin >> bopwyiwot;

	ybs = bms * 12;        //yearly basic sal
	yewa = (emh * 1500);      //extra worked amount
	hd = nh * 1000;           // holiday decdut             
	 tpy = npy * 25000;       // yearly project ampu
	tyi = ybs + yewa*12 - hd + tpy;   //totaly early income
	tby = (ybs*bopwyiwot / 100);      // bouns 
	ytab = (bms*tpbs/100) *12;        // tax on basic sal
	ftha = tyi-ytab ;                 // fianl take home
	
	cout<<"your yearly basic salary is : " <<ybs<<endl;
	cout<<"your  monhtly extra worked amount is : " <<yewa<<endl;
	cout<<"your hoilday deduction is : " <<hd<<endl;
	cout<<"your  total  progect pay  is : " <<tpy<<endl;
	cout<<"your total  yearly  pay is : " <<tyi<<endl;
	cout<<"your total bonus is : " <<tby<<endl;
	cout<<"your yearly tax on basic salary : " <<ytab<<endl;
	cout<<"you final amount you take home : " <<ftha<<endl;























	system("pause");
}