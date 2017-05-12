#include "ComplexShape.h"

ComplexShape::ComplexShape(Shape *left, Shape *right, Operation op)
{
	this->left = left;
	this->right = right;
	this->op = op;
}

ComplexShape::~ComplexShape()
{
}

bool ComplexShape::isIn(Point *p)
{
	if(op == UNION)
		return left->isIn(p) || right->isIn(p);
	else if(op == DIFFERENCE)
		return left->isIn(p) && !right->isIn(p);
	else if(op == INTERSECTION)
		return left->isIn(p) && right->isIn(p);
	else if(op == SYMMETRIC_DIFF)
		return (left->isIn(p) || right->isIn(p)) && !(left->isIn(p) && right->isIn(p));
}