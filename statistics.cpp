/*
Created by: Abidi, Glehn, Schaefer
Responsible: Abidi, Glehn, Schaefer
provides functions for statistics
*/

#include <iostream>
#include "statistics.h"

int teuersterArtikel(TArticle AlleArtikel[]) // Programm für die Statistik des teuersten Artikel im Array 
{

	TArticle tartikelZwischenspeicher; // Variable wird Initialisiert
	int hoechsterPreis = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (AlleArtikel[i].price >= hoechsterPreis) //Vergleicht den Wert "Preis" aus dem Array mit Wert in int hoechsterpreis
		{
			hoechsterPreis = AlleArtikel[i].price;		//Überschreibt Wert in Variable mit höherem Wert
			tartikelZwischenspeicher = AlleArtikel[i];	//Überschreibt Werte in tartikelZwischenspeicher
		}
	}
	//Ausgabe in Konsole
  std::cout << "Der teuerste Artikel ist: " << tartikelZwischenspeicher.id << 
	std::endl << tartikelZwischenspeicher.name << std::endl << tartikelZwischenspeicher.price;

	return 0;
}

int guenstigsterArtikel(TArticle AlleArtikel[])
{
	
	TArticle tartikelZwischenspeicher;
	int guenstigsterPreis = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (AlleArtikel[i].price <= guenstigsterPreis)
		{
			guenstigsterPreis = AlleArtikel[i].price;
			tartikelZwischenspeicher = AlleArtikel[i];
		}
	}

  std::cout << "Der guenstigste Artikel ist: " << tartikelZwischenspeicher.id << 
	std::endl << tartikelZwischenspeicher.name << std::endl << tartikelZwischenspeicher.price;

	return 0;
}

int anzahlArtikel(TArticle AlleArtikel[])
{

	int anzahl = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (AlleArtikel[i].id != '\0')
		{
			 anzahl += 1;
		}
	}

  std::cout << "Die Anzahl der Artikel ist: " << anzahl << std::endl;

	return 0;
}
