//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>



using namespace std;

int main()
{
	int i, j, input;


while (input < 1)
	{
			cout << "Postive Number: " << endl;
			cin >> input;

			if (cin.fail() || input < 1 || input > 16)
			{
				cout << "Not it!" << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
	}

	for (int i = 1; i < input + 1; ++i)
	{
		for (int j = i; j < input + 1; ++j)
		{
			
			if (i * j == input)
			{
				cout << i << "x" << j << "=" << i * j << endl;
			}
			
		}
	}

	return 0;
}
