#pragma once
#include "Shape.h"
#define PI 3.141592654
class Circle :
    public Shape
{
private:
    double m_R;
public:
    virtual double getArea ();
    virtual double getPerim ();
    double getR ();
    Circle (double);
    ~Circle ();
};

