#include "setupwindow.h"
#include"value.h"
using namespace allvalue;
setupwindow::setupwindow(QWidget *parent)
    : QMainWindow(parent)
{
    Lang.cancel.push_back("取消");
    Lang.cancel.push_back("cancel");
    this->setGeometry(0, 0, 800, 480);
    nextButton = new QPushButton("下一步", this);
    cancelButton = new QPushButton(Lang.cancel[lang], this);
    pushButton3 = new QPushButton("上一步", this);

    nextButton->setGeometry(720,440,70,30);
    cancelButton->setGeometry(640,440,70,30);
    pushButton3->setGeometry(560,440,70,30);
    /* 信号槽连接 */
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancelButton_Clicked()));
    comBox = new QComboBox(this);//创建组合框
    comBox->setGeometry(200,200,400,20);
    comBox->addItem("简体中文");               //创建两个框中的内容
    comBox->addItem("English");
    connect(comBox,SIGNAL(currentIndexChanged(int)),    //连接两个信号和槽
            this,SLOT(onChanged(int)));
    this->setWindowTitle("Class Manager Setup");
}

setupwindow::~setupwindow()
{
}

void setupwindow::onChanged(int index)       //槽函数实现
{
    if (comBox->itemText(index) == "简体中文") {
        lang = zh_cn;
        setupwindow::adjustSize();
        setupwindow::setGeometry(100, 100, 800, 480);
        cancelButton->setText(Lang.cancel[lang]);
    }
    else if (comBox->itemText(index) == "English") {
        lang = en;
        setupwindow::adjustSize();
        setupwindow::setGeometry(100, 100, 800, 480);
        cancelButton->setText(Lang.cancel[lang]);
    }
}
void setupwindow::cancelButton_Clicked() {

}
