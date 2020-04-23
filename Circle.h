#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Figure.h"
using namespace std;
class Circle : public Figure
{
private:
float r;
public:
Circle();
Circle(float val_r);
Circle(const Circle &obj);
void print() const;
float square() const;
float perimeter() const;
bool SetR( float val_r );
float GetR() const;
Circle & operator=(const Circle &o);
};
#endif //CIRCLE_H_INCLUDED
