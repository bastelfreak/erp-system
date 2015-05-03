/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#include "filehandler.h"
#include "tarticle.h"
#include <fstream>
#include <iostream>



// Open specified file. Create if it doesn't exists
void open (std::string filepath)
{
	std::fstream file(filepath);

	/*if (!file.good()) 
	{
	create (filepath);
	}
	*/

}

/* writeLine("123|Kondome|5.00", "C:/Daten/Software/AlleArtikel.txt") */

// Write the given line in the file
void writeLine (std::string line, std::string filepath)
{
	std::ofstream file;
	file.open (filepath);

	/* Format der hineingeschriebenen Daten Nummer|Bezeichnung|Preis */
	if (file.is_open())
	{
		file << line << std::endl;
	}
	else
	{	
		std::cout << "File must be open!" << std::endl;
	}

}

// Close file 
void close  (std::string line, std::string filepath)
{
	std::ofstream file;
	file.close();
}

void getLine (std::string filepath)
{
	std::ifstream file(filepath);
	if(!file){
		std::cout << "Cannot open file.";
	} else {
		char str[255];
		while(file){
			file.getline(str, 255);      // Delimiter defaults to newlin
			int i = 0;
			while(str[i] != NULL)
			{
				if (str[i] == '|'){
					std::cout << std::endl;
				} else {
					std::cout << str[i];
				}
				i++;
			}
		}
		file.close();
	}
}

