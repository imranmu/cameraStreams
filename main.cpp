/**
*  This is sample project to get data from multiple gstreamers pipelines in non-blcking fasion
*  A google unit test is included as a sample project
*  Imran Muhammad
*  2020
*/
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
