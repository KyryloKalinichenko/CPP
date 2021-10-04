#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const  b, Point const  c, Point const p){
	Fixed w_1;
	Fixed w_2;

	w_1 = a.get_x() * (c.get_y() - a.get_y()) + (p.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - p.get_x() * (c.get_y() - a.get_y());
	w_1 = w_1 / ((b.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()));

	w_2 = (p.get_y() - a.get_y() - w_1 * (b.get_x() - a.get_y())) / c.get_y() - a.get_y();

	if (w_1 < 1 && w_1 > 0 && w_2 < 1 && w_2 > 0 )
	{
		if (w_1 + w_2 < 1)
			return true;
	}
	return false;


}

int main( void ) {
	Point const a;
	Point const b(3, 6);
	Point const c(6, 3);

	float x;
	float y;

	std::cout << "Give me x:" << std::endl;
	std::cin >> x;
	std::cout << "Give me y:" << std::endl;
	std::cin >> y;

	Point const p(x, y);

	std::cout << "A " << a.get_x() << " x ;" << a.get_y() << " y ;"  << std::endl;
	std::cout << "B " << b.get_x() << " x ;" << b.get_y() << " y ;" << std::endl;
	std::cout << "C " << c.get_x() << " x ;" << c.get_y() << " y ;" << std::endl;
	std::cout << "P " << p.get_x() << " x ;" << p.get_y() << " y ;" << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "I'm in!\n";
	else
		std::cout << "I'm not!\n";

    return 0;
}