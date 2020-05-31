#include "komorka.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Komorka::Komorka()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Komorka" << endl;
#endif
	kartaPamieci = NULL;
	liczba_kontaktow = 10;
	marka = "Nokia";
	model = "3310";
	rozdzielczosc_aparatu = 0;
	numer_telefonu = 123456789;
	cena = 100;
	typ_urzadzenia = "Telefon_komorkowy";
}

string Komorka::wyswietlStan()
{
	
	string a = to_string(liczba_kontaktow);
	string b = to_string(rozdzielczosc_aparatu);
	string c = to_string(numer_telefonu);
	string d = to_string(cena);

	return "Marka: " + marka + "\n" + "Model: " + model + "\n" + "Nr.telefonu: " + c + "\n" + "Cena: " + d + " zl" + "\n"
		+ "Liczba kontaktow: " + a + "\n" + "Rozdzielczosc aparatu: " + b + " Mpix" + "\n" +
		bateria.wyswietlStanBaterii() + konto.wyswietlStanKonta() + (kartaPamieci != NULL ? kartaPamieci->wyswietlSpecyfikacjeKarty() : "");
	

}

string Komorka::pozyskajTyp()
{
	return typ_urzadzenia;
}

void Komorka::zapiszStanKomorki(fstream &plik)
{
	zapiszStanTelefonu(plik);
	plik << *this;

}

void Komorka::wczytajKomorke(fstream &plik)
{
	wczytajTelefon(plik);
	plik >> *this;

}

void Komorka::odbierzTelefon()
{
	cout << "Halo, halo, tu telefon komorkowy"<<endl;

}



void Komorka::zmienMarke(string nowa_marka)
{
	marka = nowa_marka;
}

void Komorka::zmienModel(string nowy_model)
{
	model = nowy_model;
}

void Komorka::zmienCene(int nowa_cena)
{
	cena = nowa_cena;
}

void Komorka::zmienRozdzielczoscAparatu(int nowa_rozdzielczosc)
{
	rozdzielczosc_aparatu = nowa_rozdzielczosc;

}

void Komorka::wyswietlRozdzielczoscAaparatu()
{
	cout << "Rozdzielczosc aparatu= " << rozdzielczosc_aparatu << endl;
}

void Komorka::wyswietlCene()
{
	cout << "Cena= " << cena << endl;
}

void Komorka::dodajKartePamieci() // dynamiczne dodawanie karty pamieci, alokacja pamieci
{
	if (kartaPamieci == NULL)
	{
		kartaPamieci = new KartaPamieci();
	}
	else
		cout << "Karta pamieci jest juz wlozona" << endl;

}

void Komorka::usunKartePamieci() //zwalnianie pamieci i usuwanie karty
{
	if (kartaPamieci == NULL)
	{
		cout << "Nie mozna usunac karty, gdyz zostala juz usunieta" << endl;
	}
	else
	{
		delete kartaPamieci;
		kartaPamieci = NULL;
		cout << "Karta pamieci zostala usunieta!" << endl;
	}
}

Komorka::~Komorka()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny destruktor ~Komorka" << endl;
#endif

	if (kartaPamieci != NULL)
		delete kartaPamieci;

}

std::ostream& operator << (std::ostream &s, Komorka &komorka)
{
	s << komorka.liczba_kontaktow << " " << komorka.marka << " " << komorka.model << " " << komorka.rozdzielczosc_aparatu <<
		" " << komorka.numer_telefonu << " " << komorka.cena << " ";
	return s;
}

std::istream& operator >> (std::istream& s, Komorka &komorka)
{
	s >> komorka.liczba_kontaktow >> komorka.marka >> komorka.model >> komorka.rozdzielczosc_aparatu >> komorka.numer_telefonu >> komorka.cena;
	return s;
}