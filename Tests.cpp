// Tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main()
{

	int age;
	char ch;
	string name;

	cin >> age;
	cin.get(ch);
	getline(cin, name);

	cout << age << " " << ch << " " << name << endl;


	system("pause");

	return 0;
}

