#include "Point.hpp"
#include <iostream>
#include <cstring>

void	ft_check(Point a, Point b, Point c, Point point)
{
	if (bsp(a, b, c, point))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}
int	main(void)
{
	Point a(4, 4);
	Point b(9, 9);
	Point c(8, 1);

	Point point(6, 3);
	Point point1(6, 6);
	Point point2(8, 3);
	Point point3(5, 4);
	Point point4(6.5, 3.2);
	Point point5(2, 3);
	ft_check(a, b, c, point);
	ft_check(a, b, c, point1);
	ft_check(a, b, c, point2);
	ft_check(a, b, c, point3);
	ft_check(a, b, c, point4);
	ft_check(a, b, c, point5);
	return (0);
}