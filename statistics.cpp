/*
Created by: Abidi, Glehn, Schaefer
Responsible: Abidi, Glehn, Schaefer
provides functions for statistics
*/


#include <iostream>
#include "statistics.h"
#include "tarticle.h"



int main()
{
	/*
	TArtikel MeineArtikel[1000];
	
	MeineArtikel[10].nummer = 300;
	
	int intteuersterArtikel;
	int intteuersterArtikel = teuersterArtikel; //(MeineArtikel)
	//cout << MeineArtikel[intteuersterArtikel].nummer;
	system("pause");
	*/
}

int teuersterArtikel(TArticle ZuSucheneArtikel[]) // Programm für die Statistik des teuersten Artikel im Array 
{

	struct tartikelZwischenspeicher // Zwischenspeicher für den Artikel mit dem höchsten Preis
	{
		int Artikelnummer;
		char Bezeichnung;
		double Preis;
	};

	tartikelZwischenspeicher tartikelZwischenspeicher; // Variable wird Initialisiert
	int hoechsterPreis = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (ZuSucheneArtikel[i].preis >= hoechsterPreis) //Vergleicht den Wert "Preis" aus dem Array mit Wert in int hoechsterpreis
		{
			hoechsterPreis == TArticle[i].preis;		//Überschreibt Wert in Variable mit höherem Wert
			tartikelZwischenspeicher == TArtikel[i];	//Überschreibt Werte in tartikelZwischenspeicher
		}
	}
	//Ausgabe in Konsole
  std::cout << "Der teuerste Artikel ist: " << tartikelZwischenspeicher.Artikelnummer << 
		std::endl << tartikelZwischenspeicher.Bezeichnung << std::endl << tartikelZwischenspeicher.Preis;

	return 0;
}

int guenstigsterArtikel(TArticle ZuSuchendeArtikel[])
{
	
	struct tartikelZwischenspeicher
	{
		int Artikelnummer;
		char Bezeichnung;
		double Preis;
	};

	tartikelZwischenspeicher tartikelZwischenspeicher;
	int guenstigsterPreis = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (ZuSuchendeArtikel[i].preis <= guenstigsterPreis)
		{
			guenstigsterPreis = ZuSuchendeArtikel[i].preis;
			tartikelZwischenspeicher = ZuSuchendeArtikel[i];
		}
	}

  std::cout << "Der guenstigste Artikel ist: " << tartikelZwischenspeicher.Artikelnummer << 
		std::endl << tartikelZwischenspeicher.Bezeichnung << std::endl << tartikelZwischenspeicher.Preis;

	return 0;
}

int anzahlArtikel(TArticle ZuSuchendeArtikel[])
{

		struct tartikelZwischenspeicher
	{
		int Artikelnummer;
		char Bezeichnung;
		double Preis;
	};

	tartikelZwischenspeicher tartikelZwischenspeicher;
	int anzahl = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (ZuSuchendeArtikel[i].Artikelnummer != NULL)
		{
			 anzahl + 1;
		}
	}

  std::cout << "Die Anzahl der Artikel ist: " << anzahl << std::endl;

	return 0;
}
