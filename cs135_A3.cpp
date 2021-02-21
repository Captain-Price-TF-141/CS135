//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
using namespace std;

/*10% profit*/
const double profit = 0.10;
/*15% discount*/
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

	/*adds on the expenses*/
	totalexpenses = costmerchandise + salary + rent + electric;
	/* computes the mark up percentage*/
	a = (totalexpenses * (1.0 + profit));
	b = salary + rent + electric;
	m = ((a - b) / costmerchandise);
	markeduppercentage = (m * 100.0) - 100.0;
	/*subtracts 100 from the mark up percentage*/
	c = markeduppercentage / 100.0;
	
	/*computes the mark up price*/
	markupprice = (1.0 + c) * costmerchandise;
	
	/*computes the discounted price*/
	discountprice = (1.0 - discount) * markupprice;


	/*Outputs first line and seperates the value with dots*/
	cout << left << setw(30) << setfill('.') << "Yearly expenses";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << totalexpenses << endl;
	
	/*outputs the second line and seperates the value with dots
	Merchandise markup percentage*/
	cout << left << setw(30) << setfill(' ') << "Merchandise markup";
	cout << right << setw(21) << markeduppercentage << "%" << endl;
	
	/*outputs the third line and seperates the value with dots*/
	cout << left << setw(30) << setfill('.') << "Merchandise marked up cost";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << markupprice << endl;

	/*outputs the forth line and seperates the value with dots*/
	cout << left << setw(30) << setfill('.') << "Merchandise after discount";
	cout << "$";
	cout << right << setw(20) << setfill(' ') << discountprice << endl;

	cout << endl;

	return 0;
}
