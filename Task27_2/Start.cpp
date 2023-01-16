#include"Start.h"
#include"Shapes.h"
#include"Circle.h"
#include"rectangle.h"
#include"Triangle.h"
#include<iostream>

Circle circle;
Triangle triangle;
Rectangle rectangle;
Rectangle square;
Rectangle cover;
void choise() {
    int num = 0;
    bool end = true;
    while (end)
    {    
        double width = 0;
        double height = 0;
        double x = 0;
        double y = 0;
        std::cout << "Choose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
        std::cin >> num;
        switch (num)
        {
        case 1:
            circle.setParametrCircle();
            circle.findArea();
            circle.getParametrCircle(width, x, y);
            Rectangle* circleArea(&width, &x, &y);
            break;
        case 2:
            square.getCentre();
            square.colors();
            square.squareArea(width);
            square.set—entre();
            square.set—olor();
            width *= 2;
            square.getRectangle(width, width);
            square.setRectangle();
            break;
        case 3:
            square.getCentre();
            square.colors();
            square.squareTriagle(width);
            square.set—entre();
            square.set—olor();
            width *= 2;
            square.getRectangle(width, width);
            square.setRectangle();
            break;
        case 4:
            square.getCentre();
            square.colors();
            square.rectangleArea(width, height);
            square.set—entre();
            square.set—olor();
            square.getRectangle(width, width);
            square.setRectangle();
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