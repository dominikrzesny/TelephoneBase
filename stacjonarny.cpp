#include <iostream>
#include <string>
#include <fstream>
#include "stacjonarny.h"

using namespace std;

Stacjonarny::Stacjonarny()
{
	#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Stacjonarny" << endl;
	#endif

	dlugosc_kabla = 3;
	typ_urzadzenia = "Telefon_stacjonarny";
	numer_telefonu = 468381322;
	cena = 50;
}



void Stacjonarny::odbierzTelefon()
{

	cout << "Halo, halo, tutaj telefon stacjonarny" << endl;

}

string Stacjonarny::wyswietlStan()
{
	string a = to_string(dlugosc_kabla);
	string b = to_string(numer_telefonu);
	string c = to_string(cena);

	return "Dlugosc kabla: " + a + " m" + "\n" + "Numer telefonu: " + b + "\n" + "Cena: " + c + " zl" + "\n";

	
}
 
string Stacjonarny::pozyskajTyp()
{
	return typ_urzadzenia;
}

void Stacjonarny::zapiszStanStacjonarnego(fstream &plik)
{
	zapiszStanTelefonu(plik);
	plik << *this;

}

void Stacjonarny::wczytajStacjonarny(fstream &plik) 
{
	wczytajTelefon(plik);
	plik >> *this;

}

std::ostream& operator << (std::ostream &s, Stacjonarny &stacjonarny) 
{
	s << stacjonarny.numer_telefonu << " " << stacjonarny.cena << " " << stacjonarny.dlugosc_kabla << " " ;
	return s;
}

std::istream& operator >> (std::istream& s, Stacjonarny &stacjonarny) 
{
	s >> stacjonarny.numer_telefonu >> stacjonarny.cena >> stacjonarny.dlugosc_kabla;
	return s;
}

Stacjonarny::~Stacjonarny()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Stacjonarny" << endl;
#endif
	
}