// Ch2Q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

 using namespace std;

int main()
{
	
	double percent;
	double convert;
	int years;
	double cost1;
	double cost2;
	double price1;
	double price2;
	double price3;
	double cost3;

	
	cout << "What is the price for each item?" << endl;
	cin >> price1;
	cout << "What is the rate of inflation by % ? " << endl;
	cin >> percent;

    convert = (percent/100);

	cout << "The fraction number for the percentage is:  "<< convert << endl;

	cout << " After how many years you need to know the price of each item?" << endl;
	cin >> years;


	
	for (int i = 1; i <= years; i++) {
		cost1 = price1 * convert;
		price3 = price1 + cost1;
		price1 = price3;
		
		

	}
	

	cout << " The total cost after " << years << "years" << "\t" << " per each item will be :" << price1 << endl;


}

