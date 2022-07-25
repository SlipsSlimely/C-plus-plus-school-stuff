// Taxation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>

// Name is Paul Bahdouchi
using namespace std;

// Plenty of Variables
int GrossSalary;
string MaritalStatus;
int ChildCount;
double PensionFund;
double TaxRate;
double TaxAmount; 
double StandardExemption;
int HouseCount;
double TaxableIncome;

int getData()
{

	// Do stuff grab data
	cout << "What is your gross salary (if married enter the combined salary of both spouses): " << endl;
	cin >> GrossSalary;
	cout << "What is your marital status (married or single): " << endl;
	cin >> MaritalStatus;
	if (MaritalStatus == "married")
	{
		cout << "How many kids do you have: " << endl;
		cin >> ChildCount;
	}
	else
		ChildCount = 0;
	cout << "How much of your income has gone to your pension fund: " << endl;
	cin >> PensionFund;
	return 0;
}

int taxAmount()
{

	// Use data
	if (MaritalStatus == "married")
	{
		StandardExemption = 7000;
		HouseCount = 2 + ChildCount;
	}
	else
	{
		StandardExemption = 4000;
		HouseCount = 1;
	}

	TaxableIncome = GrossSalary - (StandardExemption + PensionFund + (1500 * HouseCount));

	if (TaxableIncome <= 15000)
	{
		TaxRate = .15;
		TaxAmount = 0;
	}
	else if (15000 < TaxableIncome && TaxableIncome < 40000)
	{
		TaxRate = .25;
		TaxAmount = 2250;
	}

	else if (TaxableIncome > 40000)
	{
		TaxAmount = 8460;
		TaxRate = .35;
	}

	return 0;
}

int main()
{
	getData();
	taxAmount();

	// Print stuff to read
	cout << "Your tax rate is " << TaxRate << " and your due tax is " << TaxAmount << endl;

	system("pause");
	return 0;
}