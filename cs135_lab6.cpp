//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	int answer1, answer2, answer3;
	char finalanswer;
	char scorea = 0 ;
	char scoreb = 0;
	char scorec = 0;

switch(finalanswer)
	{
	cout << "What cheese are you?" << endl;
	cout << "Do you like being original?" << endl;
	cout << "[1]Yes" << endl;
	cout << "[0]No" << endl;
	cin >> answer1;

		case 'a':
			scorea++;
		break;

	
	cout << "Do you like foreign foods?" << endl;
	cout << "[1]Yes" << endl;
	cout << "[0]No" << endl;
	cin >> answer2;

		case 'b':
			scoreb++;
		break;

	
	cout << "Do you like a hint of spice?" << endl;
	cout << "[1]Yes" << endl;
	cout << "[0]No" << endl;
	cin >> answer3;

		case 'c':
			scorec++;
		break;

		
		if (finalanswer == 1);
			{
			cout << "American" << endl;
			}
			else 
			
			
				if (finalanswer == 2);
				{
				cout << "Swiss!" << endl;
				}
				else

					if (finalanswer == 3);
					{
					cout << "Pepper Jack!" << endl;
					}
			
	
		default:
		cout << "Would you like to try again." << endl;
		break;		

		}
return 0;


}

