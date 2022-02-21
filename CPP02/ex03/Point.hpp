#include <iostream>
#include "Fixed.hpp"
#include <cmath>

class Point
{
private:
		Fixed const x;
		Fixed const y;
public:
		Point();
		Point(float const x, float const y);
		Point(const Point &pnt);
		Point &operator= (const Point &pnt);
		~Point();

		float	getValue_x(void) const;
		float	getValue_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);