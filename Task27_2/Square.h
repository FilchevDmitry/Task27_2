#pragma once
#include"Shapes.h"
class Square : public Shapes
{
public:
	void setParametrSquare();
	void getParametrSquare(double& inWidth, double& inX, double& inY);
	double findArea();
private:
	double width = 0;
	
};