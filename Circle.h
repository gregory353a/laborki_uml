#if !defined(__CIRCLE_H__)
#define __CIRCLE_H__

#include <stdlib.h>
#include "Shape.h"

class Circle : public Shape
{
protected:
	float radius;
public:
	Circle(float r);
	~Circle();

	bool isIn(Point *p);
};

#endif /* __CIRCLE_H__ */