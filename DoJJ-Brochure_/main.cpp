#include "usertypewindow.h"
#include "sortedlist.h"
#include "customer.h"
#include <QApplication>
#include <QString>
#include <QFile>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Declares main window
    UserTypeWindow w;
    // Shows window
    w.show();

    return a.exec();
}
