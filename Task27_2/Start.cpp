#include"Start.h"
#include"Shapes.h"
#include"Circle.h"
#include"Triangle.h"
#include<iostream>

void choise() {
    Circle circle;
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

            break;
        case 2:
   
            break;
        case 3:
        
            break;
        case 4:
     
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