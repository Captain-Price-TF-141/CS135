//Captain-Price-TF-141


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#define MAX 50
using namespace std;

//structure to store item information
struct menuType
{
	string itemName;
	int quantity;
	double price;
};

//read file contents and stores it in items array of object
void getItems(menuType items[], int &size, ifstream &infile)
{
	//store file name
	string fileName;

	//loops till valid file name entered by the user
	do
	{

		//accepts the file name
		cout << "Enter filename: ";
		cin >> fileName;

		//opens the file for reading
		infile.open(fileName.c_str());

		//checks if the file unable to open for reading display's error message and stop
		if (!infile)
		{
			
			fflush(stdin);
			continue;
		}

		//otherwise valid file name come out of the loop
		else
			break;
	} while (1);

	//loops till end of the file for reading
	while (!infile.eof())
	{
		//reads item name
		infile >> items[size].itemName;

		//reads item price
		infile >> items[size].price;

		//reads item quantity
		infile >> items[size].quantity;

		//increase the word counter
		size++;
	}
}

//sort the items based on quantity
void sortItemsByQuantity(menuType items[], int size)
{
	//loops till number of items
	for (int r = 0; r < size; r++)
	{
		//loops till number items minus outer loop value minus one
		for (int c = 0; c < size - r - 1; c++)
		{
			//checks if current items quantity is greater than the next item quantity
			if (items[c].quantity > items[c + 1].quantity)
			{
				//swapping values
				menuType temp = items[c];
				items[c] = items[c + 1];
				items[c + 1] = temp;
			}
		}
	}
}

//display an item
void outputItem(string itemName, int itemLen, double price, int priceLen)
{
	cout << left << setw(itemLen) << itemName << setw(5) << "$" << right << fixed << setprecision(2) << setw(priceLen) << price << endl;
}

//accept a valid id index
void selectID(menuType items[], int size, int &index)
{
	cout << "\nMake a selection : ";
	cin >> index;

	while (cin.fail() || index < 1 || index > size || (items[index - 1].quantity == 0))
	{

		cin.clear(); // back in 'normal' operation mode
		cin.ignore(); // and remove the bad input

		cout << "Make a selection : ";
		cin >> index;

	}
}

//display all the items
void displayItems(menuType items[], int size, int &index)
{
	//loops till number of records
	for (int x = 0; x < size; x++)
	{
		//checks if current item quantity is not zero then display the item by calling the function
		if (items[x].quantity != 0)
		{
			cout << left << setw(5) << (x + 1);
			outputItem(items[x].itemName, 25, items[x].price, 6);
		}
	}

	//calls the function to select an id
	selectID(items, size, index);
}


int main()
{
	//array of items of size MAX
	menuType items[MAX];
	//store number of records
	int size = 0;
	int index = 0, qty;
	double amount = 0.0;
	//ifstream object declared
	ifstream infile;
	//store user choice
	char ch;

	//calls the function
	getItems(items, size, infile);

	cout << "Welcome to the Krusty Krab!" << endl;

	//loops till user choice is 'N' or 'n'
	do
	{
		//calls the function
		sortItemsByQuantity(items, size);

		//calls the function
		displayItems(items, size, index);

		//accepts the quantity
		cout << "Alright, great choice!" << endl;

		
		//loops till positive number quantity is entered by the user
		do
		{
			cin.clear(); // back in 'normal' operation mode
			cin.ignore(); // and remove the bad input

			//accepts the quantity
			cout << "How many orders of this item would you like? ";
			cin >> qty;

			//checks if quantity is greater than zero then come out of the loop
			if (qty > 0)

			{
				//checks if user entered quantity is greater than the available quantity
				//display message and come out of the loop
				if (qty > items[index - 1].quantity)
				{

					cout << "We only have " << items[index - 1].quantity << " of these." << endl;
					break;
				}

				cout << "Ok we'll bring that right out" << endl;
				//calculate the amount
				amount += (qty * items[index - 1].price);

				//updates the quantity
				items[index - 1].quantity -= qty;
				break;
			}


		} while (cin.fail() || qty < 1);
		
		//accepts the choice
		cout << "Kitchen is still open, will this complete your order? ";
		cin >> ch;

		//loops till valid choice
		do
		{
			//checks if choice is 'Y' or 'y' then come out of the loop
			if (ch == 'Y' || ch == 'y')
				break;

			//checks if choice is 'N' or 'n' then come out of the loop
			else if (ch == 'N' || ch == 'n')
				break;

			//invalid choice will loop
			else
			{
				cout << "I'm going to need a better answer" << endl;
				cout << "WILL THIS COMPLETE YOUR ORDER ??? ";
				cin >> ch;
			}
		} while (1);
	} while (ch == 'N' || ch == 'n');

	//calculates tax
	double tax = amount * 0.0725;

	//displays details
	cout << "Never mind, the kitchen JUST closed, now get out" << endl;
	cout << "But you have to pay first!!!" << endl;
	cout << left << setw(10) << "Amount" << setw(5) << "$" << right << setw(6) << amount << endl;
	cout << left << setw(10) << "Tax" << setw(5) << "$" << right << setw(6) << tax << endl;
	cout << left << setw(10) << "Total" << setw(5) << "$" << right << setw(6) << (amount + tax);

	return 0;
}

