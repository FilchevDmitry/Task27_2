#include"Start.h"
#include"Square.h"
#include<iostream>

void choise() 
{
    int num = 0;
    bool end = true;
    Circle circle;
    Square square;
    Equilateral≈riangle triangle;
    Rectangle rectangle;
 
    while (end)
    {    
        double width = 0;
        double height = 0;
        std::cout << "Choose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
        std::cin >> num;
        switch (num)
        {
        case 1:

            circle.setParametrCircle();
            circle.findArea();
            
            break;
        case 2:
            square.getParametrSquare();
            square.findArea();
            break;
        case 3:
            triangle.getParametrTriangle();
            triangle.findArea();
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