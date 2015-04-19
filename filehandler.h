/*
Created by Eckhardt, Meusel
Responsible: Eckhardt, Meusel
provides all needed functions for handling files
*/

#pragma once

// Open specified file. Create if dosent exist
bool open (string filepath);
// Öffnen der Datei. Filepath gibt den Pfad der Datei an die geöffnet werden soll.


// Create specified file
bool create (string filepath);
//Datei erstellen falls noch nicht vorhanden. Filepath gibt den pfad der zuerstellenden Datei.


// Write the given line in the file
bool writeLine (string line);
//Schreiben des Strings in die Datei 


// Close file 
bool close  (void);
//Datei schliesen


string getLine (void);
//Einlesen der Datei in ein String
