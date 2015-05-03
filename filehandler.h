/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#pragma once
#include <string>
#include <fstream>
#include "tarticle.h"

// Check if filepath exists and can be open
bool checkFileExistence(std::string& filepath);
// Ueberprueft ob die Datei vorhanden ist

// Which file you want to open if no file exists?
std::string getFileName();
//Wenn keine Datei vorhanden, welche soll sonst geoeffnet werden?

// Open specified file. Create if dosent exist
void open(std::string filepath, std::fstream& file);
// Oeffnen der Datei. Filepath gibt den Pfad der Datei an die geoeffnet werden soll.


// Write the given line in the file
void writeLine(std::string line, std::fstream& file);
//Schreiben des Strings in die Datei 


// Close file 
void close(std::fstream& file);
//Datei schliesen

// Read Data into Struct 
void getData(std::fstream& file, TArticle AlleArtikel[1000]);
//Einlesen der Datei in ein String
