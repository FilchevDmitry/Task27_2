#pragma once
#include<string>
class Rectangle;
class Shapes
{
private:
    enum COLORS
    {
        RED = 1,
        BLUE,
        GREEN
    };
public:
    double x = 0;
    double y = 0;
    int numColor = 0;
    std::string color;
    double outWidth = 0;
    double outHeight = 0;
    void colors();
    void get—olor();
    void get—entre();
    Rectangle* getRectangle(double& inWidth, double& inHeight, double& inX, double& inY);
};
class Rectangle : public Shapes
{
private:
    double width = 0;
    double height = 0;
public:
    Rectangle* getRectangle(double& inWidth, double& inHeight, double& inX, double& inY);
    Rectangle();
    Rectangle(double& inWidth, double& inHeight, double& inX, double& inY);
    void setParametreRectangle();
    void setParametreSquare();
    void getParametreRectangle(double& inWidth, double& inHeight, double& inX, double& inY);
    void getParametreSquare(double& inWidth, double& inX, double& inY);
};