// Ch2Q10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	int num;
	int num1 = 0;
	int num2 = 0;
	int y = 0;
	int j = 0;
	int AvgP;
	int AvgN;

	cout << "How many number you will input?" << endl;
	cin >> number;
	for (int i = 1; i <= number; i++) {

		cout << " Enter a number :" << endl;
		cin >> num;
		if (num > 0) {

			
			num1 = num1 + num;
			j = j + 1;
			AvgP = num1 / j;


		}
		else if (num <= 0) {
			
			num2 = num2 + num;
			y = y + 1;
			AvgN = num2 / y;
		

		}




	}

	cout << "The sum of all positive numbers is " << "\t" << num1 << endl;
	cout << "The Aveg of positive numbers is :" << "\t" << AvgP << endl;

	cout << "The total numbers of negative numbers is : " << "\t" << num2 << endl;
	cout << "The Aveg of Negative numbers is :" << "\t" << AvgN << endl;
	cout << "The number of post num is :" << j << endl;
	cout << "The number of post num is :" <<  y << endl;

}


