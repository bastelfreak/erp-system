/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#pragma once
#include <string>


// Open specified file. Create if dosent exist
void open (std::string filepath);
// Oeffnen der Datei. Filepath gibt den Pfad der Datei an die geoeffnet werden soll.


// Write the given line in the file
void writeLine (std::string line);
//Schreiben des Strings in die Datei 


// Close file 
void close  (void);
//Datei schliesen


void getLine (std::string filepath);
//Einlesen der Datei in ein String

