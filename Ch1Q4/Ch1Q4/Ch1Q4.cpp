// Ch1Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	int time;
	int acc=32;
	int dist;
	int timed;

	cout << "Enter the number of seconds  : \n";
	cin >> time;
	timed = time * time;
	dist = (acc*timed) / 2;

	cout << "The distance in : " << time << "\t" << "seconds is :" << dist << endl;



	system("pause");
	return 0;
}

