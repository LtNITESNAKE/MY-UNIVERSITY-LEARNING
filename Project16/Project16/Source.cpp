#include<iostream>
using namespace std;
struct Result { int roll, marks; };
void copy(Result mainarr[], int sizeofmain, Result subarr[], int sizeofsub, char type_arr)
{
	int j = 0;
	if (type_arr == 'P')
	{
		for (int i = 0; i < sizeofmain; i++)
		{
			for (; j < sizeofsub;)
			{
				if (mainarr[i].marks >= 50)
				{
					subarr[j] = mainarr[i];
					j++;
				}
				break;
			}
		}
	}
	else {

		for (int i = 0; i < sizeofmain; i++)
		{
			for (; j < sizeofsub;)
			{
				if (mainarr[i].marks < 50)
				{
					subarr[j] = mainarr[i];
					j++;
				}
				break;
			}
		}
	}











}