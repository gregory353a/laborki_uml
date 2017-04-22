#include "Rect.h"

Rect::Rect(float w, float h)
{
	width = w;
	height = h;
}

Rect::~Rect()
{
}

bool Rect::isIn(Point *p)
{
	return ((abs(p->getX()) < width/2) && (abs(p->getY()) < height/2));
}