#include "Point.h"

Point::Point(float x, float y)
{
	x = x;
	y = y;
}

Point::~Point()
{
}

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

void Point::setX(float x)
{
	x = x;
}

void Point::setY(float y)
{
	y = y;
}