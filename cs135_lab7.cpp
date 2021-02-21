//Captain-Price-TF-141

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	char input;
	char userinput;
	char r;
	char R;
	char p;
	char P;
	char s;
	char S;
	char rock, paper, scissors;
	
	


	srand (time(0));
	int cpuinput = rand() % 3;
	cout << "Ready Player 1" << endl;
	cout << "Rock(R,r), Paper(P,p), Scissors(S,s)!!!" << endl;
	cin >> input;

	switch (input)
 {
 		case 'R':
 		case 'r':
 			cout << "Player 1: Rock" << endl;
			userinput = rock;

 		break;

 		case 'P':
 		case 'p':
 			cout << "Player 1: Paper" << endl;
			userinput = paper;

 		break;

 		case 'S':
 		case 's':
 			cout << "Player 1: Scissors" << endl;
			userinput = scissors;
 		break;
 } 

	switch(cpuinput)
 {
 		case 0:
 			cout << "CPU: Rock" << endl;
			cpuinput = rock;
 		break;

 		case 1:
 			cout << "CPU: Paper" <<  endl;
			cpuinput = paper;
 		break;

 		case 2:
 			cout << "CPU: Scissors" << endl;
			cpuinput = scissors;
 		break;
 } 


	if (cpuinput == rock > userinput == scissors)
		{
		cout << "you win" << endl;
		}
		else if (cpuinput == paper >  userinput == rock)
				{
				cout << "you win" << endl;
				}
				else if (cpuinput == scissors > userinput == paper)
					{
					cout << "you win" << endl;
					}
					else if (cpuinput == rock && userinput == rock)
						{
						cout << "its a tie" << endl;
						}
						else if (cpuinput == paper && userinput == paper)
							{
							cout << "its a tie" << endl;
							}
							else if (cpuinput == scissors && userinput == scissors)
								{
								cout << "its a tie" << endl;
								}
								else
								cout << "you lose" << endl;


				
return 1;		
}
