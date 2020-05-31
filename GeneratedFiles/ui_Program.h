/********************************************************************************
** Form generated from reading UI file 'Program.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAM_H
#define UI_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgramClass
{
public:
    QWidget *centralWidget;
    QPushButton *opcja2;
    QPushButton *opcja3;
    QPushButton *opcja1;
    QPushButton *opcja4;
    QPushButton *opcja5;
    QListWidget *listaObiektow;
    QListWidget *listaDanych;
    QGraphicsView *graphicsView;
    QPushButton *opcja6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProgramClass)
    {
        if (ProgramClass->objectName().isEmpty())
            ProgramClass->setObjectName(QStringLiteral("ProgramClass"));
        ProgramClass->setEnabled(true);
        ProgramClass->resize(792, 602);
        centralWidget = new QWidget(ProgramClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        opcja2 = new QPushButton(centralWidget);
        opcja2->setObjectName(QStringLiteral("opcja2"));
        opcja2->setEnabled(false);
        opcja2->setGeometry(QRect(10, 100, 281, 71));
        opcja3 = new QPushButton(centralWidget);
        opcja3->setObjectName(QStringLiteral("opcja3"));
        opcja3->setGeometry(QRect(10, 180, 281, 71));
        opcja1 = new QPushButton(centralWidget);
        opcja1->setObjectName(QStringLiteral("opcja1"));
        opcja1->setGeometry(QRect(10, 20, 281, 71));
        opcja4 = new QPushButton(centralWidget);
        opcja4->setObjectName(QStringLiteral("opcja4"));
        opcja4->setGeometry(QRect(10, 260, 281, 71));
        opcja5 = new QPushButton(centralWidget);
        opcja5->setObjectName(QStringLiteral("opcja5"));
        opcja5->setGeometry(QRect(10, 340, 281, 71));
        listaObiektow = new QListWidget(centralWidget);
        listaObiektow->setObjectName(QStringLiteral("listaObiektow"));
        listaObiektow->setGeometry(QRect(310, 20, 221, 271));
        listaDanych = new QListWidget(centralWidget);
        listaDanych->setObjectName(QStringLiteral("listaDanych"));
        listaDanych->setEnabled(false);
        listaDanych->setGeometry(QRect(550, 20, 221, 271));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(false);
        graphicsView->setGeometry(QRect(410, 300, 256, 192));
        opcja6 = new QPushButton(centralWidget);
        opcja6->setObjectName(QStringLiteral("opcja6"));
        opcja6->setEnabled(false);
        opcja6->setGeometry(QRect(412, 500, 251, 28));
        ProgramClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProgramClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 792, 26));
        ProgramClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProgramClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProgramClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProgramClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProgramClass->setStatusBar(statusBar);

        retranslateUi(ProgramClass);
        QObject::connect(opcja1, SIGNAL(clicked()), ProgramClass, SLOT(dodajObiekty()));
        QObject::connect(listaObiektow, SIGNAL(itemPressed(QListWidgetItem*)), ProgramClass, SLOT(wyswietlDane()));
        QObject::connect(listaObiektow, SIGNAL(itemPressed(QListWidgetItem*)), ProgramClass, SLOT(wlaczPrzycisk()));
        QObject::connect(opcja6, SIGNAL(clicked()), ProgramClass, SLOT(wyswietlObrazek()));
        QObject::connect(opcja2, SIGNAL(clicked()), ProgramClass, SLOT(usunObiekt()));
        QObject::connect(opcja3, SIGNAL(clicked()), ProgramClass, SLOT(zapisz()));
        QObject::connect(opcja4, SIGNAL(clicked()), ProgramClass, SLOT(wczytaj()));
        QObject::connect(opcja5, SIGNAL(clicked()), ProgramClass, SLOT(czyszczenieVectora()));

        QMetaObject::connectSlotsByName(ProgramClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProgramClass)
    {
        ProgramClass->setWindowTitle(QApplication::translate("ProgramClass", "Program", nullptr));
        opcja2->setText(QApplication::translate("ProgramClass", "Usun zaznaczony obiekt", nullptr));
        opcja3->setText(QApplication::translate("ProgramClass", "Zapisz obiekty do pliku", nullptr));
        opcja1->setText(QApplication::translate("ProgramClass", "Dodaj obiekt", nullptr));
        opcja4->setText(QApplication::translate("ProgramClass", "Wczytaj obiekty z pliku", nullptr));
        opcja5->setText(QApplication::translate("ProgramClass", "Opusc program", nullptr));
        opcja6->setText(QApplication::translate("ProgramClass", "Wyswietl obrazek obiektu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgramClass: public Ui_ProgramClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAM_H
