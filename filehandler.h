/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#pragma once


// Open specified file. Create if dosent exist
bool open (std::string filepath);
// Oeffnen der Datei. Filepath gibt den Pfad der Datei an die geoeffnet werden soll.


// Write the given line in the file
bool writeLine (std::string line);
//Schreiben des Strings in die Datei 


// Close file 
bool close  (void);
//Datei schliesen


std::string getLine (void);
//Einlesen der Datei in ein String

