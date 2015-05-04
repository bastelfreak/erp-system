/*
Date:2015.05.03
Created by: Reuter, Bost
Responsible: Reuter, Bost, Bennerscheid
Use of Code: To enter an article with name & price in the warehouse database array        
*/

#include <iostream>
//#include <tarticle.h>

#pragma once

// defines a basic article struct
struct TArticle
{
  int id;
  char name[256];
  double price;
};

int FreeArticleNumberSearch();
void DirectArticle();
void articleentry(TArticle MeineArtikel[1000]);

void main(void)
{
  //void articleentry(TArticle MeineArtikel[1000]);

    TArticle MeineArtikel[1000];

    int Choose = 0;             //setzt Switch Option "Choose" bei Start auf 0
    int FreeArticleSearch = 0;        //setzt FAS bei Start auf 0
    int DirectArticleEntry = 0;       //setzt DAE bei Start auf 0
    std::string ArticleName = "";     //setzt AN bei Start auf ""
    double ArticlePrice = 0.0;        //setzt AP bei Start auf 0.0


    //cout << " Bitte wählen Sie das Atribut, wonach Sie suchen möchten " <<endl;
    std::cout << " Please choose an Atribute which you want to search  " << std::endl;
    std::cout << " 1 for next free Articel Number" << std::endl;
    std::cout << " 2 for direct entering Articel with ID" << std::endl;

    std::cin >> Choose;

    switch (Choose)
    {
    case 1: FreeArticleSearch = FreeArticleNumberSearch();
      break;

    case 2: DirectArticleEntry = DirectArticle();
      break;

    default:
      std::cout << "Wrong entry, please try again!" << std::endl;
    }


    for (int i = 0; i <= 1000; i++)
    {
      if ((MeineArtikel[i].id == FreeArticleSearch && FreeArticleSearch != 0) || (MeineArtikel[i].name == ArticleName && ArticleName != "") || (MeineArtikel[i].price == ArticlePrice  && ArticlePrice != 0))
      {
        std::cout << "Article Number: " << MeineArtikel[i].id << std::endl;
        std::cout << "Article Name:   " << MeineArtikel[i].name << std::endl;
        std::cout << "Article Price:  " << MeineArtikel[i].price << "Euro" << std::endl;
      }
    }
  }
      

//we switch in this programm, when the user wants to search the ArticleArray for the next free ID Number
int FreeArticleNumberSearch()
{
  int FreeArticleSearch;
  std::cout << "Please enter the Article Number" << std::endl;
  std::cin >> FreeArticleSearch;

  return FreeArticleSearch;
};

//we switch in this programm, when the user wants to enter the Article Data directly with the ID Number
TArticle DirectArticle(TArticle MeineArtikel[])
{
  int i = 0;
  
  for (int i = 0; i<1000; i++)
  {
    std::cout << "Please enter the Article Number" << std::endl;
    std::cin >> MeineArtikel[i].id >> std::endl;
    std::cout << "Bezeichnung: " << std::endl;
    std::cin >> MeineArtikel[i].name >> std::endl;
    std::cout << "Preis: " << std::endl;
    std::cin >> MeineArtikel[i].price >> std::endl;
  }


  return MeineArtikel[];
};


