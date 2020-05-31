#include <iostream>
#include <string>
#include <fstream>
#include "kartapamieci.h"
#include "smartfon.h"

using namespace std;

KartaPamieci::KartaPamieci()
{
    #ifdef _DEBUG

	cout << "Wywolano konstruktor KartaPamieci " << endl;

    #endif

    cout<<"Dodano karte pamieci!"<<endl;

    pojemnosc=16;
    nazwa_karty="SanDisc B130";
    dlugosc_gwarancji=1;
    szybkosc_odczytu=80;

}

string KartaPamieci::wyswietlSpecyfikacjeKarty()
{

	string a = to_string(pojemnosc);
	string b = to_string(dlugosc_gwarancji);
	string c = to_string(szybkosc_odczytu);


	return "Pojemnosc karty: " + a + " GB" + "\n" + "Nazwa karty: " + nazwa_karty + "\n" + "Dlugosc gwarancji: " + b + " lat" +
		"\n" + "Szybkosc odczytu: " + c + "MB/s" + "\n";
       
}

std::ostream& operator << (std::ostream &s, KartaPamieci &kartaPamieci)
{
	s << kartaPamieci.pojemnosc << endl << kartaPamieci.nazwa_karty << endl << kartaPamieci.dlugosc_gwarancji << endl << kartaPamieci.szybkosc_odczytu;
	return s;
}

std::istream& operator >> (std::istream& s, KartaPamieci &kartaPamieci)
{
	s >> kartaPamieci.pojemnosc >> kartaPamieci.nazwa_karty >> kartaPamieci.dlugosc_gwarancji >> kartaPamieci.szybkosc_odczytu;
	return s;
}


KartaPamieci::~KartaPamieci()
{
	
	#ifdef _DEBUG

    cout << "Wywolano destruktor ~KartaPamieci" << endl;

    #endif

}
