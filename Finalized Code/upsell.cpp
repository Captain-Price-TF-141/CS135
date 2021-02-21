//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
using namespace std;

const double profit = 0.10;
const double discount = 0.15;

int main()
{
	float costmerchandise, salary, rent, electric;
	
	double totalexpenses;
	double markeduppercentage;
	double markupprice;
	double discountprice;
	double a;
	double b;
	double c;
	double m;

	

	cout << fixed << setprecision(2); /*formats all decimal output to two decimal places*/

	cout << endl;

	cout << "Enter cost for merhandise : ";
	cin >> costmerchandise;

	cout << "Enter salary : ";
	cin >> salary;

	cout << "Enter yearly rent : ";
	cin >> rent;

	cout << "Enter eletric cost : ";
	cin >> electric;

	cout << endl;

	/*compute*/
	totalexpenses = costmerchandise + salary + rent + electric;

	a = (totalexpenses * (1.0 + profit));
	 
	b = salary + rent + electric;
	
	m = ((a - b) / costmerchandise);
	
	markeduppercentage = (m * 100.0) - 100.0;
	
	c = markeduppercentage / 100.0;
	
	markupprice = (1.0 + c) * costmerchandise;

	discountprice = (1.0 - discount) * markupprice;



	/*
	For each line, we use left, right, and setw manipulators to get a width of 20 characters (for text),
	a dollar sign, and width of 10 characters (for numbers). The text is left justifed and the numbers
	are right justified, we apply the pattern (width of 20, width of 1 (for the dollar sign) and a width of 10)
	to get a nice alignment of the output
	*/

	/*Outputs first line*/
	cout << left << setw(30) << setfill('.') << "Yearly expenses";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << totalexpenses << endl;
	
	/*outputs the second line
	Merchandise markup percentage*/
	cout << left << setw(30) << setfill(' ') << "Merchandise markup";
	cout << right << setw(21) << markeduppercentage << "%" << endl;
	
	/*outputs the third line*/
	cout << left << setw(30) << setfill('.') << "Merchandise marked up cost";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << markupprice << endl;

	/*outputs the forth line*/
	cout << left << setw(30) << setfill('.') << "Merchandise after discount";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << discountprice << endl;

	cout << endl;

	return 0;
}
