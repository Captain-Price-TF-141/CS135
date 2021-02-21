//Captain-Price-TF-141


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
  int x, y, h, m; /*x is Car A, y is Car B, h is hours, m is minutes.*/
  double time, minutes, distance, finaldistance; /*time is hours and minutes added, minutes is divided by 60, distance is the result of pythagorean theorem, finaldistance is the displayed distance.*/
   
  cout << endl;


  cout << "Enter the speed of Car A and Car B: ";
  cin >> x >> y; /* Asks for the speed of Car A and Car B.*/

  cout << "Enter elapsed time ( hours and minutes ): ";
  cin >> h >> m; /* Asks for the Time in hours and minutes.*/
 

  minutes = m / 60.0;
  time = h + minutes; /*Adds the calculted hours and given minutes.*/
  distance = pow((x * time), 2) + pow((y * time), 2); /*Performs pythagorean theorem to find the distnace, square root is used instead of squaring.*/
  finaldistance = sqrt(distance); /*Square rooted distance above to get a final distance.*/
 
  

  cout << "The two cars are " << finaldistance << " miles apart from each other" << endl; /* Displays the distance from the above calculation.*/

  cout << endl;

  return 0;
     
}