/* Created by Bennerscheid, Bost, Reuter
Responsable Bennerscheid, Bost, Reuter
provides three functions for menue stuff
*/

#include <iostream>
#include "menue.h"

int menue (void)
{
	int choice;

  std::cout << " Please choose one of these menue points: " << std::endl;
  std::cout << " (1) Statisticfuu " << std::endl;
  std::cout << " (2) Create a new article " << std::endl;
  std::cout << " (3) Article informations " << std::endl;
  std::cout << " (4) Search " << std::endl;

  std::cout << " Please enter your choice: ";
  std::cin >> choice;

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

      std::cout << "Please choose a valid entry!: ";
      std::cin >> choice;
		
		}while (choice > 4);

		break;
	}
	return choice;	
}

