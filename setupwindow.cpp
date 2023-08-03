#include "setupwindow.h"
#include"value.h"
using namespace allvalue;
setupwindow::setupwindow(QWidget *parent)
    : QMainWindow(parent)
{
    Lang.cancel.push_back("取消");
    Lang.cancel.push_back("cancel");
    Lang.next.push_back("下一步");
    Lang.next.push_back("next");
    Lang.back.push_back("上一步");
    Lang.back.push_back("back");
    Lang.SetLanguage.push_back("设置语言");
    Lang.SetLanguage.push_back("language settings");

    this->setGeometry(0, 0, 800, 480);
    nextButton = new QPushButton(Lang.next[lang], this);
    cancelButton = new QPushButton(Lang.cancel[lang], this);
    backButton3 = new QPushButton(Lang.back[lang], this);

    label1 = new QLabel(Lang.SetLanguage[lang], this);
    label1->setGeometry(20, 20, 200, 30);
    fonts.setPointSize(13);
    label1->setFont(fonts);

    nextButton->setGeometry(720,440,70,30);
    cancelButton->setGeometry(640,440,70,30);
    backButton3->setGeometry(560,440,70,30);
    /* 信号槽连接 */
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancelButtonon()));
    comBox = new QComboBox(this);//创建组合框
    comBox->setGeometry(200,200,400,30);
    comBox->addItem("简体中文");               //创建两个框中的内容
    comBox->addItem("English");
    comBox->setFont(fonts);
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
        nextButton->setText(Lang.next[lang]);
        backButton3->setText(Lang.back[lang]);
        label1->setText(Lang.SetLanguage[lang]);
    }
    else if (comBox->itemText(index) == "English") {
        lang = en;
        setupwindow::adjustSize();
        setupwindow::setGeometry(100, 100, 800, 480);
        cancelButton->setText(Lang.cancel[lang]);
        nextButton->setText(Lang.next[lang]);
        backButton3->setText(Lang.back[lang]);
        label1->setText(Lang.SetLanguage[lang]);
    }
}
void setupwindow::cancelButtonon() {
    setupwindow::close();
}
