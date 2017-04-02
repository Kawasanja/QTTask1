#include "connectclass.h"
#include "myclass.h"


connectclass::connectclass(QWidget *parent, QTextEdit * txt) : QWidget(parent)
{
    txt1 = txt;
}


void connectclass::f()
{
    QString str = txt1->toPlainText();
    if(str == QString())
    emit mySignal1("sucks");
    else emit mySignal2("sucks");
}

