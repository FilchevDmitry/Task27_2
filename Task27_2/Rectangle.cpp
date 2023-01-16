#include"Rectangle.h"
#include<iostream>

void Rectangle:: setParametrRectangle()
{
  std::cout << "Enter the center of the rectangle\n" << "X= ";
  std::cin >> x;
  std::cout << "Y= ";
  std::cin >> y;
  std::cin >> width;
  std::cout << "Enter the height of the rectangle = ";
  std::cin >> height;
  colors();
  }

 double Rectangle::findArea()
 {
   return width * height;

 }
