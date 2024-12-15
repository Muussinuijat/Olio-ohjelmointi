#include "ecampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EcampleClass example;
    example.startToWait();

    return a.exec();
}
