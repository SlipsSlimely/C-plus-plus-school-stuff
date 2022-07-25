// Chapter8Exercise4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iomanip>

// Paul Bahdouchi
// Chapter 8 Exercise 4
// Student Score thing

using namespace std;

const int Size = 26;
const int Ranges = 8;

int main()
{
	int scoreZone;
	int Counter;


	int StudentScores[Size];

	int CompiledData[Ranges];

	ifstream ScoreData;

	ScoreData.open("E:\\Coding classes\\C++\\Assignments\\Code Assignments\\Week10\\Chapter8Exercise4\\Scores.txt");

	// Test code to have the user input the file name
	//char inputFile[50];
	//cout << "Enter the name of the Score Text Document: " << endl;
	//cin >> inputFile;
	//ScoreData.open(inputFile);

	// Checks to make sure the file opened
	if (!ScoreData)
	{
		cout << "ERROR 404! File Not Found." << endl;
		system("pause");
		return 1;
	}

	//Initialize stuff
	for (Counter = 0; Counter < Ranges; Counter++)
		CompiledData[Counter] = 0;

	for (Counter = 0; Counter < Size; Counter++)
		StudentScores[Counter] = 0;

	//Set the data and read the file and sort the data
	for (Counter = 0; Counter < Size; Counter++)
	{
		ScoreData >> scoreZone;
		StudentScores[Counter] = scoreZone;

		//score ranges are: 0 - 24, 25 - 49, 50 - 74, 75 - 99, 100 - 124, 125 -149, 150 - 174, and 175 - 200.

		if (StudentScores[Counter] >= 0 && StudentScores[Counter] <= 24)
			CompiledData[0]++;
		else if (StudentScores[Counter] >= 25 && StudentScores[Counter] <= 49)
			CompiledData[1]++;
		else if (StudentScores[Counter] >= 50 && StudentScores[Counter] <= 74)
			CompiledData[2]++;
		else if (StudentScores[Counter] >= 75 && StudentScores[Counter] <= 99)
			CompiledData[3]++;
		else if (StudentScores[Counter] >= 100 && StudentScores[Counter] <= 124)
			CompiledData[4]++;
		else if (StudentScores[Counter] >= 125 && StudentScores[Counter] <= 149)
			CompiledData[5]++;
		else if (StudentScores[Counter] >= 150 && StudentScores[Counter] <= 174)
			CompiledData[6]++;
		else if (StudentScores[Counter] >= 175 && StudentScores[Counter] <= 200)
			CompiledData[7]++;

	}

	cout << "The total number of students with scores between 0 and 24 are: " << CompiledData[0] << endl;
	cout << "The total number of students with scores between 25 and 49 are: " << CompiledData[1] << endl;
	cout << "The total number of students with scores between 50 and 74 are: " << CompiledData[2] << endl;
	cout << "The total number of students with scores between 75 and 99 are: " << CompiledData[3] << endl;
	cout << "The total number of students with scores between 100 and 124 are: " << CompiledData[4] << endl;
	cout << "The total number of students with scores between 125 and 149 are: " << CompiledData[5] << endl;
	cout << "The total number of students with scores between 150 and 174 are: " << CompiledData[6] << endl;
	cout << "The total number of students with scores between 175 and 200 are: " << CompiledData[7] << endl;

	system("pause");
    ret}rN$0;*uz	
