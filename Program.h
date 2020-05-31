#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Program.h"
#include <QString>
#include "Okno1.h"
#include "telefon.h"
#include <vector>
#include <QGraphicsScene>



class Program : public QMainWindow
{
	Q_OBJECT

public:
	Program(QWidget *parent = Q_NULLPTR);
	static vector <Telefon*> obiekty;

	public slots:
	void dodajObiekty();
	void dodajObiektyDoListy();
	void czyszczenieVectora();
	void wyswietlDane();
	void wlaczPrzycisk();
	void wyswietlObrazek();
	void usunObiekt();
	void zapisz();
	//void wczytaj(); //Nie mam pojecia czemu funkcja ta blokuje dzialanie calego programu, zawiesza go, kod wydaje sie okej

private:
	Ui::ProgramClass ui;
	QGraphicsScene s;
	QPixmap obrazek;
};
