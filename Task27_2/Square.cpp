#include<iostream>
#include"Square.h"
void Square::setParametrSquare()
{
    std::cout << "Enter the center of the square\n" << "X= ";
    std::cin >> x;
    std::cout << "Y= ";
    std::cin >> y;
    std::cout << "Enter width = ";
    std::cin >> width;
    colors();
}
void Square::getParametrSquare(double& inWidth, double& inX, double& inY)
{
    inWidth = width;
    inX = x;
    inY = y;
}
double Square::findArea()
{
    return (width * width);
}
