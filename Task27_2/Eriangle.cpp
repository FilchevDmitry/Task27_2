#include"Eriangle.h"
#include<iostream>

    void Equilateral≈riangle:: getParametrTriangle()
    {
        std::cout << "Enter the center of the equilateral eriangle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter the edge of the equilateral eriangle = ";
        std::cin >> edgeTriangle;
        colors();
    }
    void Equilateral≈riangle::squareTriangle()
    {
        std::cout << "Square  = " << edgeTriangle * edgeTriangle * std::sqrt(3) / 4 << std::endl;
        describingRectangle(edgeTriangle, edgeTriangle);
        std::cout << "color : " << color << std::endl;
        set—entre();
    }