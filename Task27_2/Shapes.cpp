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
    void Shapes::getCentre()
    {
        std::cout << "Enter the center of the shapes\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
    }
    void Shapes:: set—entre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }
    void Shapes::set—olor()
    {
        std::cout << "Color - " << color << std::endl;
    }
    void Shapes::getRectangle(double &width, double &height)
    {
        srand(time(nullptr));
        if (width != height)
        {
            outHeight = height + std::rand() % 2 + 1;
            outWidth = width + std::rand() % 2 + 1;
        }
        else
            outWidth = width + std::rand() % 3 + 1;
    }
    void Shapes::setRectangle()
    {
        std::cout << "Square the described rectangle = " << outWidth * outHeight << std::endl;
        std::cout << "Rectangle width = " << outWidth << std::endl;
        std::cout << "Rectangle height = " << outHeight << std::endl;
    }
