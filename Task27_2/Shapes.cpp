#include<iostream>
#include"Shapes.h"

    void Shapes::colors()
    {
        std::cout << "Input color : 1- Red 2-Blue 3- Green 4-None\n";
        std::cin >> numColor;
        switch (numColor)
        {
        case RED:
        {
            color = "red";
            break;
        }
        case BLUE:
        {
            color = "blue";
            break;
        }
        case GREEN:
        {
            color = "green";
            break;
        }
        default:
        {
            color = "none";
            break;
        }
        }
    }
       void Shapes::get�entre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }
    void Shapes::get�olor()
    {
        std::cout << "Color - " << color << std::endl;
    }
    Rectangle* Shapes::getRectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {
        srand(time(nullptr));
        x = inX;
        y = inY;
        double width = inWidth + std::rand() % 2 + 1;
        double height = inHeight + std::rand() % 2 + 1;
        return new Rectangle(width, height, x, y); /* ������ ������������� �� �������� ������ */
    }
 Rectangle::Rectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {
     srand(time(nullptr));
     x = inX;
     y = inY;
     width = inWidth+std::rand() % 2 + 1;
     height = inHeight+ std::rand() % 2 + 1;
    }
    Rectangle::Rectangle()
    {

    }
    void Rectangle::setParametreRectangle()
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
    void Rectangle::setParametreSquare()
    {
        std::cout << "Enter the center of the square\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter edgeSquare = ";
        std::cin >> width;
        colors();
    }
    void Rectangle::getParametreRectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {
        inX = x;
        inY = y;
        inWidth = width;
        inHeight = height;
    }


