#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load an application style
    QFile styleFile( ":/qss/default.qss" );
    styleFile.open( QFile::ReadOnly );

    // Apply the loaded stylesheet
    QString style( styleFile.readAll() );
    a.setStyleSheet( style );

    // ensure if needed... or not
    // a.ensurePolished();

    MainWindow w;
    w.show();
    return a.exec();
}
