#include <iostream>
#include"Start.h"
int main()
{
    choise();
}
/*
class Shapes
{
private:
 enum COLORS
    {
        RED=1,
        BLUE,
        GREEN
    };
public:
    double x = 0;
    double y = 0;
    int numColor = 0;
    std::string color;
    void colors()
    {
        std::cout << "Input color : 1- Red 2-Blue 3- Green 4-None\n";
        std::cin >> numColor;
        switch (numColor)
        {
            case RED:
            {
            color = "red"; 
            break;
            }
            case BLUE:
            {
            color = "blue";
            break;
            }
            case GREEN:
            {
            color = "green";
            break;
            }
            default:
            {
            color = "none";
            break;
            }
        }
    }
    void setСentre()
    {
        std::cout << "Centre shapes X= " << x << " Y=" << y << std::endl;
    }
    void describingRectangle(double width, double height)
    {
        srand(time(nullptr));
        if(width!=height)
            std::cout << "The described rectangle with  height " << height + std::rand() % 2+1 << " and width " << width + std::rand() % 2 + 1 << std::endl;
        else
            std::cout << "Square with side = " << width + std::rand() % 3 + 1 << std::endl;
    }
};
class Circle :public Shapes  
{
private:
    double radius = 0;
    double Pi = 3.14;
public:

    void getParametrCircle()
    {
        std::cout << "Enter the center of the circle\n"<<"X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter radius = ";
        std::cin >> radius;
        colors();
     
    }
    void squareCircle()
    {
        std::cout << "Square circle = "<<Pi*(radius*radius) << std::endl;
        describingRectangle(radius*2, radius*2);
        std::cout << "color : " << color<<std::endl;
        setСentre();
    }
};
class Square : public Shapes
{
private:
    double edgeSquare = 0;
public:
    void getParametrSquare()
    {
        std::cout << "Enter the center of the square\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter edgeSquare = ";
        std::cin >> edgeSquare;
        colors();
    }
    void square()
    {
        std::cout << "Square  = " << edgeSquare* edgeSquare << std::endl;
        describingRectangle(edgeSquare, edgeSquare);
        std::cout << "color : " << color << std::endl;
        setСentre();
    }
};
class EquilateralЕriangle :public Shapes
{
private:
    double edgeTriangle = 0;
public:
    void getParametrTriangle()
    {
        std::cout << "Enter the center of the equilateral eriangle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter the edge of the equilateral eriangle = ";
        std::cin >> edgeTriangle;
        colors();
    }
    void squareTriangle()
    {
        std::cout << "Square  = " << edgeTriangle* edgeTriangle*std::sqrt(3)/4 << std::endl;
        describingRectangle(edgeTriangle, edgeTriangle);
        std::cout << "color : " << color << std::endl;
        setСentre();
    }
};
class Rectangle :public Shapes
{
private:
    double width = 0;
    double height = 0;
public:
    void getParametrRectangle()
    {
        std::cout << "Enter the center of the rectangle\n" << "X= ";
        std::cin >> x;
        std::cout << "Y= ";
        std::cin >> y;
        std::cout << "Enter the width of the rectangle = ";
        std::cin >> width;
        std::cout << "Enter the height of the rectangle = ";
        std::cin >> height;
        colors();
    }
    void squareRectangle()
    {
        std::cout << "Square  = " << width * height << std::endl;
        describingRectangle(width, height);
        std::cout << "color : " << color << std::endl;
        setСentre();
    }
};
int main()
{
    Circle circle;
    Square square;
    EquilateralЕriangle triangle;
    Rectangle rectangle;
    int num = 0;
    bool end = true;
    while (end)
    {
        std::cout << "\nChoose\n1-circle\n2-square\n3-triangle\n4-rectangle\n5-exit\n";
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
*/

