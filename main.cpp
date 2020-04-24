#include <locale.h>
#include "Figure.h"
#include "RecTangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;
int main()
{
int val_a, val_b, val_c, val_r, l;
while (1)
{
cout << "Press 1 to Rectangle  : "<<endl;
cout << "Press 2 to Circle : "<<endl;
cout << "Press 3 to Triangle : "<<endl;
cout << "Press 4 to exit :"<<endl;
cout << "Value : ";
cin >> l;
switch(l)
{
case 1:
{
cout << "Input value of length : ";
cin >> val_a;
while (val_a < 0)
{
cout << "Input correct value of length : ";
cin >> val_a;
}
cout << "Input value of width : ";
cin >> val_b;
while (val_b < 0)
{
cout << "Input correct value of width : ";
cin >> val_b;
}
RecTangle obj1(val_a, val_b);
obj1.print();
cout << "square = " << obj1.square() << "; perimeter = " << obj1.perimeter() << endl;
break;
}
case 2:
{
cout << "Input value of radius : ";
cin>>val_r;
while (val_r < 0)
{
cout << "Input correct value of radius : ";
cin >> val_r;
}
Circle obj2(val_r);
obj2.print();
cout << "square = " << obj2.square() << "; perimeter = " << obj2.perimeter() << endl;
break;
}
case 3:
{
cout << "Input value of first side : ";
cin >> val_a;
while (val_a < 0)
{
cout << "Input correct value of first side : ";
cin >> val_a;
}
cout << "Input value of second side : ";
cin >> val_b;
while (val_b < 0)
{
cout << "Input correct value of second side : ";
cin >> val_b;
}
cout << "Input value of third side : ";
cin >> val_c;
while (val_c < 0)
{
cout << "Input correct value of third side : ";
cin >> val_c;
}
Triangle obj3(val_a, val_b, val_c);
obj3.print();
cout << "square = " << obj3.square() << "; perimeter = " << obj3.perimeter() << endl;
break;
}
case 4:
{
return 0;
}
}
}
return 0;
}

