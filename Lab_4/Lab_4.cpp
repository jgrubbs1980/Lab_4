// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

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
	cout << setw(10) << "Food Item: " << foodName << endl;
	cout << setw(10) << "Item Code: " << itemCode << endl;
	cout << setw(10) << "Item Quantity: " << itemQuantity << endl;
	cout << setw(10) << fixed << setprecision(2) <<"Unit Price: $" << unitPrice << endl;
		

}


