#include <iostream>
#include <string>
#include <fstream>
#include "smartfon.h"


using namespace std;



Smartfon::Smartfon()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Smartfon" << endl;
#endif
    kartaPamieci=NULL;

	liczba_kontaktow = 25;
	marka = "Samsung";
	model = "J5";
	rozdzielczosc_aparatu=10;
	numer_telefonu = 123456789;
	cena=500;
	ilosc_aplikacji = 42;
	typ_urzadzenia = "Smartfon";


}


Smartfon::Smartfon(const Smartfon &smartfon)
{
   
	marka = smartfon.marka;
	bateria = smartfon.bateria;
	konto = smartfon.konto;
	
	if (kartaPamieci != NULL)
	{
		kartaPamieci = new KartaPamieci();
	}
	kartaPamieci = smartfon.kartaPamieci;

	model = smartfon.model;
	rozdzielczosc_aparatu = smartfon.rozdzielczosc_aparatu;
	numer_telefonu=smartfon.numer_telefonu;
	cena = smartfon.cena;
	ilosc_aplikacji = smartfon.ilosc_aplikacji;
}


void Smartfon::wyswietlInformacjeUrzadzenia()
{
	cout << typ_urzadzenia << endl;
	cout << "Marka:" << marka << endl;
	cout << "Model:" << model << endl;
	cout << "Nr.telefonu:" << numer_telefonu << endl;
	cout << "Cena:" << cena << " zl" << endl;
	cout << "Liczba kontaktow:" << liczba_kontaktow << endl;
	cout << "Rozdzielczosc aparatu:" << rozdzielczosc_aparatu << " Mpix" << endl;
	cout << "Ilosc aplikacji:" << ilosc_aplikacji << endl;
	
}

string Smartfon::wyswietlStan()
{
	
	string a = to_string(liczba_kontaktow);
	string b = to_string(rozdzielczosc_aparatu);
	string c = to_string(numer_telefonu);
	string d = to_string(cena);
	string e = to_string(ilosc_aplikacji);
	return "Marka: " + marka + "\n" + "Model: " + model + "\n" + "Nr.telefonu: " + c + "\n" + "Cena: " + d + " zl" + "\n"
		+ "Liczba kontaktow: " + a + "\n" + "Rozdzielczosc aparatu: " + b + " Mpix" + "\n" + "Ilosc aplikacji: " + e + "\n" +
		bateria.wyswietlStanBaterii() + konto.wyswietlStanKonta() + (kartaPamieci != NULL ? kartaPamieci->wyswietlSpecyfikacjeKarty() : "" ) ;
 
	
}

string Smartfon::pozyskajTyp()
{
	return typ_urzadzenia;
}

void Smartfon::zapiszStanSmartfona(fstream &plik)
{
	zapiszStanKomorki(plik);
	plik << *this;

}

void Smartfon::wczytajSmartfon(fstream &plik)
{
	wczytajKomorke(plik);
	plik >> *this;


}

void Smartfon::odbierzTelefon()
{
	cout << "Halo, halo, tu smartfon" << endl;

}

void Smartfon::wlaczNawigacje()
{

	cout << "Kieruj sie na poludnie" << endl;
}

// destruktor
Smartfon::~Smartfon()
{

	if (kartaPamieci != NULL)
		delete kartaPamieci;

    #ifdef _DEBUG
    cout << "Wywolano domyslny destruktor ~Smartfon" << endl;
    #endif
    

}

std::ostream& operator << (std::ostream &s, Smartfon &smartfon)
{
	s << smartfon.liczba_kontaktow << " " << smartfon.marka << " " << smartfon.model << " " << smartfon.rozdzielczosc_aparatu <<
		" " << smartfon.numer_telefonu << " " << smartfon.cena << " " << smartfon.ilosc_aplikacji << " ";
	return s;
}

std::istream& operator >> (std::istream& s, Smartfon &smartfon)
{
	s >> smartfon.liczba_kontaktow >> smartfon.marka >> smartfon.model >> smartfon.rozdzielczosc_aparatu >> smartfon.numer_telefonu 
		>> smartfon.cena >> smartfon.ilosc_aplikacji;
	return s;
}