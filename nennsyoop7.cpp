#include "circle.h"

int main()
{
	Circle a(3, 3, 2);
	Circle b(a);

	Vector c(2, 3, 4, 5);
	Vector d(c);

	Complex z(3, 4);
	Complex z2(5, 4);
	return 0;
}