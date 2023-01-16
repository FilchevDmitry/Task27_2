#pragma once
#include"Shapes.h"
class Circle: public Shapes 
{
public:
	void setParametrCircle();
	void getParametrCircle (double &inRadius, double &inX, double& inY);
	double findArea();
private:
	double radius = 0;
	double Pi = 3.14;
};

