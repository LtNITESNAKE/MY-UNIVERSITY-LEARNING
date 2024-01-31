#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

struct Customer
{
	int id;
	string name;
	string contactNumber;
};

struct Destination
{
	int id;
	string name;
	float costPerDay;
	float adultFoodCost;
	float adultSeatsCost;
	float childFoodCost;
	float childSeatsCost;
	float hotelCost;
};

struct Booking
{
	int id;
	int customerId;
	int destinationId;
	int numAdults;
	int numChildren;
	int durationInDays;
	float totalCost;
	float foodCost;
	float seatsCost;
	float hotelCost;
	string date;
	// add more fields if you need
};

void menus()
{
	cout << "\n--- Wellcome  to  Attock  Travelers ---\n\t--- How can I help You ---\n";
	cout << "\nOur Menu is:\n";
	cout << "1. Make Booking\n";
	cout << "2. Display Bookings\n";
	cout << "3. Generate Bill\n";
	cout << "4. Search Customer by Booking ID\n";
	cout << "5. Search by Date\n";
	cout << "6. Exit\n";
	cout << "Enter your choice: ";
}
bool isValidName(const string& name)
{
	// it check if only alphabet characters are entered or not
	for (char c : name)
	{
		if (!isalpha(c))
		{
			return false;
		}
	}
	return true;
}

bool isValidContactNumber(const string& contactNumber)
{
	// it check if only digits are entered or not
	for (char c : contactNumber)
	{
		if (!isdigit(c))
		{
			return false;
		}
	}
	return true;
}

void makeBooking(Booking bookings[], int& numBookings, const int MAX_BOOKINGS, int& bookingIdCounter,
	Customer customers[], int numCustomers,
	const Destination destinations[], const int numDestinations, const int& MAX_CUSTOMERS,
	int customerIdCounter)
{
	if (numBookings < MAX_BOOKINGS)
	{

		Booking booking = {};
		booking.id = bookingIdCounter++;



		if (booking.customerId == 0)
		{
			cout << "Enter customer name: ";
			cin.ignore();
			getline(cin, customers[numCustomers].name);


			while (!isValidName(customers[numCustomers].name))
			{
				cout << "Invalid name. Only alphabetic characters are allowed. ";
				cin.ignore();
				getline(cin, customers[numCustomers].name);
			}

			cout << "Enter contact number: ";
			cin >> customers[numCustomers].contactNumber;


			while (!isValidContactNumber(customers[numCustomers].contactNumber))
			{
				cout << "Invalid contact number. Only digits are allowed. ";
				cin >> customers[numCustomers].contactNumber;
			}

			customers[numCustomers++].id = customerIdCounter++;
		}

		booking.customerId = customerIdCounter;
		// it display destinations 
		cout << "Available Destinations:" << endl;
		for (int i = 0; i < numDestinations; ++i)
		{
			cout << destinations[i].id << ". " << destinations[i].name << endl;
		}


		cout << "Enter destination ID(from top list): ";
		cin >> booking.destinationId;
		while (booking.destinationId > 15)
		{
			cout << "Invalid option. Enter again." << endl;
			cin >> booking.destinationId;
		}

		// enter your trip'duration
		cout << "Enter duration (in days): ";
		cin >> booking.durationInDays;

		// are U with family or not
		char travelWithFamily;
		cout << "Are you traveling with family? (y/n): ";
		cin >> travelWithFamily;

		if (travelWithFamily == 'y' || travelWithFamily == 'Y')
		{

			cout << "Enter the number of adults: ";
			cin >> booking.numAdults;

			cout << "Enter the number of children: ";
			cin >> booking.numChildren;
		}
		else
		{

			booking.numAdults = 1;
			booking.numChildren = 0;
		}
		cout << "Enter date.(YYYY-MM-DD):";
		cin >> booking.date;
		// calculate total cost 
		booking.totalCost = booking.durationInDays * (destinations[booking.destinationId - 1].costPerDay + destinations[booking.destinationId - 1].adultFoodCost + destinations[booking.destinationId - 1].adultSeatsCost + destinations[booking.destinationId - 1].hotelCost);

		// it set predefined costs for additional services based on destination
		booking.foodCost = (booking.numAdults * destinations[booking.destinationId - 1].adultFoodCost) +
			(booking.numChildren * destinations[booking.destinationId - 1].childFoodCost);

		booking.seatsCost = (booking.numAdults * destinations[booking.destinationId - 1].adultSeatsCost) +
			(booking.numChildren * destinations[booking.destinationId - 1].childSeatsCost);

		booking.hotelCost = booking.numAdults * destinations[booking.destinationId - 1].hotelCost;
		// you can more code for additional services if needed

		bookings[numBookings++] = booking;

		cout << "Booking made successfully. Booking ID: " << booking.id << endl;
	}
	else
	{
		cout << "Maximum limit reached for bookings." << endl;
	}
}

