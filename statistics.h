/*
Created by: Abidi, Glehn, Schaefer
Responsible: Abidi, Glehn, Schaefer
provides functions for statistics
*/

#pragma once

#include "tarticle.h"

int teuersterArtikel(TArtikel ZuSuchendeArtikel[]);		// Findet den teuersten Artikel
int guenstigsterArtikel(TArtikel ZuSuchendeArtikel[]);	// Findet den günstigsten Artikel
int anzahlArtikel(TArtikel ZuSuchendeArtikel[]);		// Findet die Anzahl der Artikel
int durschschnittArtikel(TArtikel ZuSuchendeArtikel[]);	// Errechnet den Durschnittspreis aller Artikel
