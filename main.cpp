#include <stdio.h>

#include "ComplexShape.h"
#include "Circle.h"
#include "Rect.h"
#include "Point.h"

int main(int argc, char *argv[])
{
	printf("main: arrived\n");

	Circle *c = new Circle(10);
	printf("Circle (rad 10): %p\n", c);
	Rect *r = new Rect(4, 6);
	printf("Rect (w 4, h 6): %p\n", r);

	ComplexShape *cs = new ComplexShape(c, r, UNION);
	printf("ComplexShape (C u R): %p\n", cs);

	Point *p1 = new Point(1, 2);
	Point *p2 = new Point(100,100);

	if(r->isIn(p1))
		printf("1 OK\n");

	if(!r->isIn(p2))
		printf("2 OK\n");


	delete cs;
	delete c;
	delete r;

	return 0;
}