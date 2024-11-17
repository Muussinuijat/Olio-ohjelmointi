#include "H2_h.h"

Rectangle :: Rectangle()
{

}
void Rectangle :: setWidth(double newWidth)
{
    width = newWidth;
}
void Rectangle :: setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle :: getCircum() const
{
    double circum = 2 * (width + height);
    return circum;
}
double Rectangle :: getArea() const
{
    double area = width * height;
    return area;
}
