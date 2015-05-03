/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#include "filehandler.h"
#include <iostream>

// Check if filepath exists and can be open
bool checkFileExistence(std::string& filepath)
{
	std::fstream f(filepath.c_str());
	return f.is_open();
}

// Which file you want to open if no file exists?
std::string getFileName()
{
	std::string filename;
	std::cout << "Please enter in the name of the file you'd like to open: ";
	std::cin >> filename;
	return filename;
}

// Open specified file. Create if it doesn't exists
void open(std::string filepath, std::fstream& file)
{
	bool file_exists = checkFileExistence(filepath);
	if (!file_exists)
	{
		std::cout << "File " << filepath << " not found.\n";
		filepath = getFileName(); //Not found
		std::ofstream dummy(filepath.c_str());
		if (!dummy.is_open()) {
			std::cerr << "Could not create file.\n";
			return;
		}
		std::cout << "File created.\n";
	}
	else
	{
		file.open(filepath.c_str());
	}
}

/* writeLine("123;Kondome;5.00", "C:/Daten/Software/AlleArtikel.txt") */

// Write the given line in the file
void writeLine(std::string line, std::fstream& file)
{
	/* Format der hineingeschriebenen Daten Nummer;Bezeichnung;Preis */
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
void close(std::fstream& file)
{
	file.close();
}


// Read Data into Struct 
void getData(std::fstream& file, TArticle AlleArtikel[1000])
{
	if (!file.is_open())
	{
		std::cout << "File must be open!" << std::endl;
	}
	else 
	{
		char cText[256];
		char * pch;
		int i = 0;
		int n;
		while (!file.eof()){
			file.getline(cText, sizeof(cText));
			pch = std::strtok(cText, ";");
			n = 1;
			while (pch != NULL)
			{
				if (n == 1)
					AlleArtikel[i].id = atoi(pch);
				else if (n == 2)
					std::strcpy(AlleArtikel[i].name, pch);
				else if (n == 3)
					AlleArtikel[i].price = atof(pch);
				pch = std::strtok(NULL, ";");
				n++;
			}
			i++;
		}
	}
}

