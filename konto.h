#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <qfile.h>

using namespace std;

/// Podklasa telefonu
class Konto{

private:

string nazwa_operatora_komorkowego; ///<Zmienna przechowujaca nazwe operatora komorkowego
int stan_konta; ///< Zmienna przechowujaca stan konta
int zasieg; ///< Zmienna przechowujaca zasieg

public:
	/// Domyslny konstruktor
    Konto();    

	/// Destruktor
    ~Konto();    

	/// Funkcja wyswietlajaca stan konta
    string wyswietlStanKonta();

	/// Funkcja dodajaca srodki na koncie
    void doladujKonto(int kwota);

	/// Funkcja poprawiajaca zasieg
    void poprawZasieg();


	/// Operator strumieniowy wyjsciowy 
	friend std::ostream& operator << (std::ostream &s, Konto &konto);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, Konto &konto);

};
