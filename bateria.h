#pragma once
#include <fstream>
#include <iostream>
#include <qfile.h>
#include <string>

using namespace std;

/// Podklasa telefonu 
class Bateria{

private:

    int poziom_naladowania; ///<Zmienna przechowujaca poziom naladowania baterii
    int zywotnosc_baterii; ///< Zmienna przechowujaca zywotnosc baterii

public:
	/// Domyslny konstruktor
    Bateria(); 

	/// Destruktor
    ~Bateria(); 

	/// Funkcja wyswietlajaca stan baterii
    string wyswietlStanBaterii();

	/// Funkcja ladujaca baterie
    void naladujBaterie();

	/// Operator strumieniowy wyjsciowy
	friend std::ostream& operator << (std::ostream &s, Bateria &bateria);

	/// Operator strumieniowy wejsciowy
	friend std::istream& operator >> (std::istream &s, Bateria &bateria);

};
