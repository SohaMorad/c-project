// Ch1Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
   
	int quarter = 25;
	int dime = 10;
	int nickle = 5;
	int num1;
	int num2;
	int num3;

	cout << " Enter the number of quarters:\n";
	cin >> num1;
	int totalQC = num1 * quarter;
	cout << "Enter the number of dimes:\n";
	cin >> num2;
	int totalDC = num2 * dime;
	cout << "Enter the number of nickles: \n";
	cin >> num3;
	int totalNC = num3 * nickle;
	int total = totalQC + totalDC + totalNC;
	cout << "the total cents in ALL is :   " << total << endl;












	system("pause");

	return 0;
}

