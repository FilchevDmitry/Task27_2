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
    void Shapes::get—entre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }
    void Shapes::get—olor()
    {
        std::cout << "Color - " << color << std::endl;
    }
    void Shapes::print()
    {

    }
    Rectangle* Shapes::getRectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {

        return new Rectangle(inWidth, inHeight, inX, inY); /* —ÚÓËÏ ÔˇÏÓÛ„ÓÎ¸ÌËÍ ÔÓ ‡ÁÏÂ‡Ï ÙË„Û˚ */
    }
 Rectangle::Rectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {
     srand(time(nullptr));
     x = inX;
     y = inY;
     if (inWidth == inHeight)
     {
         width = inWidth + std::rand() % 2 + 1;
         height = width;
     }
     else
     {
         width = inWidth + std::rand() % 2 + 1;
         height = inHeight + std::rand() % 2 + 1;
     }

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
    void Rectangle::getParametreRectangle(double& inWidth, double& inHeight, double& inX, double& inY)
    {
        inX = x;
        inY = y;
        inWidth = width;
        inHeight = height;
    }
    double Rectangle::findArea()
    {
        return width * height;
    }


