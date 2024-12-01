#include "car.h"


Car::Car(const string &model, const string &brand)
:model(model), brand(brand), engine(0, 0.0), wheels(4,Wheel(0, "")) {}

Engine Car::getEngine()const {
    return engine;
}
vector<Wheel> Car::getWheels() const {
    return wheels;
}
string Car::getModel() const{
    return model;
}
string Car::getBrand() const{
    return brand;
}

void Car::setEngine(const Engine &engine) {
    this->engine = engine;
}
void Car::setWheels(const vector<Wheel> &wheels){
    this->wheels = wheels;
}
void Car::setBrand(const string &brand){
    this->brand = brand;
}
void Car::setModel(const string &model){
    this->model = model;
}

void Car::printDetails() const{
    cout << "Auto : " << brand << " " << model << endl;
    cout << "Moottori : " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;
    for (size_t i = 0; i < wheels.size(); i++){
        cout << "Rengas " << (i + 1) << ":" << wheels[i].getsize() << " tuumaa, " << wheels[i].getType() << endl;
    }
}







Engine::Engine ( int Hp, double Dis): Horsepower(Hp), Displacement(Dis){}
int Engine::getHorsepower() const{
    return Horsepower;
}
void Engine::setHorsepower(int Hp){
    Horsepower = Hp;
}
double Engine::getDisplacement() const{
    return Displacement;
}
void Engine::setDisplacement(double Dis){
    Displacement = Dis;
}

Wheel::Wheel(int size, const string &type):size(size), type(type){}
int Wheel::getsize()const{
    return size;
}
void Wheel::setsize(int Sz){
    size = Sz;
}
string Wheel::getType() const{
    return type;
}
void Wheel::setType(const string &Tp){
    type = Tp;
}
