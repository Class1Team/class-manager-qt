#include "setupwindow.h"

setupwindow::setupwindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0, 0, 800, 480);
    pushButton1 = new QPushButton("下一步", this);
    pushButton2 = new QPushButton("取消", this);
    pushButton3 = new QPushButton("上一步", this);

    pushButton1->setGeometry(720,440,70,30);
    pushButton2->setGeometry(640,440,70,30);
    pushButton3->setGeometry(560,440,70,30);
    /* 信号槽连接 */
    comBox = new QComboBox(this);//创建组合框
    comBox->setGeometry(200,200,400,20);
    comBox->addItem("第一页");               //创建两个框中的内容
    comBox->addItem("第二页");
    connect(comBox,SIGNAL(currentIndexChanged(int)),    //连接两个信号和槽
            this,SLOT(onChanged(int)));
    this->setWindowTitle("Class Manager Setup");
}

setupwindow::~setupwindow()
{
}

void setupwindow::onChanged(int index)       //槽函数实现
{

}

