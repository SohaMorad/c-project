// Ch2Q11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double BMRF;
	double BMRM;
	char gender;
	double wieght;
	double hieght;
	int age;
	int cholbar = 230;
	int totalbars;


	cout << "What is your weight in pounds:" << endl;
	cin >> wieght;

	cout << "What is your hieght in inches : " << endl;
	cin >> hieght;

	cout << "What is you age :" << endl;
	cin >> age;

	cout << "What is you gender , print F for femal and M for male :" << endl;
	cin >> gender;




	if (gender = 'F') {

		BMRF = 655 + (4.3*wieght) + (4.7*hieght) - (4.7*age);
		cout << "Total calories for this lady is " << BMRF << endl;
		totalbars = BMRF / cholbar;
		cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;

	}


		

	else if (gender == 'M') {
	
		BMRM = 66 + (6.3*wieght) + (12.9*hieght) - (6.8*age);
		cout << "Total calories for this Man is " << BMRM << endl;
		totalbars = BMRM / cholbar;
		cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;

		

	}

	

	}



