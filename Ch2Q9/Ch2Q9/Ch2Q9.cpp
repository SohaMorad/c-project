// Ch2Q9.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	cout << "How many number you will input?" << endl;
	cin >> number;
	for (int i = 1; i <= number; i++) {

		cout << " Enter a number :" << endl;
		cin >> num;
		if (num > 0) {
			num1 = num1 + num;
			


		}
		else if (num <= 0) {
			num2 = num2 + num;
			
			
		}




	}

	cout << "The sum of all positive numbers is " << "\t" << num1 << endl;
	cout << "The total numbers of negative numbers is : " << "\t" << num2 << endl;

}

