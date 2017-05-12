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
	Point t = p->translate(&this->pos);
	return pow(t.getX(), 2) + pow(t.getY(), 2) <= pow(radius, 2);
}