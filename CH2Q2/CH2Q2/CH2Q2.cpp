// CH2Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


using namespace std;

int main()
{      

	int pAnnualS;
	int NewAnnualS;
	int months = 6;
	int PmonthlyS;
	int newmonthlyS;
	int bounes1;
	int bounes2;
	int bounes3;
	

	cout << "Enter your previuse Annual Salary :  \n";
	cin >> pAnnualS;

	bounes1 = pAnnualS * 0.076;
	bounes2 = bounes1 / 12;
	bounes3 = bounes2 * 6;


	NewAnnualS = bounes1 + pAnnualS;

	cout << "The pay will increse : " << bounes2 << "        dollars   monthly  for the next 6 months and  " << bounes1 << "yearly   and " << bounes3 << "for the next 6 months\n" ;

	cout << " the previuse annual salary was : " << pAnnualS << endl;


	cout << "The new Annual Salary will be :" << "\t" <<  NewAnnualS  << endl;

	newmonthlyS = NewAnnualS / 12;
	PmonthlyS = pAnnualS / 12;
	cout << " The prevoiuse monthly salary was : " << PmonthlyS;

	cout << " The new monthly salary will be :" << "\t" << newmonthlyS << endl;

	







	system("pause");
	return 0;

}