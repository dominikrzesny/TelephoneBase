/********************************************************************************
** Form generated from reading UI file 'Okno1.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO1_H
#define UI_OKNO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okno1
{
public:
    QLabel *label;
    QPushButton *wybor1;
    QPushButton *wybor2;
    QPushButton *wybor3;

    void setupUi(QWidget *okno1)
    {
        if (okno1->objectName().isEmpty())
            okno1->setObjectName(QStringLiteral("okno1"));
        okno1->resize(398, 311);
        label = new QLabel(okno1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 25, 221, 61));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        wybor1 = new QPushButton(okno1);
        wybor1->setObjectName(QStringLiteral("wybor1"));
        wybor1->setGeometry(QRect(72, 77, 241, 51));
        wybor2 = new QPushButton(okno1);
        wybor2->setObjectName(QStringLiteral("wybor2"));
        wybor2->setGeometry(QRect(72, 137, 241, 51));
        wybor3 = new QPushButton(okno1);
        wybor3->setObjectName(QStringLiteral("wybor3"));
        wybor3->setGeometry(QRect(72, 197, 241, 51));

        retranslateUi(okno1);
        QObject::connect(wybor1, SIGNAL(clicked()), okno1, SLOT(dodajSmartfon()));
        QObject::connect(wybor2, SIGNAL(clicked()), okno1, SLOT(dodajKomorke()));
        QObject::connect(wybor3, SIGNAL(clicked()), okno1, SLOT(dodajStacjonarny()));
        QObject::connect(wybor1, SIGNAL(clicked()), okno1, SLOT(close()));
        QObject::connect(wybor2, SIGNAL(clicked()), okno1, SLOT(close()));
        QObject::connect(wybor3, SIGNAL(clicked()), okno1, SLOT(close()));

        QMetaObject::connectSlotsByName(okno1);
    } // setupUi

    void retranslateUi(QWidget *okno1)
    {
        okno1->setWindowTitle(QApplication::translate("okno1", "okno1", nullptr));
        label->setText(QApplication::translate("okno1", "Obiekt jakiej klasy chcesz dodac?", nullptr));
        wybor1->setText(QApplication::translate("okno1", "Smartfon", nullptr));
        wybor2->setText(QApplication::translate("okno1", "Komorka", nullptr));
        wybor3->setText(QApplication::translate("okno1", "Telefon stacjonarny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okno1: public Ui_okno1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO1_H
