#pragma once
#include <iostream>
#include <fstream>
#include <qfile.h>

using namespace std;

/// Virtualna klasa bazowa
class Telefon {

protected:
	string typ_urzadzenia; ///< zmienna okreslajaca typ urzadzenia
	int numer_telefonu; ///< zmienna przechowujaca numer telefonu
	int cena; ///< zmienna przechowujaca cene urzadzenia


public:
	/// Konstruktor domyslny wirtualnej klasy Telefon
	Telefon();

	/// Destruktor wirtualnej klasy Telefon
	virtual ~Telefon();

	/// Funkcja virtualna imitujaca odbieranie telefonu
	virtual void odbierzTelefon() = 0; 

	/// Funkcja virtualna wyswietlajaca stan obiektu
	virtual string wyswietlStan() = 0;

	/// Funkcja zapisujaca stan obiektu do pliku tekstowego
	void zapiszStanTelefonu(fstream &plik);

	/// Funkcja wczytujaca stan obiektu z pliku tekstowego
	void wczytajTelefon(fstream &plik);

	/// Funkcja pozyskujaca typ urzadzenia
	/**
	\param Funkcja nie przyjmuje zadnych parametrow
	\return Funkcja zwraca typ urzadzenia */
	string pozyskajTyp();

	/// Operator strumieniowy wyjsciowy 
	friend std::ostream& operator << (std::ostream &s, Telefon &telefon);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, Telefon &telefon);

};
