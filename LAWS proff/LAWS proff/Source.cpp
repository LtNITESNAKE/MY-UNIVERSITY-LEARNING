#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// Function to calculate the second absorption law
void secondAbsorptionLaw(const unordered_set<int>& A, const unordered_set<int>& B)
{
	// Universal set
	unordered_set<int> U = A;
	U.insert(B.begin(), B.end());

	// A ∪ B
	unordered_set<int> A_union_B = A;
	A_union_B.insert(B.begin(), B.end());

	// A ∩ (A ∪ B)
	unordered_set<int> A_intersection_A_union_B;
	for (int element : A_union_B) {
		if (A.count(element) > 0) {
			A_intersection_A_union_B.insert(element);
		}
	}

	// Display the membership table
	cout << "U \t A \t B \t A ∪ B \t  A ∩ (A ∪ B)\n";
	for (int element : U) {
		cout << (A.count(element) > 0) << '\t';
		cout << (B.count(element) > 0) << '\t';
		cout << (A_union_B.count(element) > 0) << '\t';
		cout << (A_intersection_A_union_B.count(element) > 0) << '\n';
	}
}

int main() { 
	unordered_set<int> A = { 1, 2, 3 };
	unordered_set<int> B = { 3, 4, 5 };

	secondAbsorptionLaw(A, B);

	system("pause");
}
