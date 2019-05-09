#include "Circle.h"



double Circle::getArea ()
{
    return PI * getR ()* getR ();
}

double Circle::getPerim ()
{
    return 2 * PI* getR ();
}

double Circle::getR ()
{
    return m_R;
}

Circle::Circle (double R)
{
    m_R = R;
}




Circle::~Circle ()
{
}