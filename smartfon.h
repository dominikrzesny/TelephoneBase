#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "komorka.h"
#include <vector>
#include <qfile.h>

/// Klasa dziedziczona po klasie Komorka
class Smartfon : public Komorka{

private:
  
	int ilosc_aplikacji; ///< zmienna przechowujaca ilosc aplikacji

public:

	/// Domyslny konstruktor
    Smartfon();  

	/// Destruktor
    ~Smartfon();

	/// Funkcja wypisujaca na ekran stan obiektu
	string wyswietlStan();

	/// Funkcja pozyskujaca typ urzadzenia
	/**
	\param Funkcja nie przyjmuje zadnych parametrow
	\return Funkcja zwraca typ urzadzenia */
	string pozyskajTyp();

	/// Funkcja zapisujaca stan obiektu do pliku tekstowego
	void zapiszStanSmartfona(fstream &plik);

	/// Funkcja wczytujaca stan obiektu z pliku tekstowego
	void wczytajSmartfon(fstream &plik);

	/// Funckja imitujaca odbieranie telefonu
	void odbierzTelefon();

	/// Funkcja wlaczajaca nawigacje
	void wlaczNawigacje();

	/// Konstruktor kopiujacy 
	Smartfon(const Smartfon &smartfon);

	/// Funkcja wyswietlajaca informacje o urzadzeniu na ekran
	void wyswietlInformacjeUrzadzenia();

	/// Operator strumieniowy wyjsciowy 
	friend std::ostream& operator << (std::ostream &s, Smartfon &smartfon);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, Smartfon &smartfon);
   
};
