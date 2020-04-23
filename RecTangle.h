#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Figure.h"
using namespace std;
class RecTangle : public Figure
{
private:
float a, b;
public:
RecTangle();
RecTangle(float val_a, float val_b);
RecTangle(const RecTangle &obj);
void print() const;
float square() const;
float perimeter() const;
bool SetA(int val_a);
float GetA() const;
bool SetB(int val_b);
float GetB() const;
RecTangle & operator=(const RecTangle &o);
};
#endif //RECTANGLE_H_INCLUDED
