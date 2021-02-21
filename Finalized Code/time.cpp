//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	int h, minutes;
	double time, hours;

	cout << endl;

	cout << "Enter elapsed time ( hours and minutes ): ";
	cin >> h >> minutes;


	hours = h * 60;
	time = hours + minutes;

	cout << "Time " << time << " in minutes" << endl;

	cout << endl;

	return 0;
}