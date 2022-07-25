// Chapter11Exercise4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>

// By Paul Bahdouchi
// Page 804

using namespace std;

int main()
{
	// 1 cubic foot = 28.32 liters
	double Cubicfoot = 28.32;
	// 1 liter = .353146667 cubic feet
	double liter = .353146667;

	double Costtopaint = 0;
	double Shippingcost = 0;
	double ContainerVolume = 0;
	double ContainerArea = 0;
	double LiterRadius = 1;
	double LiterHeight = 1;

	double Baseradius;
	cout << "Please input the radius of the base of the container (in feet): " << endl;
	cin >> Baseradius; 

	double Containerheight;
	cout << "Please input the height of the container (in feet): " << endl;
	cin >> Containerheight;

	double ShippingCostperLiter;
	cout << "Please input the shipping cost per liter: " << endl;
	cin >> ShippingCostperLiter;

	double PaintCostperFoot;
	cout << "Please input the paint cost per foot: " << endl;
	cin >> PaintCostperFoot;

	LiterRadius = Baseradius * Cubicfoot;
	LiterHeight = Containerheight * Cubicfoot;

	ContainerArea = 2 * 3.14 * LiterRadius * LiterHeight + 2 * 3.14 * (LiterRadius * LiterRadius);
	ContainerVolume = 3.14 * (LiterRadius * LiterRadius) * LiterHeight;
	Costtopaint = PaintCostperFoot * ContainerArea;
	Shippingcost = ShippingCostperLiter * ContainerVolume;

	cout << "The shipping total on this item is: " << Shippingcost << endl;
	cout << "The cost to paint this item is:  " << Costtopaint << endl;
	

	system("pause");
    return 0;
}