void generateBill(Booking bookings[], int& numBookings, Customer customers[], int numCustomers, Destination destinations[], int numDestinations) {
	if (numBookings == 0) {
		cout << "No bookings available. Make booking first." << endl;
		return;
	}

	cout << "Enter Booking ID to generate bill: ";
	int bookingId;
	cin >> bookingId;

	bool found = false;
	for (int i = 0; i < numBookings; ++i) {
		if (bookings[i].id == bookingId) {
			found = true;
			int j = i;
			// it display the bill details
			cout << "----- Booking Bill -----" << endl;
			cout << "Customer Name: " << customers[j].name << endl;
			cout << "Destination: " << destinations[bookings[i].destinationId - 1].name << endl;
			cout << "Duration (in days): " << bookings[i].durationInDays << endl;
			cout << "Food Cost: " << bookings[i].foodCost*bookings[i].durationInDays << endl;
			cout << "Seats Cost: " << bookings[i].seatsCost << endl;
			cout << "Hotel Cost: " << bookings[i].hotelCost*bookings[i].durationInDays << endl;
			cout << "Total Cost: " << bookings[i].totalCost << endl;
			cout << "--------------------------" << endl;

			// it take payment from the user
			float userAmount;
			cout << "Enter the amount: ";
			cin >> userAmount;
			int newa;
			while (userAmount < bookings[i].totalCost)
			{
				cout << "Enter " << (bookings[i].totalCost - userAmount) << " more" << endl;
				cout << "Enter the amount: ";
				cin >> newa;
				userAmount += newa;
			}

			cout << "Amount Paid: " << userAmount << endl;
			cout << "Change: " << (userAmount - bookings[i].totalCost) << endl;
			cout << "Payment Successful!\nThank You for Visiting." << endl;

			break;
		}
	}

	if (!found)
	{
		cout << "Booking ID not found." << endl;
	}
}

void displayBookings(const Booking bookings[], int numBookings,
	const Customer customers[], int numCustomers,
	const Destination destinations[], int numDestinations)
{
	if (numBookings == 0)
	{
		cout << "No bookings available. Make booking first." << endl;
		return;
	}

	cout << "All Bookings:" << endl;
	for (int i = 0; i < numBookings; ++i)
	{
		cout << "Booking ID: " << bookings[i].id << endl;
		cout << "Destination ID: " << bookings[i].destinationId << " " << destinations[bookings[i].destinationId - 1].name << endl;
		cout << "Duration (in days): " << bookings[i].durationInDays << endl;
		cout << "Food Cost: " << bookings[i].foodCost*bookings[i].durationInDays << endl;
		cout << "Seats Cost: " << bookings[i].seatsCost << endl;
		cout << "Hotel Cost: " << bookings[i].hotelCost*bookings[i].durationInDays << endl;
		cout << "Total Cost: " << bookings[i].totalCost << endl;	// you can add more code for displaying other additional services if needed
		cout << "--------------------------" << endl;
	}
}
void searchBookingsByDate(const Booking bookings[], int numBookings, const string& searchDate)
{
	bool found = false;



	for (int i = 0; i < numBookings; ++i)
	{
		if (bookings[i].date == searchDate)
		{
			found = true;
			cout << "Bookings on " << searchDate << ":" << endl;
			cout << "Booking ID: " << bookings[i].id << endl;
			cout << "Destination ID: " << bookings[i].destinationId << endl;
			cout << "Duration (in days): " << bookings[i].durationInDays << endl;
			cout << "Total Cost: " << bookings[i].totalCost << endl;
			cout << "--------------------------" << endl;
		}
		else
		{
			cout << "No bookings found on " << searchDate << "." << endl;
		}
	}
}
void searchCustomerByBookingId(const Booking bookings[], int numBookings, const Customer customers[], int numCustomers) {
	if (numBookings == 0)
	{
		cout << "No bookings available. Make booking first." << endl;
		return;
	}

	cout << "Enter Booking ID to search customer: ";
	int bookingId;
	cin >> bookingId;

	bool found = false;
	for (int i = 0; i < numBookings; i++)
	{
		if (bookings[i].id == bookingId)
		{
			found = true;
			int j = i;
			int customerId = bookings[i].customerId;
			cout << "----- Customer Details -----" << endl;
			cout << "Customer ID: " << customers[j].id << endl;
			cout << "Customer Name: " << customers[j].name << endl;
			cout << "Contact Number: " << customers[j].contactNumber << endl;
			cout << "--------------------------" << endl;
			break;
		}
	}

	if (!found)
	{
		cout << "Booking ID not found." << endl;
	}
}


