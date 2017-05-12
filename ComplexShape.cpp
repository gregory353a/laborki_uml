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
	Point t = p->translate(&this->pos);

	if(op == UNION)
		return left->isIn(&t) || right->isIn(&t);
	else if(op == DIFFERENCE)
		return left->isIn(&t) && !right->isIn(&t);
	else if(op == INTERSECTION)
		return left->isIn(&t) && right->isIn(&t);
	else if(op == SYMMETRIC_DIFF)
		return (left->isIn(&t) || right->isIn(&t)) && !(left->isIn(&t) && right->isIn(&t));
}