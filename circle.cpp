

#include"circle.h"
circle::circle(int p)
{
	n = p;
}
circle::circle(circle& x)
{
	n = x.n;
}

int circle::out()
{
	return n;
}