void  main()
{
	const int MAX_CUSTOMERS = 100;
	const int MAX_DESTINATIONS = 20; // you can increase to accommodate more destinations
	const int MAX_BOOKINGS = 100;

	Customer customers[MAX_CUSTOMERS];
	Destination destinations[MAX_DESTINATIONS];
	Booking bookings[MAX_BOOKINGS];

	int numCustomers = 0;
	int numDestinations = 0;
	int numBookings = 0;

	int customerIdCounter = 1;
	int destinationIdCounter = 1;
	int bookingIdCounter = 1;

	// id   name     daycost  Afood  Aseat   Cfood  Cseat  hotelcost
	Destination karachi = { 1, "Karachi", 6500.0, 450.0, 3000.0, 450.0, 3000.0, 1000.0 };
	Destination lahore = { 2, "Lahore", 6000.0, 450.0, 1200.0, 450.0, 1200.0, 1000.0 };
	Destination islamabad = { 3, "Islamabad", 5000.0, 450.0, 1400.0, 450.0, 1400.0, 1000.0 };
	Destination peshawar = { 4, "Peshawar", 65000.0, 450.0, 1800.0, 450.0, 1800.0, 1000.0 };
	Destination quetta = { 5, "Quetta", 5500.0, 450.0, 3000.0, 450.0, 3000.0, 1000.0 };
	Destination faisalabad = { 6, "Faisalabad", 7000.0, 450.0, 2000.0,4520.0, 2000.0, 1000.0 };
	Destination multan = { 7, "Multan", 6250.0, 450.0, 2100.0, 450.0, 2100.0, 1000.0 };
	Destination rawalpindi = { 8, "Rawalpindi", 7550.0, 450.0, 1500.0, 450.0, 1500.0, 1000.0 };
	Destination gujranwala = { 9, "Gujranwala", 5500.0, 450.0, 1900.0, 450.0, 1900.0, 1000.0 };
	Destination sialkot = { 10, "Sialkot", 6000.0, 450.0, 2100.0, 450.0, 2100.0, 1000.0 };
	Destination murree = { 11, "Murree", 5500.0, 450.0, 2500.0, 450.0, 2500.0, 1000.0 };
	Destination hyderabad = { 12, "Hyderabad", 6500.0, 450.0, 2800.0, 450.0, 2800.0, 1000.0 };
	Destination attock = { 13, "Attock", 5000.0, 450.0, 1300.0, 450.0, 1300.0, 1000.0 };
	Destination jehlum = { 14, "Jehlum", 6000.0, 450.0, 2000.0, 450.0, 2000.0, 1000.0 };
	Destination mianwali = { 15, "Mianwali", 6500.0, 450.0, 1650.0, 450.0, 1650.0, 1000.0 };

	destinations[numDestinations++] = karachi;
	destinations[numDestinations++] = lahore;
	destinations[numDestinations++] = islamabad;
	destinations[numDestinations++] = peshawar;
	destinations[numDestinations++] = quetta;
	destinations[numDestinations++] = faisalabad;
	destinations[numDestinations++] = multan;
	destinations[numDestinations++] = rawalpindi;
	destinations[numDestinations++] = gujranwala;
	destinations[numDestinations++] = sialkot;
	destinations[numDestinations++] = murree;
	destinations[numDestinations++] = hyderabad;
	destinations[numDestinations++] = attock;
	destinations[numDestinations++] = jehlum;
	destinations[numDestinations++] = mianwali;

	int menuChoice;
	do
	{
		system("cls");
		menus();
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			makeBooking(bookings, numBookings, MAX_BOOKINGS, bookingIdCounter, customers, numCustomers, destinations, numDestinations, MAX_CUSTOMERS,
				customerIdCounter);
			system("pause");
			break;
		case 2:
			displayBookings(bookings, numBookings, customers, numCustomers, destinations, numDestinations);
			system("pause");
			break;
		case 3:
			generateBill(bookings, numBookings, customers, numCustomers, destinations, numDestinations);
			system("pause");
			break;
		case 4:
			searchCustomerByBookingId(bookings, numBookings, customers, numCustomers);
			system("pause");
			break;
		case 5:
		{
			string searchDate;
			cout << "Enter date (YYYY-MM-DD): ";
			cin >> searchDate;
			searchBookingsByDate(bookings, numBookings, searchDate);
			system("pause");
			break;
		}
		case 6:
			cout << "Exiting the program." << endl;
			break;
		default:
			cout << "Invalid choice. Please enter a valid option." << endl;
			cout << "Enter your choice: ";
			cin >> menuChoice;
			system("pause");
			break;
		}

	} while (menuChoice != 6);


	system("pause");
}