//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{

	int input = 0;




	while (input < 1 || input > 101)
	{
			cout << "Count to (1 to 1,000,000): " << endl;
			cin >> input;

			if (cin.fail() || input < 1 || input > 101)
			{
				cout << "Not it!" << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
	}



		for (int i = 1; i <101; i++)
		{


			if (i % 3 == 0 && i % 5 == 0)
			{
				cout << setw(5) << "FizzBuzz";
			}
				else if (i % 5 == 0)
				{
					cout << setw(5) << "Buzz";
				}
					else if (i % 3 == 0)
					{
						cout << setw(5) << "Fizz";
					}

			else
			{
							cout << setw(5) << i << " ";
			}


			if (i % 7 == 0)
			{
				cout << endl;
			}
		}		

	return 0;
}
