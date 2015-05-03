/*
Created by Meusel
Responsible: Meusel ¯\(°_°)/¯
handles all stuff
*/

// include global stuff
#include <iostream>

// include our own stuff
#include "articlesearch.h"
#include "filehandler.h"
#include "menue.h"
#include "statistics.h"
#include "tarticle.h"


int main (void)
{
	TArticle Artikel[1000];
	std::string db_path = "database.csv";
	bool exit = false;
	char input;
	std::fstream database;
	open(db_path, database);
	getData(database, Artikel);
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
  return 0;
}
