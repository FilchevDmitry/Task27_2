#include"Rectangle.h"
#include<iostream>

    void Rectangle:: getParametrRectangle()
    {
        std::cout << "Enter the center of the rectangle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter the width of the rectangle = ";
        std::cin >> width;
        std::cout << "Enter the height of the rectangle = ";
        std::cin >> height;
        colors();
    }
    void Rectangle::squareRectangle()
    {
        std::cout << "Square  = " << width * height << std::endl;
        describingRectangle(width, height);
        std::cout << "color : " << color << std::endl;
        setÑentre();
    }
