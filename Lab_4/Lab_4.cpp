// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int beginningInventory = 50;

	string foodName;
	cout << "Pick a food item: ";
	cin >> foodName;
	char itemCode;
	cout << "Enter item code: ";
	cin >> itemCode;
	int itemQuantity;
	cout << "Enter item quantity: ";
	cin >> itemQuantity;
	double unitPrice;
	cout << "Enter unit price: $";
	cin >> unitPrice;
	char isMember;
	cout << "Are you a member? (Y/N): ";
	cin >> isMember;

	cout << setw(10) << "Receipt" << endl;
	if (isMember == 'Y' || isMember == 'y') {
		cout << setw(10) << "Food Item: " << foodName << endl;
		cout << setw(10) << "Item Code: " << itemCode << endl;
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
		cout << setw(10) << "Item Code: " << itemCode << endl;
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


