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
    void colors();
    void get—entre();
    
};