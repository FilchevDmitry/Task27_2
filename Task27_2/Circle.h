#pragma once
#include"Shapes.h"
class Circle :public Shapes
{
private:
    double radius = 0;
    double Pi = 3.14;
public:

    void getParametrCircle();

    void squareCircle();
};
