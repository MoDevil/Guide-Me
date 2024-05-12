#include "guideme2.h"
#include "Graph.h"
#include "MainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Graph* GuideMe = new Graph();
    MainWindow w(GuideMe);
    w.show();
    int n = a.exec();
    if (!n)delete GuideMe;
    return n;
}
