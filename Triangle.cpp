#include "Triangle.h"

Triangle::Triangle() : Figure(), a(0),b(0),c(0) {}
Triangle::Triangle(float val_a, float val_b, float val_c) : a(val_a), b(val_b), c(val_c) 
{
while (a < 0)
{
this-> a = 0;
this-> a = a;
}
while (b < 0)
{
this-> b = 0;
this-> b = b;
}
while (c < 0)
{
this-> c = 0;
this-> c = c;
}
}
Triangle::Triangle(const Triangle &obj)
{
a = obj.a;
b = obj.b;
c = obj.c;
}
void Triangle::print() const
{
cout << "a = " << a << "; " << "b = " << b << "; " << "c = " << c << "; ";
}
float Triangle::square() const
{
float p;
p = (a + b + c)*0.5;
cout << "square = ";
return sqrt(p * (p - a) * (p - b) * (p - c));
}
float Triangle::perimeter() const
{
cout << "perimeter = ";
return a + b + c;
}
bool Triangle::SetA (float val_a)
{
if (val_a < 0)
{
return false;
}
else
{
a = val_a;
return true;
}
}
float Triangle::GetA() const
{
return a;
}
bool Triangle::SetB (float val_b)
{
if (val_b < 0)
{
return false;
}
else
{
b = val_b;
return true;
}
}
float Triangle::GetB() const
{
return b;
}
bool Triangle::SetC (float val_c)
{
if (val_c < 0)
{
return false;
}
else
{
c = val_c;
return true;
}
}
float Triangle::GetC() const
{
return c;
}

Triangle & Triangle::operator=(const Triangle &o)
{
this->a = o.a, this->b = o.b, this->c = o.c;
return *this;
}
