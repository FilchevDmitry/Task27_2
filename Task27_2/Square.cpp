#include"Square.h"
#include<iostream>
#include<cmath>

void Square::squareCircle(double &radius)
{
	std::cout << "Enter edge radius = ";
	std::cin >> radius;
	std::cout << "Square  = " << std::atan(1) * 4 * radius << std::endl;
}

void Square::squareTriagle(double &width)
{
	std::cout << "Enter edge length = ";
	std::cin >> width;
	std::cout << "Square  = " << width * width * std::sqrt(3) / 4 << std::endl;
}

void Square::squareArea(double& width)
{
	std::cout << "Enter edge length = ";
	std::cin >> width;
	std::cout << "Square  = " << width * width << std::endl;
}
void Square::rectangleArea(double& width, double &height)
{
	std::cout << "Enter edge width = ";
	std::cin >> width;
	std::cout << "Enter edge height = ";
	std::cin >> height;
	std::cout << "Square  = " << width * height << std::endl;
}
