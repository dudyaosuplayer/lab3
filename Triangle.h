#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include <cmath>
#include "Figure.h"
using namespace std;
class Triangle : public Figure
{
private:
float a,b,c;
public:
Triangle();
Triangle(float val_a,float val_b,float val_c);
Triangle(const Triangle &obj);
void print() const;
float square() const;
float perimeter() const;
bool SetA(float val_a);
float GetA() const;
bool SetB(float val_b);
float GetB() const;
bool SetC(float val_c);
float GetC() const;
Triangle & operator=(const Triangle &o);
};
#endif //TRIANGLE_H_INCLUDED
