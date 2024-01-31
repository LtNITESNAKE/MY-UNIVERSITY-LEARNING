#include<iostream>
using namespace std;

const int m = 20;

struct Item {
	int code;
	int amount;
	float price;
};

void showItems(Item items[], int last) {
	for (int k = 0; k < last; k++) {
		cout << "\nCODE:" << items[k].code << "\t";
		cout << "\nAMOUNT:" << items[k].amount << "\t";
		cout << "\nPRICE:" << items[k].price << endl;
	}
}

void addOldItem(Item items[], int& last) {
	int code1, k;
	float price1;
	cout << "\nEnter item code:";
	cin >> code1;
	cout << "\nEnter item price:";
	cin >> price1;

	// Check if the item is already in the list
	for (k = 0; k < last; k++) {
		if (code1 == items[k].code) {
			items[k].amount += 1;
			items[k].price = price1;
			cout << "Item updated successfully.\n";
			return; // Exit the function if the item is found and updated
		}
	}

	// If the item is not in the list, add it
	items[last].code = code1;
	items[last].amount = 1;
	items[last].price = price1;
	last++;
	cout << "Item added successfully.\n";
}

void addNewItem(Item items[], int& last) {
	int code1, amount1;
	float price1;
	cout << "\nEnter item code:";
	cin >> code1;
	cout << "\nEnter amount of that item:";
	cin >> amount1;
	cout << "\nEnter item price:";
	cin >> price1;

	items[last].code = code1;
	items[last].amount = amount1;
	items[last].price = price1;
	last++;
	cout << "Item added successfully.\n";
}

void sellItem(Item items[], int& j) {
	int code;
	float price;
	cout << "\nEnter product code:\n";
	cin >> code;

	// Find the item in the array
	int p;
	for (p = 0; p < j; p++) {
		if (code == items[p].code && items[p].amount > 0) {
			// Update the amount and increment the total sold count
			items[p].amount -= 1;
			j++;
			cout << "Item sold successfully.\n";
			return;
		}
	}

	cout << "Item not found or out of stock.\n";
}

float calculateTotalSold(Item items[], int j) {
	float totalSold = 0;
	for (int p = 0; p < j; p++) {
		totalSold += items[p].price;
	}
	return totalSold;
}

void showTotalItemsSold(Item items[], int j) {
	cout << "\n\nITEMS SOLD:\n";
	for (int i = 0; i < j; i++) {
		cout << "ITEM CODE:" << items[i].code << "\tITEM PRICE:" << items[i].price << endl;
	}
}

void menu() {
	cout << "\nENTER YOUR CHOICE:\n";
	cout << "\n1. Show all stored items:";
	cout << "\n2. Add an old item:";
	cout << "\n3. Add a new item:";
	cout << "\n4. Sell an item:";
	cout << "\n5. Total sold:";
	cout << "\n6. Show total items sold:";
	cout << "\n7. Quit";
}

int main() {
	Item items[10];
	int last = 5; // Initial number of items
	static int j = 0;

	int x, i = 0, p, s = 0;

	do {
		menu();

		cin >> x;

		switch (x) {
		case 1: showItems(items, last);
			break;
		case 2: addOldItem(items, last);
			break;
		case 3: addNewItem(items, last);
			break;
		case 4: sellItem(items, j);
			i++;
			break;
		case 5: s = calculateTotalSold(items, j);
			cout << "Total Sold: " << s << "TK.\n";
			break;
		case 6: showTotalItemsSold(items, j);
			break;
		case 7: break;
		}
	} while (x != 7);

	return 0;
}
