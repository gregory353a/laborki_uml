#if !defined(__SHAPE_H__)
#define __SHAPE_H__

#include "Point.h"

class Shape
{
public:
	Shape();
	~Shape();
	
	virtual bool isIn(Point *p) = 0;
};

#endif /* __SHAPE_H__ */