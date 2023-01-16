#include<iostream>
#include<cmath>
#include"Triangle.h"

void Triangle::setParametrTriangle()
{
    std::cout << "Enter the center of the equilateral eriangle\n" << "X= ";
    std::cin >> x;
    std::cout << "Y= ";
    std::cin >> y;
    std::cout << "Enter the edge of the equilateral eriangle = ";
    std::cin >> edgeTriangle;
    colors();
}
void Triangle::getParametrTrtangle(double& inEdgeTriangle, double& inX, double& inY)
{
    inEdgeTriangle = edgeTriangle;
    inX = x;
    inY = y;
}
double Triangle::findArea()
{
    return edgeTriangle * edgeTriangle * std::sqrt(3) / 4;
}