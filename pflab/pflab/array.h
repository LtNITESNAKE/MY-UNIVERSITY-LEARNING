#include "iostream"
using namespace std;
namespace basicarray
{
	void input(int num[], int total)
	{
		for (int index = 0; index < total; index++)
		{
			cout << "Enter value number " << index + 1 << " ";
			cin >> num[index];
		}
	}
	void sortAscending(int num[], int size)
	{
		int minindex;
		int temp;
		for (int index = 0; index < size; index++)
		{
			minindex = index;
			for (int cindex = index + 1; cindex < size; cindex++)
			{
				if (num[minindex] > num[cindex])
				{
					minindex = cindex;
				}
			}
			temp = num[minindex];
			num[minindex] = num[index];
			num[index] = temp;
		}

	}

}
