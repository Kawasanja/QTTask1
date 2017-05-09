#include "connectclass.h"
#include "myclass.h"


ConnectClass::ConnectClass(QWidget *parent, QTextEdit * txt1, QTextEdit * txt2) : QWidget(parent)
{
    this->txt1 = txt1;
    this->txt2 = txt2;

}


void ConnectClass::f()
{
    QString st1 = txt1->toPlainText();
    QString st2 = txt2->toPlainText();
        if(st1 != QString() && st2 == QString())
    emit mySignal2(st1);
        if(st1 == QString() && st2 != QString())
     emit mySignal1(st2);
        if(st1 != QString() && st2 != QString()){
     emit mySignal3(st1);
     emit mySignal4(st2);
   }
}
