#include<iostream>
#include"Circle.h"

void Circle::setParametrCircle()
{
    std::cout << "Enter the center of the circle\n" << "X= ";
    std::cin >> x;
    std::cout << "Y= ";
    std::cin >> y;
    std::cout << "Enter radius = ";
    std::cin >> radius;
    colors();
}
void Circle::getParametrCircle (double& inRadius, double& inX, double& inY)
{
    inRadius = radius;
    inX = x;
    inY = y;
}
double Circle::findArea()
{
    return Pi * (radius * radius);
}