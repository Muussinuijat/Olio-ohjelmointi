#ifndef CAR_H
#define CAR_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;



class Engine
{
private:
    int Horsepower;
    double Displacement;
public:
    Engine(int Hp, double Dis);
    int getHorsepower() const;
    void setHorsepower(int Hp);
    double getDisplacement() const;
    void setDisplacement(double Dis);

};

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel(int size, const string &type);
    int getsize()const;
    void setsize(int Sz);
    string getType() const;
    void setType(const string &Tp);
};

class Car
{
private:
    Engine engine;
    vector<Wheel> wheels;
    string model;
    string brand;
public:
    Car(const string &model, const string &brand);
    Engine getEngine()const;
    vector<Wheel> getWheels() const;
    string getModel() const;
    string getBrand() const;
    void setEngine(const Engine &engine);
    void setWheels(const vector<Wheel> &wheels);
    void setModel(const string &model);
    void setBrand(const string &brand);

    void printDetails() const;
};

#endif // CAR_H
