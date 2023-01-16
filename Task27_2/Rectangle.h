#pragma once
#include"Shapes.h"
class Rectangle :public Shapes
{
private:
    double width = 0;
    double height = 0;
public:
    
    void setParametrRectangle();
    double findArea();
};
