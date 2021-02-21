//Captain-Price-TF-141

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFromFile(int list[], int& size, ifstream& infile)
{
	string line;
	int i = 0;
	int number = 0;
	
	while (infile >> number) // Execute a loop until end of numbers
	{
		list[i] = number;
		i++;
	}
	size = i;
}

bool getToLastIndex(int list[], int size) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size;)
	{
		if (list[i] == 0)
			break;
		j = i + list[i];
		i = j;
	}
	if (j >= size)
		return true;
	else
		return false;
}
int main()
{
	char filename[50];
	cout << "Enter filename: ";
	cin >> filename;
	
	FILE *fp;
	fp = fopen(filename, "r");
	
	while (fp == NULL)
	{
		cout << endl << "Enter filename: ";
		cin >> filename;
		fp = fopen(filename, "r");
	}

	ifstream fin;


	fin.open(filename);
	int jump[50];
	int s = 0;
	int i = 0;

	readFromFile(jump, s, fin);
	if (getToLastIndex(jump, s))
	  {
	    cout << "Mario FTW" << endl;
	  }
	else
	  {
	    cout << "This bridge has the workings of bowser all over it >:(" << endl;
	  }
	fin.close();
	return 0;
}
