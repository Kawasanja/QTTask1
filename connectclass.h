#ifndef CONNECTCLASS_H
#define CONNECTCLASS_H

#include <QtWidgets>
#include <QString>

class connectclass : public QWidget
{
    Q_OBJECT
    QTextEdit * txt1;

public:
    explicit connectclass(QWidget *parent = 0, QTextEdit * txtr = 0);



signals:
    void mySignal1(QString str);
    void mySignal2(QString str);

public slots:
    void f();
};

#endif // CONNECTCLASS_H
