// Ch4Q10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <cstring>
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
	char active[10];


	cout << " What is your weight in pounds:" << endl;
	cin >> wieght;

	cout << " What is your hieght in inches : " << endl;
	cin >> hieght;

	cout << " What is you age :" << endl;
	cin >> age;

	cout << "What is you gender , print F for femal and M for male :" << endl;
	cin >> gender;




	if (gender = 'F') {

		cout << "What kind of activity you do ? a-Sedentery \n. b- Somewhat active(exercise occasionally.\n c-Active (excercise 2-3 days per week.\n d-High active(exercise every day)\n";
		cin >> active;
		cout << active << endl;

		if (strcmp(active ,"Sedentary")) {

			BMRF = 655 + (4.3*wieght) + (4.7*hieght) - (4.7*age) + 0.20;
			cout << "Total calories for this lady is " << BMRF << endl;
			totalbars = BMRF / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;
		}

		else if (strcmp(active , "Somewhat active"))
		{
			BMRF = 655 + (4.3*wieght) + (4.7*hieght) - (4.7*age) + 0.30;
			cout << "Total calories for this lady is " << BMRF << endl;
			totalbars = BMRF / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;

		}

		else if (strcmp(active , "Active"))
		{
			BMRF = 655 + (4.3*wieght) + (4.7*hieght) - (4.7*age) + 0.40;
			cout << "Total calories for this lady is " << BMRF << endl;
			totalbars = BMRF / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;

		}

		else if (strcmp(active , "Hightly Active"))
		{
			BMRF = 655 + (4.3*wieght) + (4.7*hieght) - (4.7*age) + 0.50;
			cout << "Total calories for this lady is " << BMRF << endl;
			totalbars = BMRF / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;

		}
	}




	else if (gender == 'M') {

		if (active == "Sedentary") {

			BMRM = 66 + (6.3*wieght) + (12.9*hieght) - (6.8*age) + 0.20;
			cout << "Total calories for this Man is " << BMRM << endl;
			totalbars = BMRM / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;
		}

		if (active == "Somewhat active") {

			BMRM = 66 + (6.3*wieght) + (12.9*hieght) - (6.8*age) + 0.30;
			cout << "Total calories for this Man is " << BMRM << endl;
			totalbars = BMRM / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;
		}

		if (active == "Active") {

			BMRM = 66 + (6.3*wieght) + (12.9*hieght) - (6.8*age) + 0.40;
			cout << "Total calories for this Man is " << BMRM << endl;
			totalbars = BMRM / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;
		}


		if (active == "Highly active") {

			BMRM = 66 + (6.3*wieght) + (12.9*hieght) - (6.8*age) + 0.50;
			cout << "Total calories for this Man is " << BMRM << endl;
			totalbars = BMRM / cholbar;
			cout << "Total number of chochlate bars allowed is" << "\t" << totalbars << endl;
		}
	}
}




