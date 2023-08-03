#ifndef SETUPWINDOW_H
#define SETUPWINDOW_H

#include <QComboBox>
#include<qlabel.h>
#include <QMainWindow>
#include <QPushButton>
#include<qfont.h>
#include <QCloseEvent>
#include<qmessagebox.h>

class setupwindow : public QMainWindow
{
    Q_OBJECT

public:
    setupwindow(QWidget* parent = nullptr);
    ~setupwindow();
    void closeEvent(QCloseEvent *Event) {
        exitbox.setWindowTitle("warning");
        exitbox.setText("你确定退出吗?");
        exitbox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        if (exitbox.exec()== QMessageBox::Ok) {
            Event->accept();
        }
        else if (QMessageBox::Cancel) {
            Event->ignore();
        }
        
    }

private:
    /* 声明一个 QPushButton 对象 pushButton1 */
    QPushButton *nextButton;
    /* 声明一个 QPushButton 对象 pushButton2 */
    QPushButton *cancelButton,*backButton3;
    QLabel *label1;
    QFont fonts;
    QMessageBox exitbox;

public slots :
    void onChanged(int index);   //定义槽函数
    void cancelButtonon();

private:
    QComboBox * comBox;         //定义组合框指针
};
#endif // SETUPWINDOW_H
