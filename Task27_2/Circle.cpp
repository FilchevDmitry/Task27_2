#include"Circle.h"
#include<iostream>

    void Circle::getParametrCircle()
    {
        std::cout << "Enter the center of the circle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter radius = ";
        std::cin >> radius;
        colors();

    }
    void Circle::squareCircle()
    {
        std::cout << "Square circle = " << Pi * (radius * radius) << std::endl;
        describingRectangle(radius * 2, radius * 2);
        std::cout << "color : " << color << std::endl;
        setÑentre();
    }

