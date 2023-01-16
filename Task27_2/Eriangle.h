#pragma once
#include"Shapes.h"

class Equilateral≈riangle :public Shapes
{
private:
    double edgeTriangle = 0;
public:
    void setParametrTriangle();
    void getParametrTriangle(double& inEdgeTriangle, double& inX, double& inY);
    double findArea();
};