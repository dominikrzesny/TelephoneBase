#pragma once
#include <iostream>
#include <fstream>
#include "telefon.h"
#include <qfile.h>

using namespace std;

/// Klasa dziedziczona po klasie Telefon
class Stacjonarny : public Telefon {

private:
	int dlugosc_kabla;///< Zmienna przechowujaca dlugosc kabla
	

public:
	/// Domyslny konstruktor
	Stacjonarny();

	/// Destruktor
	~Stacjonarny();

	/// Funckja imitujaca odbieranie telefonu
	void odbierzTelefon();

	/// Funkcja wypisujaca na ekran stan obiektu
	string wyswietlStan();

	/// Funkcja pozyskujaca typ urzadzenia
	/**
	\param Funkcja nie przyjmuje zadnych parametrow
	\return Funkcja zwraca typ urzadzenia */
	string pozyskajTyp();

	/// Funkcja zapisujaca stan obiektu do pliku tekstowego
	void zapiszStanStacjonarnego(fstream &plik);

	/// Funkcja wczytujaca stan obiektu z pliku tekstowego
	void wczytajStacjonarny(fstream &plik);

	/// Operator strumieniowy wyjsciowy
	friend std::ostream& operator << (std::ostream &s, Stacjonarny &stacjonarny);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, Stacjonarny &stacjonarny);


};