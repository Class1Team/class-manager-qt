#include "classmanager.h"
#include "ui_classmanager.h"

ClassManager::ClassManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClassManager)
{
    ui->setupUi(this);
}

ClassManager::~ClassManager()
{
    delete ui;
}

