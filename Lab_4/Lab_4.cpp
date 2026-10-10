// Lab_5.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int beginningInventory = 50;
	string foodName;
	string sizeName;
	int itemQuantity;
	double unitPrice;
	char isMember;


	cout << "---Menu---";
	cout << "Items";
	cout << fixed << setprecision(2);
	cout << setw(15) << "Small (s)";
	cout << setw(15) << "Medium (m)";
	cout << setw(15) << "Large (l)";
	cout << setw(18) << "-------------------------------------------------------------------------Fries" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Burger" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Pizza" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout <<	setw(18) << "Soda" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << "----------" << endl;

	cout << "Pick a food item: ";
	cin >> foodName;
	cout << "Pick a size, (s/m/l). ";
	cin >> sizeName;
	cout << "Enter item quantity: ";
	cin >> itemQuantity;
	cout << "Are you a member? (Y/N): ";
	cin >> isMember;

	if (foodName == "Pizza" || foodName == "pizza")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Burger" || foodName == "burger")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Fries" || foodName == "fries")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Soda" || foodName == "soda")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}


	cout << setw(10) << "Receipt" << endl;
	if (isMember == 'Y' || isMember == 'y') {
		cout << setw(10) << "Food Item: " << foodName << endl;
		cout << setw(10) << "Item Quantity: " << itemQuantity << endl;
		cout << setw(10) << fixed << setprecision(2) <<"Unit Price: $" << unitPrice << endl;
		double subtotal = itemQuantity * unitPrice;
		double discount = subtotal * 0.1; 
		double totalPrice = subtotal - discount;
		cout << setw(10) << "Subtotal: $" << subtotal << endl;
		cout << setw(10) << "Discount: $" << discount << endl;
		cout << setw(10) << "Total Price: $" << totalPrice << endl;
	}
	else {
		cout << setw(10) << "Food Item: " << foodName << endl;
		cout << setw(10) << "Item Quantity: " << itemQuantity << endl;
		cout << setw(10) << "Unit Price: $" << unitPrice << endl;
		double totalPrice = itemQuantity * unitPrice;
		cout << setw(10) << "Total Price: $" << totalPrice << endl;
	}
	cout << "Enter cashier notes: ";
	string cashierNotes;
	cin.ignore();
	getline(cin, cashierNotes);

	cout << "Ending Inventory: ";
	string endingInventory;
	cout << beginningInventory - itemQuantity << endl;

		

}


