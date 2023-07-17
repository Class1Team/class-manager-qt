/********************************************************************************
** Form generated from reading UI file 'classmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMANAGER_H
#define UI_CLASSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassManager
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClassManager)
    {
        if (ClassManager->objectName().isEmpty())
            ClassManager->setObjectName("ClassManager");
        ClassManager->resize(800, 600);
        centralwidget = new QWidget(ClassManager);
        centralwidget->setObjectName("centralwidget");
        ClassManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClassManager);
        menubar->setObjectName("menubar");
        ClassManager->setMenuBar(menubar);
        statusbar = new QStatusBar(ClassManager);
        statusbar->setObjectName("statusbar");
        ClassManager->setStatusBar(statusbar);

        retranslateUi(ClassManager);

        QMetaObject::connectSlotsByName(ClassManager);
    } // setupUi

    void retranslateUi(QMainWindow *ClassManager)
    {
        ClassManager->setWindowTitle(QCoreApplication::translate("ClassManager", "ClassManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassManager: public Ui_ClassManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMANAGER_H
