#include "assosiationa.h"
#include "classb.h"

AssosiationA::AssosiationA(ClassB value):objectB(value){}

string AssosiationA::getInfo()
{
    return objectB.getInfo();
}

void AssosiationA::setInfo(const string &value)
{
    objectB.setInfo(value);
}
