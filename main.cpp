#include <QCoreApplication>
#include <QTcpServer>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTcpServer serv;

    QSqlDatabase db;

    return a.exec();
}
