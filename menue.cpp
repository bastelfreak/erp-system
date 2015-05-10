/* Created by Bennerscheid, Bost, Reuter
Responsable Bennerscheid, Bost, Reuter
provides three functions for menue stuff
*/

// include global stuff
#include <iostream>

// include our own stuff
#include "articlesearch.h"
#include "filehandler.h"
#include "menue.h"
#include "statistics.h"
#include "tarticle.h"

int menue (TArticle AlleArtikel[])
{
	char choice;

  std::cout << " Please choose one of these menue points: " << std::endl;
  std::cout << " (1) teuersterArtikel " << std::endl;
  std::cout << " (2) guenstigsterArtikel " << std::endl;
  std::cout << " (3) anzahlArtikel " << std::endl;
  std::cout << " (4) ArtikelSuche " << std::endl;
  std::cout << " (4) ArtikelNummerSuche " << std::endl;
  std::cout << " (4) ArtikelNameSuche " << std::endl;
  std::cout << " (4) ArtikelPreisSuche " << std::endl;

  while (true)
  {
    std::cout << " Please enter your choice: ";
    std::cin >> choice;

    switch (choice) 
    {
      case '1': teuersterArtikel(AlleArtikel); break;
      case '2': guenstigsterArtikel(AlleArtikel); break;
      case '3': anzahlArtikel(AlleArtikel); break;
      case '4': ArtikelSuche(AlleArtikel); break;
      case '5': ArtikelNummerSuche(AlleArtikel); break;
      case '6': ArtikelNameSuche(AlleArtikel); break;
      case '7': ArtikelPreisSuche(AlleArtikel); break;
      default: std::cout << "Please choose a valid entry!\n";
        break;
    }

  }
  return 0;
}

