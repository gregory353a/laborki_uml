#include "ComplexShape.h"

ComplexShape::ComplexShape(Shape *left, Shape *right, Operation op)
{
	left = left;
	right = right;
	op = op;
}

ComplexShape::~ComplexShape()
{
}

bool ComplexShape::isIn(Point *p)
{
	return false;
}