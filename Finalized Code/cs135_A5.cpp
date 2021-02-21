//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;



int main()
{
	int years; // years for bonus calculation
	double commission, bonus, salary, basesalary, totalsales, totalbonus; // base salary and totalsales needed for input. totalbonus, commission, bonus, salary are the calculated outputs.

	cout << fixed << setprecision(2); //sets decimal precision to 2 decimal places

	
	
	cout << "Enter years worked :  " << endl;
	cin >> years;

		while (cin.fail() || years < 0)
		{
			cout << "Something went wrong ..." << endl;
			if (cin.fail())	
			{
			cin.clear();
			cin.ignore();
			}
			cout << "Enter years worked :  " << endl;
			cin >> years;
		}
	
	cout << "Enter monthly salary :  " << endl;
	cin >> basesalary;

		while (cin.fail() || basesalary < 0)
		{
			cout << "We both know that's not a valid salary ..." << endl;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
			}
			cout << "Enter monthly salary :  " << endl;
			cin >> basesalary;
		}

	cout << "Enter sales amount :  " << endl;
	cin >> totalsales;

	while (cin.fail() || totalsales < 0)
		{
			cout << "Are you giving away things for free ?!?!?!" << endl;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
			}
			cout << "Enter sales amount :  " << endl;
			cin >> totalsales;
		}
	if (years > 5) 
		{
		bonus = years * 20.0; //multiplies by the 5 years or greater bonus
		}
	else
		bonus = years * 10.0; //multiplies by the less than 5 years bonus
	if (totalsales >= 5000.0 && totalsales < 10000) // detects sales between 5,000 and 10,000
		{
		commission = totalsales * 0.03; //calculates the commission rate at 3% based on sales
		}
	else if (totalsales >= 10000.0) // detects sales 10,000 or greater
		{
		commission = totalsales * 0.06; //calculates the commission rate at 6% based on sales
		}
	else
		commission = 0;

	totalbonus = commission + bonus; // adds the commission and bonus for a total bonus
	
	salary = totalbonus + basesalary; //adds the base salary and total bonus for a total salary

	
	cout << left << setw(30) << setfill(' ') << "Years worked "; //formats the results with spacing and no dots
	cout << right << setw(21) << setfill(' ') << years << endl; //formats the results with spacing and no dots

	
	cout << left << setw(30) << setfill('.') << "Base salary "; //formats the results dot spacing
	cout << "$"; //adds a $ sign to the result
	cout << right << setw(20) << setfill(' ') << basesalary << endl; //formats the results with spacing and no dots


	cout << left << setw(30) << setfill('.') << "Bonus "; //formats the results dot spacing
	cout << "$"; //adds a $ sign to the result
	cout << right << setw(20) << setfill(' ') << totalbonus << endl; //formats the results with spacing and no dots

	
	cout << left << setw(30) << setfill('.') << "Amount sold "; //formats the results dot spacing
	cout << "$"; //adds a $ sign to the result
	cout << right << setw(20) << setfill(' ') << totalsales << endl; //formats the results with spacing and no dots
	

	cout << left << setw(30) << setfill('.') << "Salary w/ bonus "; //formats the results with dot spacing
	cout << "$"; //adds a $ sign to the result
	cout << right << setw(20) << setfill(' ') << salary << endl; //formats the results with spacing and no dots


	return 0;
}
