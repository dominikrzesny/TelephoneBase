#include <iostream>
#include <string>
#include <fstream>
#include "bateria.h"

using namespace std;

Bateria::Bateria()
{
    #ifdef _DEBUG

	cout << "Wywolano konstruktor Bateria" << endl;

    #endif

    poziom_naladowania=50;
    zywotnosc_baterii=75;


}

void Bateria::naladujBaterie()
{
    poziom_naladowania=100;
}

string Bateria::wyswietlStanBaterii()
{
	string a = to_string(poziom_naladowania);
	string b = to_string(zywotnosc_baterii);

	return "Pozostalo baterii: " + a + " %" + "\n" + "Zywotnosc baterii: " + b + " %" + "\n";
    

}

std::ostream& operator << (std::ostream &s, Bateria &bateria)
{
	s << bateria.poziom_naladowania << endl << bateria.zywotnosc_baterii;
	return s;
}

std::istream& operator >> (std::istream& s, Bateria &bateria)
{
	s >> bateria.poziom_naladowania >> bateria.zywotnosc_baterii;
	return s;
}


    Bateria::~Bateria()
{
    #ifdef _DEBUG

	cout << "Wywolano destruktor ~Bateria" << endl;

    #endif
}

