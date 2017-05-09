#ifndef CONNECTCLASS_H
#define CONNECTCLASS_H

#include <QtWidgets>
#include <QString>

class ConnectClass : public QWidget
{
    Q_OBJECT
    QTextEdit * txt1;
    QTextEdit * txt2;


public:
    explicit ConnectClass(QWidget *parent = 0, QTextEdit * txt1 = 0, QTextEdit * txt2 = 0);



signals:
    void mySignal1(QString str);
    void mySignal2(QString str);
    void mySignal3(QString str);
    void mySignal4(QString str);

public slots:
    void f();
};

#endif // CONNECTCLASS_H
