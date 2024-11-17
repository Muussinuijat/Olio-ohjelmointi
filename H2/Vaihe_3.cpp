#include "H2_h.h"


void Student::setName(const string &newName)
{
    name = newName;
}
string Student::getName() const
{
    return name;
}
void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}
void Student:: setAverage(double newAverage)
{
    average = newAverage;
}
double Student::getAverage() const
{
    return average;
}
