#include "Rectangle.h"



double Rectangle::getArea ()
{
    return getL ()* getS ();
}

double Rectangle::getPerim ()
{
    return 2 * (getL () + getS ());
}

double Rectangle::getL ()
{
    return m_L;
}

double Rectangle::getS ()
{
    return m_S;
}

Rectangle::Rectangle (double L, double S)
{
    m_L = L;
    m_S = S;
}




Rectangle::~Rectangle ()
{
}
