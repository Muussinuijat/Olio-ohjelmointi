#include "H3b.h"
Animal::Animal(){}
Animal::~Animal(){
    cout <<  "elain olio tuhottu!" << endl;
}

void Animal::callout() const {
    cout << "Elain aantelee." << endl;
}





Dog::Dog(){}

Dog::~Dog(){
    cout << "Koira olio tuhottu!" << endl;
}
void Dog::callout()const {
    cout << "Koira haukkuu!" << endl;
}
