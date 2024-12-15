#ifndef ECAMPLECLASS_H
#define ECAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>

// Tais käydä pieni typo classin nimeämisessä...
// Ei voi mitää näillä mennää :D
class EcampleClass : public QObject
{
    Q_OBJECT
public:
    EcampleClass(QObject *parent = nullptr);
    void startToWait();

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();
};

#endif // ECAMPLECLASS_H
