#include "myclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass * window = new MyClass;
    window->show();

    return a.exec();
}
