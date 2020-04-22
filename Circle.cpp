#include "Circle.h"

Circle::Circle() : Figure(), R(0){}
Circle::Circle(float _x, float _y,float _R) : Figure(_x, _y), R(_R){}
Circle::Circle(const Circle &obj) {
	x = obj.x;
	y = obj.y;
	R = obj.R;
}

void Circle::print() const
{
	cout << "x: " << x << "; " << "y: " << y << ";" << "R: " << R << ";";
}
float Circle::square() const{
    cout << "square = ";
	return 3.14 * R * R;
}
float Circle::perimeter() const{
    cout << "perimeter = ";
	return 3.14 * R * 2;
}

bool Circle::SetR (float _R)
{
    if (_R < 0)
    {
       return false;
    }
    else
        {
            R = _R;
            return true;
        }
}

float Circle::GetR() const{
	return R;
}

Circle & Circle::operator=(const Circle &o) {
	this->x = o.x, this->y = o.y,this->R = o.R;
	return *this;
}
