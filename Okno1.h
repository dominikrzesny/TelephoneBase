#pragma once

#include <QDialog>
#include "ui_Okno1.h"
#include <QWidget>
#include <smartfon.h>
#include <stacjonarny.h>
#include <komorka.h>
#include "Program.h"
#include <vector>

class Okno1 : public QDialog
{
	Q_OBJECT

public:
	Okno1(QWidget *parent = Q_NULLPTR);
	~Okno1();

	public slots:
	void dodajSmartfon();
	void dodajKomorke();
	void dodajStacjonarny();

private:
	Ui::okno1 ui;
	
};
