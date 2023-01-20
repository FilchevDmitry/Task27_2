#include"Start.h"
#include"Shapes.h"
#include"Square.h"
#include"Circle.h"
#include"Triangle.h"
#include<iostream>

void choise() {
    Circle circle;
    Square square;
    Triangle triangle;
    Rectangle rectangle;
    int num = 0;
    bool end = true;
    while (end)
    {   
        Rectangle* outRectangle=new Rectangle(); 
        double width = 0;
        double height = 0;
        double x = 0;
        double y = 0;
        double temp=0;
        std::cout << "Choose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
        std::cin >> num;
        switch (num)
        {
        case 1:
            circle.setParametrCircle();
            circle.findArea();
            circle.getParametrCircle(width, x, y);
            temp = 2 * width;
            outRectangle=circle.getRectangle(temp, temp, x, y);
            circle.get�entre();
            std::cout << "Area = " << circle.findArea() << std::endl;
            circle.get�olor();
            outRectangle->printParametr();
            break;
        case 2:
            square.setParametrSquare();
            square.findArea();
            square.getParametrSquare(width, x, y);
            outRectangle = square.getRectangle(width, width, x, y);
            square.get�entre();
            std::cout << "Area = " << square.findArea() << std::endl;
            square.get�olor();
            outRectangle->printParametr();
            break;
        case 3:
            triangle.setParametrTriangle();
            triangle.findArea();
            triangle.getParametrTrtangle(width, x, y);
            outRectangle = triangle.getRectangle(width, width, x, y);
            triangle.get�entre();
            std::cout << "Area = " << triangle.findArea() << std::endl;
            triangle.get�olor();
            outRectangle->printParametr();
            break;
        case 4:
            rectangle.setParametreRectangle();
            rectangle.findArea();
            rectangle.getParametreRectangle(width,height, x, y);
            outRectangle = triangle.getRectangle(width, height, x, y);
            rectangle.get�entre();
            std::cout << "Area = " << rectangle.findArea() << std::endl;
            rectangle.get�olor();
            outRectangle->printParametr();
            break;
        case 5:
            end = false;
            break;
        default:
            std::cout << "Error" << std::endl;
            break;
        }
        delete outRectangle;
    }
  
}