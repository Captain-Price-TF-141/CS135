//Captain-Price-TF-141

#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14;

int main()
{
	float radius1, radius2;
	double area1, area2, circumference1, circumference2;
	


	cout << "Enter the radius of two circles: ";
	cin >> radius1 >> radius2;

	area1 = PI * pow(radius1, 2.0);
	area2 = PI * pow(radius2, 2.0);
	circumference1 = 2.0 * PI * radius1;
	circumference2 = 2.0 * PI * radius2;

	cout << "Area of circle 1: " << area1 << endl;
	cout << "Area of circle 2: " << area2 << endl;

	cout << "Circumference of circle 1: " << circumference1 << endl;
	cout << "Circumference of circle 2: " << circumference2 << endl;

	cout << endl;

	return 0;

}