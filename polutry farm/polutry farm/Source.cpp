#include<iostream>
#include<string>
using namespace std;

struct CustomerInfo
{
	string name;
	string phoneNumber;
	string address;
};

struct PoultryFarm
{
	int eggPrice = 40;
	int kiloBajra = 120;
	int kgHen = 450;
	int maxCapacity = 500;
	int currentHens = maxCapacity;
	int currentFoodStock = 0;
};

struct Purchase
{
	int hensQuantity;
	int foodQuantity;
	int eggsQuantity;
	string date;
	string time;
	CustomerInfo customer;
};

void displayRemainingHens(int remainingHens)
{
	cout << "Your remaining hens are: " << remainingHens << endl;
}

void displayBill(int bill)
{
	cout << "Your total bill is: " << bill << endl;
}

int calculateBill(const PoultryFarm& farm, const Purchase& purchase)
{
	int henBill = purchase.hensQuantity * farm.kgHen;
	int eggBill = purchase.eggsQuantity * farm.eggPrice;
	int bajraBill = purchase.foodQuantity * farm.kiloBajra;

	return henBill + eggBill + bajraBill;
}

Purchase inputPurchase()
{
	Purchase purchase;
	cout << "Enter the quantity of hens: ";
	cin >> purchase.hensQuantity;

	cout << "Enter the quantity of food (in kg): ";
	cin >> purchase.foodQuantity;

	cout << "Enter the quantity of eggs: ";
	cin >> purchase.eggsQuantity;

	cout << "Enter time when purchased (hours:min) ";
	cin >> purchase.time;

	cout << "Enter date When purchased (date/month/year) ";
	cin >> purchase.date;

	return purchase;
}

CustomerInfo inputCustomerInfo()
{
	CustomerInfo customer;

	cout << "Enter your name: ";
	cin >> customer.name;

	cout << "Enter your phone number: ";
	cin >> customer.phoneNumber;

	cout << "Enter your address: ";
	cin.ignore();  // Ignore the newline character left in the buffer
	getline(cin, customer.address);  // Use getline to input the entire address

	return customer;
}

void weeklyRefill(PoultryFarm& farm)
{
	cout << "Weekly Refill:\n";
	cout << "Enter the quantity of hens to add: ";
	int addedHens;
	cin >> addedHens;

	cout << "Enter the quantity of food to refill (in kg): ";
	int addedFood;
	cin >> addedFood;

	farm.currentHens += addedHens;
	farm.currentFoodStock += addedFood;

	cout << "Weekly refill completed.\n";
}

void onlineDelivery(PoultryFarm& farm)
{
	cout << "Online Delivery System:\n";

	CustomerInfo customer = inputCustomerInfo();

	cout << "Enter the quantity of hens to buy: ";
	int boughtHens;
	cin >> boughtHens;

	if (boughtHens > farm.currentHens)
	{
		cout << "Not enough hens available for purchase.\n";
		return;
	}

	farm.currentHens -= boughtHens;

	
	Purchase purchase = inputPurchase();
	purchase.customer = customer;  
	int totalBill = calculateBill(farm, purchase);

	cout << "\nPurchase Details:\n";
	cout << "Customer Name: " << customer.name << "\n";
	cout << "Phone Number: " << customer.phoneNumber << "\n";
	cout << "Address: " << customer.address << "\n";
	cout << "Quantity of Hens Bought: " << boughtHens << "\n";
	displayBill(totalBill);
	cout << "Purchase completed.\n";
}

void searchByDate(const Purchase purchases[], int numPurchases, const string& date, PoultryFarm& farm)
{
	cout << " Date " << date << ":\n";
	bool found = false;

	for (int i = 0; i < numPurchases; ++i)
	{
		if (purchases[i].date == date)
		{
			const Purchase& purchase = purchases[i];
			cout << "Customer Name: " << purchase.customer.name << "\n";
			cout << "Phone Number: " << purchase.customer.phoneNumber << "\n";
			cout << "Address: " << purchase.customer.address << "\n";
			cout << "Quantity of Hens Bought: " << purchase.hensQuantity << "\n";
			cout << "Total Bill: " << calculateBill(farm, purchase) << "\n\n";
			cout << " Date " << purchase.date << "\n";
			cout << " Time " << purchase.time << "\n";

			found = true;
		}
	}

	if (!found)
	{
		cout << "No purchases found for the given date.\n";
	}
}


int main()
{
	const int MAX_PURCHASES = 100;
	Purchase purchases[MAX_PURCHASES];
	int numPurchases = 0;
	const int MENU_EXIT = 7;
	PoultryFarm farm;
	int choice;

	do
	{
		cout << " \t\t\t\t  Welcome to APNA POULTRY FARM.\n Menu:\n";
		cout << "1. Purchase\n";
		cout << "2. Display remaining hens\n";
		cout << "3. Search by date\n";
		cout << "4. Display farm information\n";
		cout << "5. Weekly Refill\n";
		cout << "6. Online Delivery\n";
		cout << "7. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			Purchase purchase = inputPurchase();
			// Validate max capacity
			if (purchase.hensQuantity > farm.maxCapacity)
			{
				cout << "Not enough hens now. Enter valid capacity of hens: ";
				cin >> purchase.hensQuantity;
			}

			int remainingHens = farm.currentHens - purchase.hensQuantity;
			displayRemainingHens(remainingHens);

			purchase.customer = inputCustomerInfo();

			int totalBill = calculateBill(farm, purchase);
			displayBill(totalBill);
			purchases[numPurchases++] = purchase;  // Store the purchase
			break;
		}
		case 2:
			// Display remaining hens
			displayRemainingHens(farm.currentHens);
			break;
		case 3:
		{
			string date;
			cout << "Enter date to search customers: ";
			cin >> date;
			searchByDate(purchases, numPurchases, date, farm);
			break;
		}
		case 4:
			// Display farm information
			cout << "Farm Information:\n";
			cout << "Egg Price: " << farm.eggPrice << "\n";
			cout << "Bajra Price (per kg): " << farm.kiloBajra << "\n";
			cout << "Hen Price (per kg): " << farm.kgHen << "\n";
			break;
		case 5:
			// Weekly Refill
			weeklyRefill(farm);
			break;
		case 6:
			// Online Delivery System
			onlineDelivery(farm);
			break;
		case MENU_EXIT:
			cout << " ALLAH HAFIZ.\n";
			break;
		default:
			cout << "Invalid choice. Please enter a valid option.\n";
		}

	} while (choice != MENU_EXIT);

	return 0;
}
