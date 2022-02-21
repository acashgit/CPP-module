#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float t1, t2, t3;

	t1 = (a.getValue_x() - point.getValue_x()) * (b.getValue_y() - a.getValue_y()) - (b.getValue_x() - a.getValue_x()) * (a.getValue_y() - point.getValue_y());
	t2 = (b.getValue_x() - point.getValue_x()) * (c.getValue_y() - b.getValue_y()) - (c.getValue_x() - b.getValue_x()) * (b.getValue_y() - point.getValue_y());
	t3 = (c.getValue_x() - point.getValue_x()) * (a.getValue_y() - c.getValue_y()) - (a.getValue_x() - c.getValue_x()) * (c.getValue_y() - point.getValue_y());
	if (t1 > 0.0 && t2 > 0.0 && t3 > 0.0)
		return (true);
	if (t1 < 0.0 && t2 < 0.0 && t3 < 0.0)
		return (true);
	return (false);
}