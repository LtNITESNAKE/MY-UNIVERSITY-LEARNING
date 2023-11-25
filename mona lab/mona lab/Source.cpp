#include<iostream>
using namespace std;
void main()
{
	    /*page42*/
		int ms, as, at;
		cout << "Enter your monthly salary: " << endl;
		cin >> ms;
		as = ms * 12;

		if (as <= 300000)
		{
			at = 0; 
		}
		else if (as > 300000 && as <= 600000)
		{
			at = 3000 + (as - 300000) * 1 / 100;
		}
		else if (as > 600000 && as <= 1000000) 
		{
			at = 5000 + (as - 600000) * 2 / 100;
		}
		else if (as > 1000000) 
		{
			at = as * 17 / 100;
		}

		cout << "Annual tax: " << at << endl;
		cout << "monthly tax : " << at / 12<<endl; 
	
	
		/*page 48*/
	 /*char ch;
	 cout << "enter a character";
	 cin >> ch;
	 if (ch == 'A' || ch == 'a')
	 {
		 cout << "vowel";
	 }
	 else if (ch == 'E' || ch == 'e')
	 {
		 cout << "vowel";
	 }
	  else if (ch == 'i' || ch == 'I')
	 {
		 cout << "vowel";
	 }
	 else if (ch == 'o' || ch == 'O')
	 {
		 cout << "vowel";
	 }
	  else if (ch == 'u' || ch == 'U')
	 {
		 cout << "vowel";
	 }
	  else {
		  cout << "not a vowel";
	  }*/
















	system("pause");
}