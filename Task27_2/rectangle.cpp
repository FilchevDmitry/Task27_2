#include"rectangle.h"
#include<iostream>
#include<cmath>

Rectangle::Rectangle()
{
	double width = 0;
	double height = 0;
}
Rectangle::Rectangle(double& inWidth, double& inX, double& inY)
{
	width = inWidth;
	height = inWidth;
	x = inX;
	y - inY;
}
Rectangle::Rectangle(double& inWidth, double& inHeight, double& inX, double& inY)
{
	width = inWidth;
	height = inHeight; ;
	x = inX;
	y - inY;
}
void Rectangle::setParametreRectangle()
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
void Rectangle::setParametreSquare()
{
	std::cout << "Enter the center of the square\n" << "X= ";
	std::cin >> x;
	std::cout << "Y= ";
	std::cin >> y;
	std::cout << "Enter edgeSquare = ";
	std::cin >> width;
	colors();
}
void Rectangle::getParametreRectangle(double& inWidth, double& inHeight, double& inX, double& inY)
{
	inX = x;
	inY = y;
	inWidth = width;
	inHeight = height;
}
void Rectangle::getParametreSquare(double& inWidth, double& inX, double& inY)
{
	inX = x;
	inY = y;
	inWidth = width;
}