#include <iostream>
using namespace std;
#include "H3a.h"
#include "H3b.h"


int main()
{

    ItalianChef ItalianChef("Anthony Bourdain");
    ItalianChef.makeSalad();
    ItalianChef.makeSoup();
    ItalianChef.makepasta();

    string theChef = ItalianChef.getName();
    cout << "Name of the Italian Chef is " << theChef << endl;


    // ****************H3b*****************

    Animal *animal = new Animal();
    animal->callout();


    Dog* dog = new Dog();
    dog->callout();

    delete animal;
    animal = nullptr;
    delete dog;
    dog = nullptr;

    return 0;
}
