//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double getInput(string msg) 
{
	double value;

	while (1) 
	{
		cout << msg;
		cin >> value;
		
			if (value <= 0) //Not a positive value keep prompting
			{                      				
				cin.clear();
				cin.ignore(100000, '\n');
			}
				else if (cin.good()) // if value is double then break
				{
					break;
				}
					else //Not a numerical value keep prompting
					{
						cin.clear();
						cin.ignore(100000, '\n');
					}					
	}
	return value;  
}

double computeBillingAmount(double totalIncome, int consultingTime, double hourlyRate)
{
	double amount;

	if (totalIncome <= 25000) // low income 
	{          
		if (consultingTime >= 30) // if consulting time more than 30 mins
		{
			amount = hourlyRate * 0.40*(consultingTime - 30) / 60; 
		}
		else amount = 0;
	}
		else // high income
		{                               
			if (consultingTime >= 20) // if consulting time more than 20 mins
			{
			amount = hourlyRate * 0.70*(consultingTime - 20) / 60; 
			}
				else amount = 0;
		}
	return amount;
}

void outputLine(string msg, int msgLen, double amount, int amtLen)
{
        cout << left << setw(msgLen) << setfill('.');
	cout << msg;
	cout << left << setw(amtLen) << setfill(' ');
	cout << "$" << amount << endl;
}

int main() 
{
	double income, rate, time, amount;

	income = getInput("\nEnter total income: ");
	rate = getInput("\nEnter hourly rate: ");
	time = getInput("\nEnter consulting time : ");

	amount = computeBillingAmount(income, time, rate);

	cout << fixed << setprecision(2);

	outputLine("Income:", 21, income, 5);
	outputLine("Hourly rate:", 21, rate, 8);
	outputLine("Billing amount:", 21, amount, 8);

	return 0;
}
