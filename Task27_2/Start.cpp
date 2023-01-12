#include"Start.h"
#include"Square.h"
#include"Circle.h"
#include"Eriangle.h"
#include"Rectangle.h"
#include<iostream>

Circle circle;
Square square;
Equilateral≈riangle triangle;
Rectangle rectangle;
void choise() {
    int num = 0;
    bool end = true;
    while (end)
    {
        std::cout << "Choose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
        std::cin >> num;
        switch (num)
        {
        case 1:
            circle.getParametrCircle();
            circle.squareCircle();
            break;
        case 2:
            square.getParametrSquare();
            square.square();
            break;
        case 3:
            triangle.getParametrTriangle();
            triangle.squareTriangle();
            break;
        case 4:
            rectangle.getParametrRectangle();
            rectangle.squareRectangle();
            break;
        case 5:
            end = false;
            break;
        default:
            std::cout << "Error" << std::endl;
            break;
        }
    }
}