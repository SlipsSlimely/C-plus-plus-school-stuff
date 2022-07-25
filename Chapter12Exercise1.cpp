// Chapter12Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstring>
#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;
// Paul Bahdouchi
// Page 883
// Redo Exercise 5 on pg. 603 with dynamic arrays

int main()
{
	// basic variables
	const int arraySize = 99;
	int space = 0;
	// dynamic array
	char *toBecomeUpper = new char[arraySize];
	char c;

	// this asks the user for input
	cout << "Give me any statement: " << endl;
	// the following line grabs every part of the statement even spaces
	cin.get(toBecomeUpper, arraySize);

	// this uppercases the string
	for (space = 0; space < 99; space++)
	{
		c = toBecomeUpper[space];
		toBecomeUpper[space] = toupper(c);
	}
	
	// this prints out the uppercase array removing odd data
	for (space = 0; space < arraySize; space++)
	{
		if (toBecomeUpper[space] != NULL)
			cout << toBecomeUpper[space];
		else
			break;
	}

	cout << endl;

	// this pauses the application
	system("pause");
	// this closes the application
	return 0;
}