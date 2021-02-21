//Captain-Price-TF-141

#include <iostream>
using namespace std;



int main()
{
  int fahrenhiet;
  double celsius, kelvin, rosemer;
   
  cout << endl;


  cout << "Fahrenhiet:";
  cin >> fahrenhiet;

    
  celsius = (fahrenhiet - 32.0) * 5.0/9.0;
  kelvin = celsius + 237.15;
  rosemer = (fahrenhiet - 32.0) * 7.0/24.0 + 7.5;
  

  cout << "Celsius: " << celsius << " C" << endl;
  cout << "Kelvin: " << kelvin << " K" << endl;
  cout << "Rosemer: " << rosemer << " R" << endl;

  cout << endl;

  return 0;
     
}