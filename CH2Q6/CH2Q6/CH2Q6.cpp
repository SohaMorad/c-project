// CH2Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{


	int houres;
	int overtime;
	int depent;
	int WeeklyS1;
	int WeeklyS2;
	//int rate = 16.78;
	//int SSTax = 0.06;
	//int FIT = 0.014;
	//int SIT = 0.05;
	int salary;
	int salary1;
	int salary2;
	int salary3;
	int salary4;
	int deduct1;
	int deduct2;
	int deduct3;
	int j;

	cout << "How many times you need to repeat this?\n";
	cin >> j;
	for (int i = 1; i <= j; i++) {

		cout << "How many houres the employee work? :   " << endl;
		cin >> houres;
		cout << "How many dependent you have ?     :" << endl;
		cin >> depent;

		if ((houres == 40) && (depent<3)) {

			salary = 40 * 16.78;
			deduct1 = salary * 0.06;
			deduct2 = salary * 0.14;
			deduct3 = salary * 0.05;
		    salary1 = salary - deduct1;
			salary2 = salary1 - deduct2;
			salary3 = salary2 - deduct3;
			WeeklyS1 = salary3 - 10;


			cout << "The  paymenet take-home pay :" << "\t" << WeeklyS1 << "  Dollares\n";


		}

		else if ((houres == 40) && (depent >= 3)) {
			salary = 40 * 16.78;
			deduct1 = salary * 0.06;
			deduct2 = salary * 0.14;
			deduct3 = salary * 0.05;
			salary1 = salary - deduct1;
			salary2 = salary1 - deduct2;
			salary3 = salary2 - deduct3;
			WeeklyS1 = salary3 - 10;

			WeeklyS2 = WeeklyS1 + 35;

			cout << "The  paymenet take-home pay :" << "\t" << WeeklyS2 << "  Dollares\n";


		}
		else if ((houres > 40) && (depent<3)) {

			
			overtime = houres - 40;
		    salary1 = overtime * 25.17;
			salary2 = 40 * 16.78;
			salary3 = salary1 + salary2;
			deduct1 = salary3 * 0.06;
			deduct2 = salary3 * 0.14;
			deduct3 = salary3 * 0.05;
			salary4 = salary3 - deduct1 - deduct2 - deduct3;
			WeeklyS1 = salary4 - 10;


			cout << "The  paymenet take-home pay :       " << WeeklyS1 << "Dollares\n";

		}

		else if ((houres > 40) && (depent >= 3)) {

			
			overtime = houres - 40;
			salary1 = overtime * 25.17;
			salary2 = 40 * 16.78;
			salary3 = salary1 + salary2;
			deduct1 = salary3 * 0.06;
			deduct2 = salary3 * 0.14;
			deduct3 = salary3 * 0.05;
			salary4 = salary3 - deduct1 - deduct2 - deduct3;
			WeeklyS1 = salary4 - 10;
			WeeklyS2 = WeeklyS1 + 35;


			cout << "The  paymenet take-home pay :       " << WeeklyS2 << "Dollares";

		}

	}
	system("pause");

	return 0;
    
}

