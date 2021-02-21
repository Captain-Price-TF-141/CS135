//Captain-Price-TF-141

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>


using namespace std;

const int GUESS_LIMIT = 6;

void getWord(string &word)
	{
	
	ifstream inFile("words.txt");

	int n = 0;

	inFile >> n;
	
	string arr[n];
	
	for (int i = 0; i < n; i++)
	{
		inFile >> arr[i];
	}
	
	srand(time(0));
	int random = rand() % n;
	
	word = arr[random];
	
	}

bool checkGuess(string word, char guess, bool matched[]) 
	{
	bool returnFalse = false;
	
		if (guess >= 'A' && guess <= 'Z') 
		{
			guess += 32;
		}
	
		for (int i = 0; i < word.length(); i++) 
		{
			if (word[i] == guess && matched[i] == false) 
			{
				matched[i] = true;
				returnFalse = true;
			}
			
		}
		

		return returnFalse;
	}

void displayGameState(string word, bool matched[], int guesses) 
	{
		cout << "Hangman" << endl;
		cout << "Incorrect Guesses Remaining: " << GUESS_LIMIT - guesses << endl;
		
	
		//Initialize matched array
		for (int i = 0; i < word.length(); i++) 
		{
			if (matched[i] == true) 
				{
				cout << word[i] << " ";
				}
			else 
				{
				cout << "_" << " ";
				}
			
		}
	}

bool hasWon(bool matched[], int length)
	{
	
	for (int i = 0; i < length; i++)
	{
		if (matched[i] == false)
			return false;
	}
	
	return true;
	}

int main() 
	{

	int guesses = 0;
	string word; //= "disambiguation";
	getWord (word);

	bool matched[word.length()];
	char guess;
	
	for (int i = 0; i < word.length(); i++) 
		{
			matched[i] = false;
		}

	// Game Loop
	do 
		{
			displayGameState(word, matched, guesses);
			cout << "Choose a letter: ";
			cin >> guess;
			cin.clear();
			cout << endl << endl;
			if (!checkGuess(word, guess, matched)) guesses++;
			
			if (hasWon (matched, word.length()))
				{
				displayGameState (word, matched, guesses);
				cout << "The word was " << word << ", You Win!" << endl;
				return 0;
				}

		} 
	while (guesses < GUESS_LIMIT);

	cout << "You Lose, the word was " << word << "." << endl;
	}





