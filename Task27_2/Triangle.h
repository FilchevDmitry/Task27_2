#pragma once
#include"Shapes.h"

class Triangle : public Shapes
{
public:
    void setParametrTriangle();
    void getParametrTrtangle(double& edgeTriangle, double& inX, double& inY);
    double findArea();
private:
double edgeTriangle = 0;
};

