/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#pragma once
#include <string>
#include <fstream>

// Open specified file. Create if dosent exist
std::fstream *open (std::string filepath);
// Oeffnen der Datei. Filepath gibt den Pfad der Datei an die geoeffnet werden soll.


// Write the given line in the file
void writeLine (std::fstream *file);
//Schreiben des Strings in die Datei 


// Close file 
void close  (void);
//Datei schliesen


void getLine (std::fstream *file);
//Einlesen der Datei in ein String

