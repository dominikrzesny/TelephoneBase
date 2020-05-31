#include "Okno1.h"
#include <QLabel>
#include "Program.h"
#include <qmessagebox.h>
#include "telefon.h"

Okno1::Okno1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void Okno1::dodajSmartfon()
	{
	Smartfon *smartfon = new Smartfon;
	Program::obiekty.push_back(smartfon);
	QMessageBox a;
	a.setText("Dodano Smartfon");
	a.exec();
	
	
	}

void Okno1::dodajKomorke() 
{

	Komorka *komorka = new Komorka;
	Program::obiekty.push_back(komorka);
	QMessageBox a;
	a.setText("Dodano Komorke");
	a.exec();

}

void Okno1::dodajStacjonarny()
{

	Stacjonarny *stacjonarny = new Stacjonarny;
	Program::obiekty.push_back(stacjonarny);
	QMessageBox a;
	a.setText("Dodano Stacjonarny");
	a.exec();

}

Okno1::~Okno1()
{
}
