#ifndef SETUPWINDOW_H
#define SETUPWINDOW_H

#include <QComboBox>

#include <QMainWindow>
#include <QPushButton>

class setupwindow : public QMainWindow
{
    Q_OBJECT

public:
    setupwindow(QWidget *parent = nullptr);
    ~setupwindow();

private:
    /* 声明一个 QPushButton 对象 pushButton1 */
    QPushButton *nextButton;
    /* 声明一个 QPushButton 对象 pushButton2 */
    QPushButton *cancelButton,*pushButton3;
    void cancelButton_Clicked();

public slots :
    void onChanged(int index);   //定义槽函数

private:
    QComboBox * comBox;         //定义组合框指针
};
#endif // SETUPWINDOW_H
