// Ch2Q11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int startT;
	int endT;
	double velo;

	cout << "Enter the start point Tempreture :\n";
	cin >> startT;
	cout << " Enter the end Tempreture :\n";
	cin >> endT;

	for (int i = startT; i <= endT; i++)
	{

		velo = 331.3 + (0.61*i);
		cout << "At" << "  " << i <<"\t"<< "degrees Celsius the velocity of sound is " << "\t" << velo << "m/s" << endl;


	}
}

