#include "H3a.h"

Chef::Chef(const string &name) : name(name)
{
    cout << "Chef " << name << " konstruktori." << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori." << endl;
}

void Chef::makeSalad() const
{
    cout << "Chef " << name << " makes salad." << endl;
}

void Chef::makeSoup() const
{
    cout << "Chef " << name << " makes soup." << endl;
}

string Chef::getName() const {
    return name;
}


// *************vaihe 2*************


ItalianChef :: ItalianChef(const string &name) : Chef(name)
{
    cout << "Italianchef " << name << " konstruktori." << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italianchef " << name << " destruktori." << endl;
}

void ItalianChef::makepasta() const
{
    cout << "Italianchef " << name << " makes pasta." << endl;
}
