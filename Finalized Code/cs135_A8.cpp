//Captain-Price-TF-141

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFromFile(int list[], int& size, ifstream& infile) //reads in-file input text
{
	//string line; //
	int i = 0;
	int number = 0;
	
	while (infile >> number) // loop, until end of numbers
	{
		list[i] = number; //array counter
		i++;
	}
	size = i;
}

bool getToLastIndex(int list[], int size) //determines if the last index can be reached
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
		return true; //if last index item is reachable
	else
		return false; //if last index item is not reachable
}
int main()
{
	char filename[50];
	cout << "Enter filename: "; //input file name
	cin >> filename;
	
	FILE *fp;
	fp = fopen(filename, "r");
	
	while (fp == NULL)
	{
		cout << endl << "Enter filename: "; // loop, input file name again if wrong
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
	    cout << "Mario FTW" << endl; //output correct result
	  }
	else
	  {
	    cout << "This bridge has the workings of bowser all over it >:(" << endl; //output wrong result
	  }
	fin.close();

	return 0;
}
