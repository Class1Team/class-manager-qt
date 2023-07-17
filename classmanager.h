#ifndef CLASSMANAGER_H
#define CLASSMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ClassManager; }
QT_END_NAMESPACE

class ClassManager : public QMainWindow
{
    Q_OBJECT

public:
    ClassManager(QWidget *parent = nullptr);
    ~ClassManager();

private:
    Ui::ClassManager *ui;
};
#endif // CLASSMANAGER_H
