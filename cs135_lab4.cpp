//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int main()
{

	int length, width, height, grams;
  	double volume, density, mass;
 

  	cout << "Length: ";
  	cin >> length;

  	cout << "Width: ";
  	cin >> width;

  	cout << "Height: ";
  	cin >> height;

  	  string material;

	  cout << "Material Name: " << endl;
	  cin.ignore();
  	  getline(cin, material);
	  
	cout << "Density of Meterial in grams: ";
        cin >> grams;

  	volume = (length * 100.0) * (width * 100.0) * (height * 100.0);

  	density = (grams);

  	mass = (1000.0 * density);
	
  	cout << right << setw(20) << "Vol. (cm^3)";
  	cout << right << setw(20) << "Dens. (g/cm^3)";
  	cout << right << setw(20) << "Mass (kg)" << endl;
	
	cout << left << setw(20) << fixed;
	cout << material;
  	cout << right << setw(20) << setprecision(1) << fixed;
	cout << volume;
  	cout << right << setw(20) << setprecision(1) << fixed;
	cout << density;
	cout << right << setw(20) << setprecision(5) << fixed;
	cout << mass << endl;
 
	return 0;
     
}
