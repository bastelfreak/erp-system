/*
Created by Meusel
Responsible: Stolz, Bader, Engel
mutliple functions to search for an article
*/

#pragma once
#include "string"
#include "tarticle.h"

int ArtikelNummerSuche(); //we switch in this programm, when the user wants to search the ID number of the product
std::string ArtikelNameSuche (); //we switch in this programm, when the user wants to search the name of the product
double ArtikelPreisSuche (); //we switch in this programm, when the user wants to search the price of the product
void ArtikelSuche (TArticle MeineArtikel[]);
