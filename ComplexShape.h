#if !defined(__COMPLEXSHAPE_H__)
#define __COMPLEXSHAPE_H__

#include "Shape.h"
#include "Utils.h"

class ComplexShape : public Shape
{
protected:
	Shape *left;
	Shape *right;
	Operation op;

public:
	ComplexShape(Shape *left, Shape *right, Operation op);
	~ComplexShape();

	bool isIn(const Point &p) const;
	
};

#endif /* __COMPLEXSHAPE_H__ */