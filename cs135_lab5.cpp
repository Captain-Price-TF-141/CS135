//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{

	
  double numbertwo, numberone, answer, infinity;
  
  char op;
  

  cout << "Input First Value: " << endl;
  cin >> numberone;
  
  cout << "Input Second Value: " << endl;
  cin >> numbertwo;
  
  
  if (cin.fail())
  {
    cout << "This is not a number >:(" << endl;
    return 1;
  }
  cout << numberone << "this is a number!" << endl;
  cout << numbertwo << "this is a number!" << endl;


  cout << "Operation to perform (+,-,/,*): " << endl;
  cin >> op;
  

  if (op == '+')
  {
    answer = numberone + numbertwo;
  }
  else

    if (op == '-')
    {
    answer = numberone - numbertwo;
    }
    else


      if (op == '*')
        {
          answer = numberone * numbertwo;
        }
        else  
  
            if (op == '/')
              {
                if (numbertwo == 0)
                    {
                      cout << "Infinity" << endl;
                      return 0;
                    }
                  else

                    answer = numberone / numbertwo;
              }
  

      cout << answer << endl;
    
	return 0;
     
}
