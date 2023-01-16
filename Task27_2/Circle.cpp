#include"Circle.h"
#include<iostream>

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
    void Circle::getParamertrCircle(double& inRadius, double& inX, double& inY)
    {
        inX = x;
        inY = y;
        inRadius = radius;
    }
    double Circle::findArea()
    {
        return Pi * (radius * radius);
    }


