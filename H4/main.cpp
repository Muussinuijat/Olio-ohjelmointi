
#include "car.h"


int main()
{
    Engine engine(150,2.0);
    vector<Wheel> wheels(4,Wheel(17,"Kesarengas"));
    Car car("Corolla","Toyota");
    car.setEngine(engine);
    car.setWheels(wheels);

    car.printDetails();
    return 0;
}
