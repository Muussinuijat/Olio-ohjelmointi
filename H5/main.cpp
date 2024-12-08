#include <iostream>

#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "a:n arvo on:" << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on:" << b << " ja osoite on: " << &b << endl;

    cout << endl;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on:" << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    cout << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on:" << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    cout << endl;

    int& refA = a;
    cout << "refA osoittaa osoitteeseen; " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    // jos yrittäisin vaihtaa refA:n osoittamaan muuttujan b:n muistipaikkaan, tapahtuisi virhe.

    // Pointerin osoittaman muistipaikan voi vaihtaa toiseen,
    // mutta referenssi pysyy samassa muistipaikassa mihin se oli alunperin asetettu.



    //******************************************************************'

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setInfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getInfo()<<endl;

    cout << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
