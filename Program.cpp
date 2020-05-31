#include "Program.h"
#include <qfile.h>
#include <qtextstream.h>
#include <Qstring>
#include <qfiledialog.h>
#include <qiodevice.h>
#include <qmessagebox.h>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "Okno1.h"



vector <Telefon*> Program::obiekty;




Program::Program(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
}


void Program::dodajObiekty()
{
	Okno1 okno1;
	okno1.exec();
	if (okno1.Accepted) 
		dodajObiektyDoListy();

}

void Program::dodajObiektyDoListy()
{
	{
		ui.listaObiektow->clear();
		for (int i = 0; i < obiekty.size(); i++) 
		{
			ui.listaObiektow->addItem(QString::fromStdString(obiekty[i]->pozyskajTyp()));
		}
	}
}

void Program::czyszczenieVectora()
{

	for (auto obiekt : obiekty)
		delete obiekt;
	close();
	
}

void Program::wyswietlDane() 
{
	ui.listaDanych->setEnabled(true);
	ui.listaDanych->clear();
	int i = ui.listaObiektow->currentIndex().row();
	ui.listaDanych->addItem(QString::fromStdString(obiekty[i]->wyswietlStan()));
	
}

void Program::wlaczPrzycisk()
{
	ui.opcja2->setEnabled(true);
	ui.opcja6->setEnabled(true);
	s.clear();
}

void Program::wyswietlObrazek()
{

	Smartfon *smartfon;
	Komorka *komorka;
	Stacjonarny *stacjonarny;

	int j = ui.listaObiektow->currentIndex().row();

	if ((smartfon = dynamic_cast<Smartfon*>(obiekty[j])))
	{
		ui.graphicsView->setScene(&s);

		if (obrazek.load("Resources/smartfon.jpg"))
		{
			s.setSceneRect(obrazek.rect());
			s.clear();
			s.addPixmap(obrazek);
			ui.graphicsView->fitInView(obrazek.rect());

		}
	}

	else if ((komorka = dynamic_cast<Komorka*>(obiekty[j])))
	{
		ui.graphicsView->setScene(&s);

		if (obrazek.load("Resources/komorka.jpg"))
		{
			s.setSceneRect(obrazek.rect());
			s.clear();
			s.addPixmap(obrazek);
			ui.graphicsView->fitInView(obrazek.rect());

		}
	}

	else if ((stacjonarny = dynamic_cast<Stacjonarny*>(obiekty[j])))
	{
		ui.graphicsView->setScene(&s);

		if (obrazek.load("Resources/stacjonarny.jpg"))
		{
			s.setSceneRect(obrazek.rect());
			s.clear();
			s.addPixmap(obrazek);
			ui.graphicsView->fitInView(obrazek.rect());

		}
	}


}

void Program::usunObiekt() 
{

	
	int i = ui.listaObiektow->currentIndex().row();
	obiekty.erase(obiekty.begin() + i);
	dodajObiektyDoListy();
	ui.listaDanych->clear();
	ui.opcja2->setEnabled(false);
	ui.listaDanych->setEnabled(false);
	s.clear();
	ui.graphicsView->setEnabled(false);



}

void Program::zapisz() 
{

	if (obiekty.size() == 0)
	{
		QMessageBox mb;
		mb.setText("Brak obiektow do zapisu");
		mb.exec();
	}
	else {

		QString nazwa_pliku = QFileDialog::getSaveFileName(this,
			tr("Zapisz obiekty"), "",
			tr("Text files (*.txt);;All Files (*)"));

		string nazwa = nazwa_pliku.toStdString();
		fstream plik(nazwa, ios::app);

		

		for (Telefon *tel : obiekty)
		{
			if (tel->pozyskajTyp() == "Telefon_stacjonarny")
			{
				dynamic_cast<Stacjonarny*>(tel)->zapiszStanStacjonarnego(plik);

			}
			else if (tel->pozyskajTyp() == "Telefon_komorkowy")
			{
				dynamic_cast<Komorka*>(tel)->zapiszStanKomorki(plik);

			}
			else if (tel->pozyskajTyp() == "Smartfon")
			{
				dynamic_cast<Smartfon*>(tel)->zapiszStanSmartfona(plik);

			}
		}

		plik.close();
	}



}

/*void Program::wczytaj()   // Nie mam pojecia czemu funkcja ta blokuje dzialanie calego programu, zawiesza go ;/
{


	QString nazwa_pliku = QFileDialog::getOpenFileName(this,
		tr("Wczytaj"), "",
		tr("Text files (*.txt);;All Files (*)"));

	Komorka *komorka;
	Stacjonarny *stacjonarny;
	Smartfon *smartfon;
	fstream plik2;

	string nazwa = nazwa_pliku.toStdString();
	plik2.open(nazwa, ios::in);

	while (!plik2.eof())
	{
		string typ_urzadzenia;
		plik2 >> typ_urzadzenia;

		if (typ_urzadzenia == "Telefon_stacjonarny")
		{
			stacjonarny = new Stacjonarny();
			stacjonarny->wczytajStacjonarny(plik2);
			obiekty.push_back(stacjonarny);
			
		}
		if (typ_urzadzenia == "Telefon_komorkowy")
		{
			komorka = new Komorka();
			komorka->wczytajKomorke(plik2);
			obiekty.push_back(komorka);
			
		}
		if (typ_urzadzenia == "Smartfon")
		{
			smartfon = new Smartfon();
			smartfon->wczytajSmartfon(plik2);
			obiekty.push_back(smartfon);
			
		}

	}

	plik2.close();
	dodajObiektyDoListy();
}*/