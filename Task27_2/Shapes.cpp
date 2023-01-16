#include<iostream>
#include"Shapes.h"
#include"Rectangle.h"

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
    
    void Shapes:: get—entre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }

