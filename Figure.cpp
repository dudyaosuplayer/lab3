#include "Figure.h"

Figure::Figure() : Point() {}
Figure::Figure(float _x, float _y) : Point(_x, _y) {}
Figure::Figure(const Figure &obj) {
	x = obj.x;
	x = obj.y;
}

void Figure::SetX(float _x) {
	x = _x;
}

void Figure::SetY(float _y) {
	y = _y;
}

float Figure::GetX() const{ return x; }
float Figure::GetY() const{ return y; }

Figure & Figure::operator=(const Figure &o) {
	this->x = o.x, this->y = o.y;
	return *this;
}
