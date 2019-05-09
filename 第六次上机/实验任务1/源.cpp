#include"Rectangle.h"
#include"Circle.h"
#include<iostream>


int main ()
{
    using std::cout;
    using std::cin;
    using std::endl;
    Shape* shape1 = new Rectangle (4.2, 5.5);
    Shape* shape2 = new Circle (6.6);
    cout << "rectangle1'Area:" << shape1->getArea () << endl;
    cout << "rectangle1'Perim:" << shape1->getPerim () << endl;
    cout << "circle1'Area:" << shape2->getArea () << endl;
    cout << "circle1'Perim:" << shape2->getPerim () << endl;
    delete shape1;
    delete shape2;
    return 0;
}