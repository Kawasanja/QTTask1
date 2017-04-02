#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets>

class MyClass : public QWidget
{
    Q_OBJECT
    QPushButton * btn;
    QTextEdit * txt1;
    QTextEdit * txt2;
public:
    MyClass(QWidget *parent = 0);

    ~MyClass();
};

#endif // MYCLASS_H
