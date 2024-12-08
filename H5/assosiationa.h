#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "classb.h"
#include <string>

using namespace std;

class AssosiationA
{
private:
    ClassB objectB;

public:
    AssosiationA(ClassB value);
    string getInfo();
    void setInfo(const string &value);

};

#endif // ASSOSIATIONA_H
