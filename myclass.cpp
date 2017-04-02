#include "myclass.h"
#include "connectclass.h"


MyClass::MyClass(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(300,300,200,200);
    setMinimumSize(600,300);

    btn = new QPushButton("Push Me");
    txt1 = new QTextEdit;
    txt2 = new QTextEdit;
    connectclass * tmp = new connectclass(0,txt1);

    connect(btn,SIGNAL(clicked()),tmp,SLOT(f()));


    connect(tmp,SIGNAL(mySignal1(QString)),txt1,SLOT(setText(QString)));
    connect(tmp,SIGNAL(mySignal1(QString)),txt2,SLOT(clear()));


    connect(tmp,SIGNAL(mySignal2(QString)),txt1,SLOT(clear()));
    connect(tmp,SIGNAL(mySignal2(QString)),txt2,SLOT(setText(QString)));







    //Layout------------------------
    QHBoxLayout * horizontal = new QHBoxLayout;
    horizontal->addWidget(txt1);
    horizontal->addWidget(txt2);
    QVBoxLayout * vertical = new QVBoxLayout;
    vertical->addLayout(horizontal);
    vertical->addWidget(btn);
    setLayout(vertical);
    //------------------------------
}

MyClass::~MyClass()
{

}
