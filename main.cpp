#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <iostream>
#include "testing.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testing plusstring;
    plusstring.pstring();
    return a.exec();
}
