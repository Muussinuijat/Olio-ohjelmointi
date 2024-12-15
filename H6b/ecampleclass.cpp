#include "ecampleclass.h"

EcampleClass::EcampleClass(QObject *parent) : QObject(parent)
{
    qDebug() << "Start";
    connect(this, &EcampleClass::readyToSay, this, &EcampleClass::sayHelloSlot);
    qDebug() << "End";
}

void EcampleClass::startToWait() {
    QThread::msleep(1000);
    emit readyToSay();
}
void EcampleClass:: sayHelloSlot() {
    qDebug() << "terve";
}

