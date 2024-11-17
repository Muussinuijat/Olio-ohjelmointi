#ifndef H2A_H
#define H2A_H

#include <iostream>

using namespace std;

// ***********Ensimmäinen vaihe*************

class Car {
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    string getBrand() const;
    void setBrand(const string &newBrand);

    string getModel() const;
    void setModel(const string &newModel);

    int getYearModel() const;
    void setYearModel(int newYearModel);

    void printCarData() const
    {
        cout << "***Car***" << endl << "Brand: " << brand
        << endl << "Model: " << model << endl
        << "Yearmodel: " << yearModel << endl;
    }
};

// ************Toinen vaihe***********

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle();
    double getArea() const;
    double getCircum() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    void printRectangleData() const
    {
        cout << endl << "**Rectangle**" << endl
        << "Area: " << getArea() << endl
        << "Circum: " << getCircum() << endl;
    }
};

// **********Kolmas vaihe***********

class Student {
private:
    string name;
    int studentNumber;
    double average;
public:
    string getName() const;
    void setName (const string &newname);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    double getAverage() const;
    void setAverage(double newAverage);

    void printStudentData() const
    {
        cout << endl << "**Student**" << endl
        << "Name: " << getName() << endl
        << "StudentNumber: " << getStudentNumber()
        << endl << "Average: " << getAverage() << endl;
    }
};

// ***********H2b oliolista**********

class Cars {
private:
    string carBrand;
    string carModel;
    int carYearModel;

public:
    Cars(const string &carBrand, const string &carModel, int carYearModel) : carBrand(carBrand), carModel(carModel), carYearModel(carYearModel) {};

    void printCarsData() const
    {
        cout << carBrand << " " << carModel << " " << carYearModel << endl;
    }
};

#endif // H2A_H
