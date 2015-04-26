/* Created by Bennerscheid, Bost, Reuter
Responsable Bennerscheid, Bost, Reuter
provides three functions for menue stuff
*/

#include <iostream>
#pragma once

using namespace std;

int menue (void)
{
	int choice;

	cout << " Please choose one of these menue points: " << endl;
	cout << " (1) Statisticfuu " << endl;
	cout << " (2) Create a new article " << endl;
	cout << " (3) Article informations " << endl;
	cout << " (4) Search " << endl;

	cout << " Please enter your choice: ";
	cin >> choice;

	switch (choice) 
	{
	case 1: return 1;
		break;
	case 2: return 2;
		break;
	case 3: return 3;
		break;
	case 4: return 4;
		break;

	default:
		do
		{

		cout << "Please choose a valid entry!: ";
		cin >> choice;
		
		}while (choice > 4);

		break;
	}

	
	return choice;

	
}

