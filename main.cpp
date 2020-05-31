#include "Program.h"
#include <QtWidgets/QApplication>
#include <QDialog>
#include <Telefon.h>
#include <Okno1.h>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Program w;
	w.show();

	return a.exec();
}
