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
	string db_path = "/path/to/file";
	bool open_database = false;
	open_database = open(db_path);

	if (open_database != true)
	{
		std::cout << "We were unable to open a valid database, we tried" << db_path << "\n";
	} else {
		// do the awesome stuff
	}
}
