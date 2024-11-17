
#include "H2_h.h"
#include <memory>
#include <vector>

int main()
{


    /* ******Ensimmäinen vaihe****** */


    Car Car1;

    Car1.setBrand("BMW");
    Car1.setModel("Z9 Cabriolet");
    Car1.setYearModel(2000);
    Car1.printCarData();


    /* ******Toinen vaihe****** */


    Rectangle *Rec1 = new Rectangle;

    Rec1->setHeight(6.345);
    Rec1->setWidth(3.58);
    Rec1->printRectangleData();

    delete Rec1;
    Rec1 = nullptr;


    /* ******kolmas vaihe****** */


    unique_ptr<Student> student1 = make_unique<Student>();

    student1->setName("Erkki");
    student1->setStudentNumber(853);
    student1->setAverage(8.654);
    student1->printStudentData();


    /* *********H2b oliolista******** */


    vector<Cars> carsList;

    Cars cars1("BMW", "Roadster", 2000);
    Cars cars2("VolksWagen","Polo", 2001);
    Cars cars3("Toyota", "Corolla", 2005);

    carsList.push_back(cars1);
    carsList.push_back(cars2);
    carsList.push_back(cars3);

    cout << endl << "**H2b oliolista**" << endl;
    for (int x=0; x<=2; x++){
        carsList[x].printCarsData();
    }

    return 0;
}
