/*
Created by Meusel
Responsible: Meusel?
handles all stuff
*/

// include global stuff
#include <iostream>
#include <string>

// include our own stuff
#include "articlesearch.h"
#include "filehandler.h"
#include "menue.h"
#include "statistics.h"
#include "tarticle.h"


void main (void)
{	
	std::string db_path = "/path/to/file";
	bool open_database = false;
	open_database = open(db_path);
	bool exit = false;
	char input;

	if (open_database != true)
	{
		std::cout << "We were unable to open a valid database, we tried" << db_path << "\n";
	} else {
		while(!exit)
		{
			int methodNumber = menue();
			switch(methodNumber)
			{
				case 1: break;
				case 2: break;
				case 3: break;
				case 4: break;
				default: break;
			}
			std::cout << "Do you want to exit the Tool(y)?" << "\n";
			std::cin >> input;
			if(input == 'y' || input == 'Y' || input == 'z' || input == 'Z')
			{
				exit = true;
			}
		}
	}
}