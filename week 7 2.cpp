// Week 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cctype>
#include <sstream>

int length;
int i;

using namespace std;

bool isPalindrome(string str)
{

	int length = str.length();

	for (int i = 0; i < length / 2; i++)

		if (tolower(str[i]) != tolower(str[length - 1 - i]))

			return false;

	return true;
}


int main()
{
	string Akroan;
	bool anwser;

	// Ask for input
	cout << "enter a Palindrome (if you want to): " << endl;

	//assign input
	cin >> Akroan;

	//Test the variable
	if (isPalindrome(Akroan))
		cout << "This is a Palindrome" << endl;
	else
		cout << "This is in no way shape or form a Palindrome" << endl;

	system("pause");
	return 0;

}
