//Captain-Price-TF-141

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include<limits>

using namespace std;

//global constant
const int MAX_CAPACITY = 50;

//read file contents and stores it in items array of object
void getItems(string itemNames[], int quantities[], double prices[], int &size, ifstream &infile)
{
	size = 0;
	//checks if the file unable to open for reading display's error message and stop
	while (!infile.eof())
	{
		infile >> itemNames[size] >> prices[size] >> quantities[size];
		size++;

		//opens the file for reading
		if (infile.eof())
			break;
	}
}

//sort the items based on quantity
void sortItemByQuantity(string itemNames[], int quantities[], double prices[], int size)
{
	int min;

	//loops till number of items
	for (int i = 0; i < size - 1; i++)
	{
		min = i;

		//loops till number items minus outer loop value minus one
		for (int j = i + 1; j < size; j++)
		{
			//checks if current items quantity is greater than the next item quantity
			if (quantities[j] < quantities[min])
				min = j;
		}
		if (min != i)
		{
			//swapping values
			string tempItem = itemNames[i];
			itemNames[i] = itemNames[min];
			itemNames[min] = tempItem;

			int tempQuantity = quantities[i];
			quantities[i] = quantities[min];
			quantities[min] = tempQuantity;

			double tempPrice = prices[i];
			prices[i] = prices[min];
			prices[min] = tempPrice;
		}
	}
}

//display an item
void outputItem(string itemName, int itemLen, double price, int priceLen)
{
	cout << left << setw(itemLen) << itemName << "$" << right << setw(priceLen) << fixed << setprecision(2) << price << endl;
}

int main() {

	string filename;
	ifstream fin;

	//array of items of size MAX
	string itemNames[MAX_CAPACITY];
	int quantities[MAX_CAPACITY];
	double prices[MAX_CAPACITY];

	//store number of records
	int size = 0;
	int selectionID, quantity;
	double totalPrice = 0;
	//store user choice
	char choice;

	//ifstream object
	cout << "Enter filename : ";
	cin >> filename;
	fin.open(filename.c_str());

	while (!fin.is_open())

	{
		cout << "Enter filename : ";
		cin >> filename;
		fin.open(filename.c_str());
	}

	cout << "Welcome to the Krusty Krab!" << endl;
	//calls the function
	getItems(itemNames, quantities, prices, size, fin);
	fin.close();

	do {
		//calls the function
		sortItemByQuantity(itemNames, quantities, prices, size);
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			if (quantities[i] > 0)
			{
				cout << left << setw(3) << (i + 1);
				//calls the function
				outputItem(itemNames[i], 20, prices[i], 10);
			}
		}
		//quantity input
		cout << "\nMake a selection : ";
		cin >> selectionID;

		while (cin.fail() || selectionID < 1 || selectionID > size || (quantities[selectionID - 1] == 0))

		{

			cin.clear(); // back in 'normal' operation mode
			cin.ignore(); // and remove the bad input

			cout << "Make a selection : ";
			cin >> selectionID;
		}

		//quantity accepted
		cout << "Alright, great choice! " << endl;
		cout << "\nHow many orders of this item would you like ? ";
		cin >> quantity;

		while (cin.fail() || quantity < 1)
		{
			cin.clear(); // back in 'normal' operation mode
			cin.ignore(); // and remove the bad input

			cout << "How many orders of this item would you like ? ";
			cin >> quantity;
		}
		if (quantity > quantities[selectionID - 1])
		{
			cout << "We only have " << quantities[selectionID - 1] << " of these " << endl;
		}
		else
		{
			cout << "Ok we'll bring that right out" << endl;
			//updates the quantity
			quantities[selectionID - 1] = quantities[selectionID - 1] - quantity;
			//calculate the amount
			totalPrice += (prices[selectionID - 1] * quantity);
		}
		cout << "\nKitchen is still open, will this complete you order? ";
		cin >> choice;

		//if choice is 'N' or 'n' and checks if choice is 'Y' or 'y'
		while (cin.fail() || (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y'))
		{
			cin.clear(); // back in 'normal' operation mode
			cin.ignore(); // and remove the bad input

			//invalid choice will loop 
			cout << "\nI'm going to need a better answer" << endl;
			cout << "WILL THIS COMPLETE YOUR ORDER ??? ";
			cin >> choice;
		}
	} while (choice == 'n' || choice == 'N');

	cout << "\nNever mind, the kitchen JUST closed, now get out" << endl << "But you have to pay first!!!" << endl;

	//calculates tax
	double tax = (totalPrice *0.0725);

	//displays details
	cout << left << setw(10) << "Amount" << "$" << right << setw(8) << fixed << setprecision(2) << totalPrice << endl;
	cout << left << setw(10) << "Tax" << "$" << right << setw(8) << fixed << setprecision(2) << tax << endl;
	cout << left << setw(10) << "Total" << "$" << right << setw(8) << fixed << setprecision(2) << (tax + totalPrice) << endl;

	return 0;

}
