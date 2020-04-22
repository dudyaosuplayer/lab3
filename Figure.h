#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <string>
#include "Point.h"

using namespace std;

class Figure : public Point{
public:
	Figure();
	Figure(float _x, float _y);
	Figure(const Figure &obj);

	virtual void print() const = 0;
	virtual float square() const = 0;
	virtual float perimeter() const = 0;

	void SetX (float _x);
	void SetY (float _y);

	float GetX() const;
	float GetY() const;

	Figure & operator=(const Figure &o);
};

#endif //FIGURE_H_INCLUDED
