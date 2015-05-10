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
	TArticle AlleArtikel[1000];
	std::string db_path = "database.csv";
	bool exit = false;
	char input;
	std::fstream database;
	open(db_path, database);
	getData(database, AlleArtikel);
  std::cout << "Hey, I'm your crazy ERP-System, what do you want to do?\n";
	while(!exit)
	{
		menue(AlleArtikel);
		std::cout << "Do you want to exit the Tool(y)?" << "\n";
		std::cin >> input;
		if(input == 'y' || input == 'Y' || input == 'z' || input == 'Z')
		{
			exit = true;
		}
	}
  return 0;
}
