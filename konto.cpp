#include "konto.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Konto::Konto()
{
    #ifdef _DEBUG
	cout << "Wywolano konstruktor Konto" << endl;
    #endif

    nazwa_operatora_komorkowego="Plus";
    stan_konta=10;
    zasieg=0;

}

string Konto::wyswietlStanKonta()
{

	string a = to_string(stan_konta);
	string b = to_string(zasieg);
   
	return "Operator komorkowy: " + nazwa_operatora_komorkowego + "\n" + "Stan konta: " + a + " zl:" + "\n" + "Zasieg: " + b + "\n";

}



void Konto::doladujKonto(int kwota)
{
    stan_konta=stan_konta+kwota;

}

void Konto::poprawZasieg()
{

    zasieg=zasieg+1;

}


std::ostream& operator << (std::ostream &s, Konto &konto)
{
	s << konto.nazwa_operatora_komorkowego << endl << konto.stan_konta << endl << konto.zasieg;
	return s;
}

std::istream& operator >> (std::istream& s, Konto &konto)
{
	s >> konto.nazwa_operatora_komorkowego >> konto.stan_konta >> konto.zasieg;
	return s;
}

Konto::~Konto()
{
    #ifdef _DEBUG

    cout << "Wywolano destruktor ~Konto" << endl;

    #endif

}


