#include "RecTangle.h"

RecTangle::RecTangle() : Figure(), a(0), b(0) {}
RecTangle::RecTangle(float val_a, float val_b) : a(val_a), b(val_b) 
{
while (a < 0)
{
this-> a = 0;
cout << "Input correct value of length : ";
cin >> a;
this-> a = a;
}
while (b < 0)
{
this-> b = 0;
cout << "Input correct value of width : ";
cin >> b;
this-> b = b;
}
}
RecTangle::RecTangle(const RecTangle &obj)
{
a = obj.a;
b = obj.b;
}
void RecTangle::print() const
{
cout << "a = " << a << "; " << "b = " << b << "; ";
}
float RecTangle::square() const
{
cout << "square = ";
return a * b;
}
float RecTangle::perimeter() const
{
cout << "perimeter = ";
return 2 * (a + b);
}

bool RecTangle::SetA (int val_a)
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

float RecTangle::GetA() const
{
return a;
}
bool RecTangle::SetB(int val_b)
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
float RecTangle::GetB() const
{
return b;
}

RecTangle & RecTangle::operator=(const RecTangle &o)
{
this->a = o.a, this->b = o.b;
return *this;
}
