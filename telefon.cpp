#include <iostream>
#include <string>
#include <fstream>
#include "telefon.h"

using namespace std;

Telefon::Telefon() {
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Telefon" << endl;
#endif
	typ_urzadzenia = "Telefon";
	numer_telefonu = 12345678;
	cena = 50;
}

void Telefon::zapiszStanTelefonu(fstream & plik)
{
	plik << typ_urzadzenia << " " << numer_telefonu <<" " << cena << " ";
}

void Telefon::wczytajTelefon(fstream &plik)
{
	plik >> *this;

}


string Telefon::pozyskajTyp()
{
	return typ_urzadzenia;
}

std::ostream& operator << (std::ostream &s, Telefon &telefon) 
{
	s << telefon.numer_telefonu<< " "<< telefon.cena<< " ";
	return s;
}

std::istream& operator >> (std::istream& s, Telefon &telefon) 
{
	s >> telefon.numer_telefonu >> telefon.cena;
	return s;
}


Telefon::~Telefon()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Telefon" << endl;
#endif
}

