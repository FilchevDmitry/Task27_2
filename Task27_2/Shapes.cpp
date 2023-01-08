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
    void Shapes:: set—entre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }
    void Shapes::describingRectangle(double width, double height)
    {
        srand(time(nullptr));
        if (width != height)
            std::cout << "The described rectangle with  height " << height + std::rand() % 2 + 1 << " and width " << width + std::rand() % 2 + 1 << std::endl;
        else
            std::cout << "Square with side = " << width + std::rand() % 3 + 1 << std::endl;
    }
