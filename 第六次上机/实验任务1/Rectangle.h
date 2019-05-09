#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    double m_L;
    double m_S;
public:
    virtual double getArea ();
    virtual double getPerim ();
    double getL ();
    double getS ();
    Rectangle (double, double);
    ~Rectangle ();
};