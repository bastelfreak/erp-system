/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#include "filehandler.h"
#include <string>
#include <fstream>
#include <iostream>



// Open specified file. Create if it doesn't exists
bool open (std::string filepath)
{
	std::fstream file(filepath);

	/*if (!file.good()) 
	{
	create (filepath);
	}
	*/
	std::ofstream file(filepath);

}

// Write the given line in the file
bool writeLine (std::string line, std::string filepath)
{
	std::ofstream file;
	file.open (filepath);

	if (file.is_open())
	{
		file << line << std::endl;
	}
	else
		
	std::cout << "File must be open!" << std::endl;

	
}

// Close file 
bool close  (std::string line, std::string filepath)
{
	std::ofstream file;
	file.close();
}

std::string getLine (void)
{

}

