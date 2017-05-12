#include "Circle.h"

Circle::Circle(float r)
{
	radius = r;
}

Circle::~Circle()
{
}

bool Circle::isIn(Point *p)
{
	return pow(p->getX(), 2) + pow(p->getY(), 2) <= pow(radius, 2);
}