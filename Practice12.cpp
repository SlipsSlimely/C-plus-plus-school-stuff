// Practice12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

using namespace std;

class bagType
{
public:
	void set(string, double, double, double, double);
	void print() const;
	string getStyle() const;
	double getPrice() const;
	void get(double, double, double, double);
	bagType();
	bagType(string, double, double, double, double);
private:
	string style;
	double 1;
	double w;
	double h;
	double price;
};

bagType newBag;

int main()
{
	class bagType();
    return 0;
}

