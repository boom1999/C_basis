#include "Shape.h"


Shape::~Shape( )
{
}

double Rectangle::getArea( )
{
	return m_c*m_k;
}

Rectangle::~Rectangle( )
{
}

double Circle::getArea( )
{
	return pi*m_r*m_r;
}

Circle::~Circle( )
{
}
