#if !defined(__POINT_H__)
#define __POINT_H__

class Point
{
protected:
	float x;
	float y;

public:
	Point(float x, float y);
	~Point();

	float getX();
	float getY();

	void setX(float x);
	void setY(float y);
};

#endif /* __POINT_H__ */