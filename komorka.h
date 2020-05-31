#pragma once
#include <iostream>
#include <fstream>
#include "telefon.h"
#include "bateria.h"
#include "kartapamieci.h"
#include "konto.h"
#include <qfile.h>
#include <string>

using namespace std;
/// Klasa dziedziczona po klasie Telefon
class Komorka: public Telefon
{

protected:

	int liczba_kontaktow; ///< zmienna przechowujaca liczbe kontaktow
	string model; ///< zmienna przechowujaca model telefonu
	string marka; ///< zmienna przechowujaca marke telefonu
	int rozdzielczosc_aparatu; ///< zmienna przechowujaca rozdzielczosc aparatu 
	

	Bateria bateria; ///<podobiekt 
	Konto konto;	///<podobiekt
	KartaPamieci *kartaPamieci; ///<podobiekt

public:
	/// Domyslny konstruktor klasy Telefon
	Komorka();

	///Destruktor klasy telefon
	~Komorka();

	/// Funkcja wypisujaca na ekran stan obiektu
	string wyswietlStan();

	/// Funkcja pozyskujaca typ urzadzenia
	/**
	\param Funkcja nie przyjmuje zadnych parametrow
	\return Funkcja zwraca typ urzadzenia */
	string pozyskajTyp();

	/// Funkcja zapisujaca stan obiektu do pliku tekstowego
	void zapiszStanKomorki(fstream &plik);

	/// Funkcja wczytujaca stan obiektu z pliku tekstowego
	void wczytajKomorke(fstream &plik);

	/// Funckja imitujaca odbieranie telefonu
	void odbierzTelefon();

	/// Funkcja dodajaca karte pamieci do komorki
	void dodajKartePamieci();

	/// Funkcja usuwajaca karte pamieci z komorki
	void usunKartePamieci();

	/// Funkcja zmieniajaca nazwe komorki
	void zmienMarke(string nowa_marka);

	/// Funkcja zmieniajaca model komorki
	void zmienModel(string nowy_model);

	/// Funkcja modyfikujaca pole ceny komorki
	/** \param Funkcja jako parametr przyjmuje nowa ocene
		\return Funkcja nic nie zwraca 
	*/
	void zmienCene(int nowa_cena);

	/// Funkcja modyfikujaca pole rozdzielczosc aparatu
	/** \param Funkcja jako parametr przyjmuje nowa rozdzielczosc
	\return Funkcja nic nie zwraca
	*/
	void zmienRozdzielczoscAparatu(int nowa_rozdzielczosc);

	/// Funkcja wypisujaca cene komorki na ekran
	void wyswietlCene();

	/// Funkcja wyswietlajaca rozdzielczosc aparatu
	void wyswietlRozdzielczoscAaparatu();

	/// Operator strumieniowy wyjsciowy 
	friend std::ostream& operator << (std::ostream &s, Komorka &komorka);

	/// Operator strumieniowy wejsciowy 
	friend std::istream& operator >> (std::istream &s, Komorka &komorka);
};