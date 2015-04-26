#include <iostream>
#include "statistics.h"

using namespace std;

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

int teuersterArtikel(TArtikel ZuSucheneArtikel[])
{

	struct tartikelZwischenspeicher
	{
		int Artikelnummer;
		char Bezeichnung;
		double Preis;
	};

	tartikelZwischenspeicher tartikelZwischenspeicher;
	int hoechsterPreis = 0.0;

	for (int i = 1; i < 1000; i++)
	{
		if (TArtikel[i].preis >= hoechsterPreis)
		{
			hoechsterPreis == TArtikel[i].preis;
			tartikelZwischenspeicher == TArtikel[i];
		}
	}

	cout << "Der teuerste Artikel ist: " << tartikelZwischenspeicher.Artikelnummer << 
		endl << tartikelZwischenspeicher.Bezeichnung << endl << tartikelZwischenspeicher.Preis;

	return 0;
}

int guenstigsterArtikel(TArtikel ZuSuchendeArtikel[])
{
	
	struct tartikelZwischenspeicher
	{
		int Artikelnummer;
		char Bezeichnung;
		double Preis;
	};

	tartikelZwischenspeicher tartikelZwischenspeicher;
	int guenstigsterPreis = 0.0;

	for (int i = 1; i < 1000; i++)
	{
		if (TArtikel[i].preis <= guenstigsterPreis)
		{
			guenstigsterPreis == TArtikel[i].preis;
			tartikelZwischenspeicher == TArtikel[i];
		}
	}

	cout << "Der guenstigste Artikel ist: " << tartikelZwischenspeicher.Artikelnummer << 
		endl << tartikelZwischenspeicher.Bezeichnung << endl << tartikelZwischenspeicher.Preis;

	return 0;
}

int anzahlArtikel(TArtikel ZuSuchendeArtikel[])
{

}

int durschschnittArtikel(TArtikel ZuSuchendeArtikel[])
{

}


