#include "Circle.h"

Circle::Circle() : Figure(), r(0){}
Circle::Circle(float val_r) :  r(val_r)
{
if (r < 0)
{
this-> r = 0;
}
}
Circle::Circle(const Circle &obj) {
	r = obj.r;
}

void Circle::print() const
{
cout << "r = " << r << "; ";
}
float Circle::square() const
{
return 3.14 * r * r;
}
float Circle::perimeter() const
{
return 3.14 * r * 2;
}
bool Circle::SetR (float val_r)
{
if (val_r < 0)
{
return false;
}
else
{
r = val_r;
return true;
}
}

float Circle::GetR() const{
	return r;
}

Circle & Circle::operator=(const Circle &o) {
	this->r = o.r;
	return *this;
}
