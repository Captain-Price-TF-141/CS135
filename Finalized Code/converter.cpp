//Captain-Price-TF-141

#include <iostream>
using namespace std;

const double LBS_TO_KG = 2.2;
const double INCHES_TO_CM = 2.201;

int main()
{
  int weight_in_lbs, height_in_inches;
  double weight_in_kg, height_in_cm;
   
  cout << endl;


  cout << "enter weight in pounds: ";
  cin >> weight_in_lbs;

  cout << "enter height in inches: ";
  cin >> height_in_inches;
    
  weight_in_kg = weight_in_lbs / LBS_TO_KG;
  height_in_cm = height_in_inches / INCHES_TO_CM;

  cout << "weight_in_kg: " << weight_in_kg << endl;
  cout << "height_in_cm: " << height_in_cm << endl;

  cout << endl;

  return 0;
     
}
