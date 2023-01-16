#include"Square.h"
#include<iostream>

    void Square:: getParametrSquare()
    {
        std::cout << "Enter the center of the square\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter edgeSquare = ";
        std::cin >> edgeSquare;
        colors();
    }
    double Square::findArea()
    {
        return edgeSquare * edgeSquare;
       
    }
