#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(float const x, float const y): x(x), y(y)
{
}

Point::Point(const Point &pnt): x(pnt.x), y(pnt.y)
{
}

float	Point::getValue_x(void) const
{
	return (x.toFloat());
}

float	Point::getValue_y(void) const
{
	return (y.toFloat());
}

Point::~Point()
{
}