#pragma once
#include"Shapes.h"
class Rectangle : public Shapes
{
private:
    double width = 0;
    double height = 0;
public:
    Rectangle();
    Rectangle(double& inWidth, double& inX, double& inY);
    Rectangle(double& inWidth, double& inHeight, double& inX, double& inY);
    void setParametreRectangle();
    void setParametreSquare();
    void getParametreRectangle(double& inWidth, double& inHeight, double& inX, double& inY);
    void getParametreSquare(double& inWidth, double& inX, double& inY);
};

