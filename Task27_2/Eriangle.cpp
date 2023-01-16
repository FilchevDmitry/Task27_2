#include"Eriangle.h"
#include<iostream>

    void Equilateral≈riangle:: setParametrTriangle()
    {
        std::cout << "Enter the center of the equilateral eriangle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter the edge of the equilateral eriangle = ";
        std::cin >> edgeTriangle;
        colors();
    }
    void Equilateral≈riangle::getParametrTriangle(double& inEdgeTriangle, double& inX, double& inY)
    {
        inEdgeTriangle = edgeTriangle;
        inX = x;
        inY = y;
    }
    double Equilateral≈riangle::findArea()
    {
        return edgeTriangle * edgeTriangle * std::sqrt(3) / 4;
    }