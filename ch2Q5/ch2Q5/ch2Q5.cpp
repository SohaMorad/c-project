// ch2Q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


	int main()
	
	{

		int j;
		int max;
		int attend;
		int diffrence;

		cout << "How many times you need to repeat this question?\n";

		cin >> j;


		for (int i = 1; i <= j; i++)
		{
			cout << "What is the Capacity of the meeting Room today?";

			cin >> max;

			cout << "How many pepole attend the meeting today ? \n ";

			cin >> attend;

			if (attend <= max) {

				diffrence = max - attend;

				cout << "It is equal to attend the meeting and we still have : \t" << diffrence << " people left \n";

			}

			else if (attend >= max)
			{

				cout << "The meeting cannot be held as planned due to fire regulatios and the max number of people should not exceed :    " << max << "people" << endl;

			}
		}
			system("pause");

			return 0;

		}


