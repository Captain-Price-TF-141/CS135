//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;


int main()

{
	double x; 
	double y;
	double r = 1;

	cout << "Enter Base: ";
	cin >> x;

	cout << "Enter Exponent: ";
	cin >> y;

	for (int i = 1; i <= abs(y); i++)
		r = r * x;
	r = (y < 0) ? 1 / r : r;

	cout << r << endl;

	return 0;
}