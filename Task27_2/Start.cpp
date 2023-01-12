#include"Start.h"
#include"Square.h"
#include<iostream>

Square square;
void choise() {
    int num = 0;
    double width = 0;
    double height = 0;
    bool end = true;
    while (end)
    {
        std::cout << "Choose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
        std::cin >> num;
        switch (num)
        {
        case 1:
            square.getCentre();
            square.colors();
            square.squareCircle(width);
            square.set—entre();
            square.set—olor();
            width *= 2;
            square.getRectangle(width,width);
            square.setRectangle();
            break;
        case 2:
            square.getCentre();
            square.colors();
            break;
        case 3:
            square.getCentre();
            square.colors();
            break;
        case 4:
            square.getCentre();
            square.colors();
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