#pragma once
#include <fstream>
#include <iostream>
#include <qfile.h>

using namespace std;

/// Podklasa telefonu
class KartaPamieci{

private:
    int pojemnosc; ///< Zmienna przechowujaca pojemnosc karty pamieci
    string nazwa_karty;  ///< Zmienna przechowujaca nazwe karty pamieci
    int dlugosc_gwarancji;  ///< Zmienna przechowujaca dlugosc gwarancji karty pamieci
    int szybkosc_odczytu;  ///< Zmienna przechowujaca szybkosc odczytu z karty pamieci

public:
	/// Konstruktor domyslny
    KartaPamieci();

	/// Destruktor
	~KartaPamieci();

	/// Funkcja wypisujaca na ekran specyfikacje karty
    string wyswietlSpecyfikacjeKarty();

	/// Operator strumieniowy wyjsciowy 
	friend std::ostream& operator << (std::ostream &s, KartaPamieci &kartaPamieci);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, KartaPamieci &kartaPamieci);
};
