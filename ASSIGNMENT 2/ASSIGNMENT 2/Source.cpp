#include<iostream>
using namespace std;
void main()
{
	/*Program 1: 
	Input five characters from user. Assume that these five characters are characters of password and 
	print strength of a password. If all characters are alphabet print 'Low strength'.
	If all characters are digits print 'Low strength' 
    If some characters are digits and some are alphabets print 'Medium strength'.
    If some characters are digits, some are alphabets and some are other than alphabets 
    and digits print 'Strong Strength'*/

	/*char ch1, ch2, ch3, ch4, ch5;
	int digitcount = 0;                                             
	int uppercasecount = 0;
	int lowercasecount = 0;
	int specialcount = 0;

	cout << "enter 5 characters: ";
	cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;

	if (ch1 >= '0' && ch1 <= '9') 
		digitcount++;
	
	else if (ch1 >= 'A' && ch1 <= 'Z') 
		uppercasecount++;
	
	else if (ch1 >= 'a' && ch1 <= 'z') 
		lowercasecount++;
	
	else 
		specialcount++;
	

	if (ch2 >= '0' && ch2 <= '9') 
		digitcount++;
	
	else if (ch2 >= 'A' && ch2 <= 'Z') 
		uppercasecount++;
	
	else if (ch2 >= 'a' && ch2 <= 'z') 
		lowercasecount++;
	
	else
		specialcount++;
	

	if (ch3 >= '0' && ch3 <= '9') 
		digitcount++;
	
	else if (ch3 >= 'A' && ch3 <= 'Z') 
		uppercasecount++;
	
	else if (ch3 >= 'a' && ch3 <= 'z') 
		lowercasecount++;
	
	else 
		specialcount++;
	

	if (ch4 >= '0' && ch4 <= '9') 
		digitcount++;
	
	else if (ch4 >= 'A' && ch4 <= 'Z') 
		uppercasecount++;
	
	else if (ch4 >= 'a' && ch4 <= 'z') 
		lowercasecount++;
	
	else 
		specialcount++;
	

	if (ch5 >= '0' && ch5 <= '9') 
		digitcount++;
	
	else if (ch5 >= 'A' && ch5 <= 'Z') 
		uppercasecount++;
	
	else if (ch5 >= 'a' && ch5 <= 'z') 
		lowercasecount++;
	
	else 
    	specialcount++;
	

	if ((digitcount >= 1) && (uppercasecount >= 1) && (lowercasecount >= 1) && (specialcount >= 1)) 
	
		cout << "strong strength" << endl;
	
	else if (digitcount >= 1 && lowercasecount >= 1 && uppercasecount >= 1) 
	
		cout << "medium strength" << endl;
	
	else 
		cout << "low strength" << endl;*/
	
     /*Program 2:  
	 Write a C++ program that Inputs a number from user and tell whether the number 
	 is Prime or not. (Loop is not allowed). */
	
	/*int num;
	cout << "Enter a number: ";
	cin >> num;

	int d2 = 2, d3 = 3, d5 = 5, d7 = 7;

	if (num == 2 || num == 3 || num == 5 || num == 7)
	{
		cout << " is a prime number." << endl;
	}
	else if (num % d2 == 0 || num % d3 == 0 || num % d5 == 0 || num % d7 == 0)
	{
		cout << " is not a prime number." << endl;
	}
	else 
	{
		cout<< " is a prime number." << endl;
		
	}*/
	 
		/*Program 3:
		Write a C++ program that inputs a 3 digit number and tell whether number is palindrome number or number. Palindrome numbers are those that reads same in straight and reverse order.  
        Hint: As we are talking about digit numbers only. A number who’s first and last digit is 
        same will be palindrome in case of 3 digit.*/

              /* int digit_3,first,secd,third,actual;
	           cout << "enter a three digit number" << endl;
	           cin >> digit_3;
	           actual = digit_3;
	           first = digit_3 / 100;
			   digit_3 = digit_3 % 100;
	            secd= digit_3 / 10;
	            third = digit_3 % 10;
	           int back = third * 100 + secd * 10 + first;
	           if (back == actual)
	           {
	           	cout << " is palindrome number \n";
	           }
	           else 
	           {
	           	cout << "is a number \n";*/
	           

    /*Program 4: 
	Input marks of 4 subjects along with total marks of each subject calculate percentage
	also print grade of student grading criteria is as follow. 
          Percentage greater than 80 is A+ 
          Percentage greater than 70 and less than 81 is A 
          Percentage greater than equal to 65 and less than equal to 70 is B 
          Percentage less than 65 and greater than  is 55 is C 
          Below 56 is F 
          */
 
        /*int ms1, ms2, ms3, ms4, ts1, ts2, ts3, ts4;
        cout<<"enter your first subject obtained marks and there total marks"<<endl;
        cin >> ms1 >> ts1;
        cout<<"enter your second subject obtained marks and there total marks"<<endl;
        cin >> ms2 >> ts2;
        cout<<"enter your third subject obtained marks and there total marks"<<endl;
        cin >> ms3 >> ts3;
        cout << "enter your fourth subject obtained marks and there total marks" << endl;
        cin >> ms4 >> ts4;
        
        float p = ((float)(ms1 + ms2 + ms3 + ms4) /( ts1 + ts2 + ts3 + ts4))*100;
        
        if (p > 80)
        {
        	cout << "your grade is A+" << endl;
        }
        else if (p > 70 && p<81)
        {
        	cout << "your grade is A" << endl;
        }
        else if (p >=65 && p<=70)
        {
        	cout << "your grade is B" << endl;
        }
        else if (p < 65 && p >= 55)
        {
        	cout << "your grade is C" << endl;
        }
         else 
        {

        	cout << "your grade is F ,,, work harder failer is the starting point to sucess " << endl;
        }*/

        /*Program 5:
		A student buys lab manuals for three subject PF, DB and Java. You have to input quantity of PF, DB and Java to be purchased by student.
		Input selling price of PF, DB and Java lab manuals. After that input whether student is from BIIT or not if user enters “b” (not case sensitive)
		it means student is from BIIT otherwise student is not from BIIT. Provide 20% discount to all BIIT students. Student from other institutes are provided
		5% discount if bill exceeds 30,000. You have to display Bill without discount, discount amount and bill after discount. */

              int  Qpf,Qdb,Qjava,sppf,spdb,spjava;
              
              cout<<"enter the quantity of the lab manual of PF"<<endl;
              cin >> Qpf;
              cout<<"enter the quantity of the lab manual of DB"<<endl;
              cin >> Qdb;
              cout<<"enter the quantity of the lab manual of JAVA"<<endl;
              cin >> Qjava;
              cout<<"enter the selling price of the lab manual of PF"<<endl;
			  cin >> sppf;                                   
              cout<<"enter the selling price of the lab manual of DB"<<endl;
              cin >> spdb;
              cout<<"enter the selling price of the lab manual of JAVA"<<endl;
              cin >> spjava;
              
              
              int tc = (Qpf*sppf) + (Qdb*spdb) + (Qjava*spjava);
              int dbii = (tc * 20 / 100);
              int dbiit = tc - dbii;
              int otherst = (tc * 5 / 100);
              int other = tc - otherst;
              
              char st;
              cout << "If you are from BIIT enter b and if you are not enter any other charater " << endl;
              cin >> st;
              
              if (st == 'B' || st == 'b')
              {
              	cout << "your bill without dicount" << tc << endl;
              	cout << "your dicount amount" << dbii << endl;
              	cout << "your bill with dicount" << dbiit << endl;
              }
              else if(tc>30000)
              {
              	cout << "your dicount amount" << otherst << endl;
              	cout << "your bill with dicount" << other << endl;
              	
              }
              else
              {
              	cout << "your bill is " << tc << endl;
              }

           /*Program 6:
		   Input a number from user. If number is even and not divisible by 5 and 3 display 
           “Even not divisible by 5 and 3”. If number is even and divisible by 5 but not by 3 display “Even divisible by 5 but not by 3”.
           If number is even and not divisible by 5 but divisible by 3 display “Even not divisible by 5 but divisible by 3”.
           If number not even tell whether it is divisible by 5 or by 3 or by both (only 1 message should be displayed).*/

                /*int n;
                cout << "Enter a number: ";
                cin >> n;
                
                if (n % 2 == 0 && n % 5 != 0 && n % 3 != 0) 
                {
                	cout << "Even, not divisible by 5 and 3" << endl;
                }
                else if (n % 2 == 0 && n % 5 == 0 && n % 3 != 0) 
                {
                	cout << "Even, divisible by 5 but not divisible by 3" << endl;
                }
                else if (n % 2 == 0 && n % 5 != 0 && n % 3 == 0)
                {
                	cout << "Even, not divisible by 5 but divisible by 3" << endl;
                }
                else if (n % 2 != 0)
                {
                	if (n % 5 == 0 && n % 3 == 0)
                	{
                		cout << "Divisible by both 5 and 3" << endl;
                	}
                	else if (n % 5 == 0) 
                	{
                		cout << "Divisible by 5" << endl;
                	}
                	else if (n % 3 == 0)
                	{
                		cout << "Divisible by 3" << endl;
                	}
                	
                }*/


        /*Program 7:
           BMI is used to broadly define different weight groups in adults 20 years old or older.
           The same groups apply to both men and women. The formula is BMI = kg/m2 where kg is a person’s weight in kilograms and m2 is their height in meters squared.
           You have to take input of height and weight, calculate BMI and Display Message Underweight, normal weight, over weight and obese using following.
           Underweight: BMI is less than 18.5 
                                           BMI Value 	Description 
                                           18.5 – 24.9 	Normal weight 
                                           25 – 29.9 	Over weight 
                                           >= 30 	Obese */

               /*int weight;
               float height;
               cout << "enter you weight in kg and height in meters" << endl;
               cin >> weight >> height;
               
               float bmi = weight / (height*height);
               if (bmi < 18.5)
               {
               	cout << "underweight";
                }
               else if (bmi >= 18.5 && bmi <= 24.9)
               {
               	cout << "Normal weight";
               }
               else if (bmi >= 25 && bmi <= 29.9)
               {
               	cout << "over weight";
               }
               else 
               {
               	cout << "obese";
               }*/

                  /* int sb, db;
                   cout << "Enter systolic blood pressure: ";
                   cin >> sb;
                   cout << "Enter diastolic blood pressure: ";
                   cin >> db;
                   
                   if (sb <= 90 && db <= 60) 
				   {
                   	cout << "Low blood pressure" << endl;
                   }
                   else if (sb <= 120 && db <= 80)
				   {
                   	cout << "Ideal blood pressure" << endl;
                   }
                   else if (sb <= 140 && db <= 90) 
				   {
                   	cout << "Pre-high blood pressure" << endl;
                   }
                   else 
				   {
                   	cout << "High blood pressure" << endl;
                   }*/


        /*Program 9:
          The admission criteria in BSCS and BSIT at BIIT is 45 percent marks in the intermediate with at least one subject 
          (Physics , math, statistic, Computer Science).The maximum age limit is 24. Develop a program which take input age, percentage as well as verification
          about subject studied. (Input for percentage is Float, for Age is integer and for Subject study is Character i.e. ‘Y’ for yes and ‘N’ for No). 
          If student satisfies admission criteria display message “You are eligible” otherwise display message you are not eligible.*/

            /*int age;
            float per;
            char stu;
            
            cout << "enter your age " << endl;
            cin >> age;
            cout << "enter your percentage for intermediate " << endl;
            cin >> per;
            cout <<"subject required (Physics ,math ,statistic,computer science) if you studied any of these \n"<< "\t enter y for yes and n for no" << endl;
            cin >> stu;
            
            if (age <= 24 && per >= 45 && (stu == 'Y' || stu == 'y'))
            {
            	cout << "you are eligible" << endl;
            }
            else {
            	cout << "you are not  eligible" << endl;
            }*/


              /*int amount, nom, ta;
              float profit = 0;
              
              cout << "Enter your amount: ";
              cin >> amount;
              
              cout << "Enter the number of months: ";
              cin >> nom;
              
              if (amount < 200000 || nom < 6)
              {
              	cout << "No PROFIT\t" << profit << endl;
              }
              else if (amount >= 200000 && amount < 400000 && nom >= 6 && nom <= 12)
              {
              	profit = (amount * 5 / 100);
              }
              else if (amount >= 200000 && amount < 400000 && nom > 12 && nom <= 24)
              {
              	profit = (amount * 7 / 100);
              }
              else if (amount >= 400000 && amount < 600000 && nom >= 6 && nom <= 12) 
              {
              	profit = (amount * 10 / 100);
              }
              else if (amount >= 400000 && amount < 600000 && nom > 12 && nom <= 24) 
              {
              	profit = (amount * 12 / 100);
              }
              else {
              	profit = (amount * 14 / 100);
              }
              
              ta = amount + profit;
              
              cout << "Profit will be\t" << profit << endl;
              cout << "Your amount after profit\t" << ta << endl;*/



















 system("pause");
}