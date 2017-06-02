#if !defined(__RECT_H__)
#define __RECT_H__

#include <stdlib.h>
#include "Shape.h"

class Rect : public Shape
{
protected:
	float width;
	float height;
public:
	Rect(float w, float h);
	~Rect();

	bool isIn(const Point &p) const;

};

#endif /* __RECT_H__ */