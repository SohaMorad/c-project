// Ch3Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int repeat;
	char day[2];
	double time;
	int duration;
	double cost1;
	double cost2;
	double cost3;

	cout << "Enter how many times you need to repeat this program:";
	cin >> repeat;
	for (int i = 1; i <= repeat; i++) {
		cout << "Enter the Day using Two charcter only like Mo for Moday and Tu for Tuesday using uppercase letters or lowercase...etc :\n";
		cin >> day;
		cout << day << endl;
		
		cout << "Enter the Time you make a call: ";
		cin >> time;
		cout << "Enter the duratin of call using number of minutes :";
		cin >> duration;


		if(   (strcmp(day , "sa")) || (strcmp(day ,"Sa")) || (strcmp(day, "Su")) || (strcmp(day, "su")) ) {
			


			cost1 = duration * 0.15;
			cout << "The cost of the call is :" << "\t" << cost1 << "Dollars" << endl;

			}
			
		else {
			if  ( (time >= 8) || (time <= 18)  ) {

				cost2 = duration * 0.40;

				cout << "The cost of the call is :" << "\t" << cost2 << "Dollars" << endl;
			}

			
			
			else if ( (time < 8) || ( time> 18)    ) {
				cost3 = duration * 0.25;
				cout << "The cost of the call is :" << "\t" << cost3 << "Dollars" << endl;
			
			
			}
		
		
		}
			
			


		}



	}

   


