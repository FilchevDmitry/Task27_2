#pragma once
#include"Shapes.h"
class Square : public Shapes
{
private:
    double edgeSquare = 0;
public:
    void getParametrSquare();
    double findArea();
};

