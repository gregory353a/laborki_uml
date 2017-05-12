#include "Point.h"

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
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
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

Point Point::translate(Point *p)
{
	Point t(this->getX() - p->getX(), this->getY() - p->getY());
	return t;

}