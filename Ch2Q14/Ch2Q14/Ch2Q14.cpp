// Ch2Q14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int totalEx;
	int score;
	int point;
	double totalscores=0.00;
	double totalpoints=0.00;
	double aveg;

	cout << "How many exercises to input?\n";
	cin >> totalEx;
	for (int i = 1; i <= totalEx; i++) {
		cout << "Score received for exercise" << "\t" << i << ":";
		cin >> score;
		cout << "Total points possible for exercise " << i << ":";
		cin >> point;
		totalscores = totalscores + score;
		totalpoints = totalpoints + point;


	}
	aveg = (totalscores * 100) / totalpoints;
	cout << "Your total is " << "\t" << totalscores << "\t" << "out of "<< " " << totalpoints << " " << "or" << "\t" << aveg << "%" << endl;

}

