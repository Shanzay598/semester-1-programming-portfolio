#include <iostream>
using namespace std;
int main()
{
	int choice, quantity, unitPrice, Subtotal = 0, Total = 0;
	string itemName;
	cout << "MENU:" << endl;
	cout << "1.Burger" << endl;
	cout << "2. Pizza Slice" << endl;
	cout << "3.Sandwich" << endl;
	cout << "4.Coffee" << endl;
	cout << "Enter 0 to finish and get a grand total" << endl;
	cout << "Enter choice";
	cin >> choice;
	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			itemName = "Burger";
			unitPrice = 250;
			break;
		case 2:
			itemName = "Pizza Slice";
			unitPrice = 300;
			break;
		case 3:
			itemName = "Sandwich";
			unitPrice = 180;
			break;
		case 4:
			itemName = "Coffee";
			unitPrice = 120;
			break;
		default:
			cout << "An invalid choice is entered";
			

		}
		cout << "Enter Quantity";
		cin >> quantity;
		if (quantity <= 0)
		{
			cout << "Invalid quantity";
			cout << "Enter choice";
			cin >> choice;
		}
		else
		{
			Subtotal = Subtotal + (unitPrice * quantity);
			cout << "Item name=" << itemName << endl;
			cout << "Unit Price=" << unitPrice << endl;
			cout << "Quantity=" << quantity << endl;
			cout << "Subtotal=Rs." << Subtotal << endl;
			cout << "Enter choice" << endl;
			cin >> choice;


		}
	}
   
   
	Total = Total + Subtotal;
	cout << "Grand Total= Rs." << Total << endl;
	 


	return 0;
	

}
