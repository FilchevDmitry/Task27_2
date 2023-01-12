#pragma once
#include<string>
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
    void getCentre();
    void colors();
    void set—olor();
    void set—entre();
    void getRectangle(double &width, double &height);
    void setRectangle();
};