#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;


class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void callout() const;
};


class Dog : public Animal
{
public:
    Dog();
    ~Dog() override;
    void callout()const override;

};



#endif // ANIMAL_H
