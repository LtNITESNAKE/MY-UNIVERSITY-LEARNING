#include <iostream>
using namespace std;

int findSecondOccurrence(int x, int arr[], int n) 
{
	int firstOccurrence = 0;
	int secondOccurrence = 0;
	int i = 0;  // Initialize the index

				// Search for the first occurrence of x
	while (i < n) {
		if (x == arr[i]) 
		{
			if (firstOccurrence == 0) {
				firstOccurrence = i + 1;  // Adjusting for 1-based indexing
			}
			else {
				secondOccurrence = i + 1;  // Adjusting for 1-based indexing
				break;
			}
		}
		i++;
	}

	// Determine the result based on the occurrences
	int location;
	if (secondOccurrence != 0)
	{
		location = secondOccurrence;
	}
	else if (firstOccurrence != 0)
	{
		location = firstOccurrence;
	}
	else {
		location = 0;
	}

	// Return the result
	return location;  // location is the subscript of the term that equals x, or is 0 if x is not found or occurs only once
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 12, 9, 11, 3 };
	int targetNumber = 3;

	int result = findSecondOccurrence(targetNumber, arr, sizeof(arr) / sizeof(arr[0]));

	if (result != 0) 
	{
		cout << "The location of the second occurrence (or first occurrence if it appears only once) of " << targetNumber << " is: " << result << endl;
	}
	else
	{
		cout << targetNumber << " not found in the array." << endl;
	}

	system("pause");
}


/*Procedure findSecondOccurrence(x: integer, a1, a2, . . . , an: distinct integers)
    firstOccurrence := 0
    secondOccurrence := 0
    i := 1  // Initialize the index

    // Search for the first occurrence of x
    while (i ≤ n)
        if x = ai
            if firstOccurrence = 0
                firstOccurrence := i
            else
                secondOccurrence := i
                break

        i := i + 1

    // Determine the result based on the occurrences
    if secondOccurrence ≠ 0
        location := secondOccurrence
    elif firstOccurrence ≠ 0
        location := firstOccurrence
    else
        location := 0

    // Return the result
    return location  // location is the subscript of the term that equals x, or is 0 if x is not found or occurs only once
	*/