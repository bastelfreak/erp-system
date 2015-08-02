/*
Created by Meusel
Responsible: Stolz, Bader, Engel
mutliple functions to search for an article
*/

#include <iostream>
#include "articlesearch.h"

void ArtikelSuche (TArticle MeineArtikel[])
{
  //TArtikel MeineArtikel[1000];

	int Auswahl1 = 0;
	int ArtikelNummer = 0;
  std::string ArtikelName = "";
	double ArtikelPreis = 0.0;

	//cout << " Bitte wählen Sie das Atribut, wonach Sie suchen möchten " <<endl;
  std::cout << " Please choose an Atribute which you want to search  " << std::endl;
  std::cout << " 1 for Articel Number" << std::endl;
  std::cout << " 2 for Articel Name" << std::endl;
  std::cout << " 3 for Articel Price" << std::endl;

  std::cin >> Auswahl1;

	switch (Auswahl1)
	{
	case 1: ArtikelNummer = ArtikelNummerSuche();
		break;

	case 2: ArtikelName = ArtikelNameSuche ();
		break;

	case 3: ArtikelPreis = ArtikelPreisSuche();
		break;


	default:
    std::cout << "Error, please try again!" << std::endl;
	}


	for (int i=0; i<=1000;i++)
	{ 
		if ((MeineArtikel[i].id == ArtikelNummer && ArtikelNummer != 0) || (MeineArtikel[i].name == ArtikelName && ArtikelName != "") || (MeineArtikel[i].price == ArtikelPreis  && ArtikelPreis != 0))
		{
      std::cout << "Article Number: " << MeineArtikel[i].id << std::endl;
      std::cout << "Article Name:   " <<MeineArtikel[i].name << std::endl;
      std::cout << "Article Price:  " << MeineArtikel[i].price << "Euro" << std::endl;
		}
	}
}


//we switch in this programm, when the user wants to search the ID number of the product
int ArtikelNummerSuche()
{
	int ArtikelNummer;
	// cout<< "Bitte geben Sie nun die Artikel-Nummer ein" <<endl;
  std::cout<< "Please enter the Article Number" << std::endl;
  std::cin >> ArtikelNummer;

	return ArtikelNummer;
}

//we switch in this programm, when the user wants to search the name of the product
std::string ArtikelNameSuche ()
{
  std::string ArtikelName;
	//cout<< "Bitte geben Sie den Namen des Produktes ein!" <<endl;
  std::cout << "Please enter the Article Name" << std::endl;
  std::cin >> ArtikelName;

	return ArtikelName;
}

//we switch in this programm, when the user wants to search the price of the product
double ArtikelPreisSuche ()
{
	double ArtikelPreis;
	//cout<< "Bitte geben Sie den Preis des Produktes ein!" <<endl;
  std::cout << "Please enter the Article Price" << std::endl;
  std::cin >> ArtikelPreis;

	return ArtikelPreis;
}
