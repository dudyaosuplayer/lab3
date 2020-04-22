#include "Figure.h"
#include "_Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Point.h"

using namespace std;

int main()
{
      int _x = 0;
      int _y = 0;
      int _a;
      int _b;
      int _c;
      int _R;
      int k;
     b:
    cout << "Enter 1 to enter rectangle  : "<<endl;
    cout << "Enter 2 to enter circle : "<<endl;
    cout << "Enter 3 to enter triangle : "<<endl;
    cout << "Enter 4 for exit :"<<endl;

    cout << "move : "<<endl;
    cin >> k;

    switch(k)
    {
        case 1:
            {
                cout << "Input length : "<<endl;
                cin >> _a;
                cout << "Input width : "<<endl;
                cin >> _b;
                _Rectangle obj1(_x, _y, _a, _b);
                obj1.print();
                cout << obj1.square() << endl << obj1.perimeter() << endl;
                goto b;
            }
        case 2:
            {
                cout << "Input radius : "<<endl;
                cin>>_R;
                Circle obj2(_x, _y, _R);
                obj2.print();
                cout << obj2.square() << endl << obj2.perimeter() << endl;
                goto b;
            }
        case 3:
            {
                cout << "Input 1 side : "<<endl;
                cin >> _a;
                cout << "Input 2 side : "<<endl;
                cin >> _b;
                cout << "Input 3 side : "<<endl;
                cin >> _c;
                Triangle obj3(_x, _y, _a, _b, _c);
                obj3.print();
                cout << obj3.square() << endl << obj3.perimeter() << endl;
                goto b;
            }
        case 5:
            {
                return 0;
            }

    }
return 0;
}

