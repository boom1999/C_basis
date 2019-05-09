#pragma once
#define pi 3.1415926
class Shape
{
public:
	Shape(double x0 = 0, double y0 = 0) :m_x(x0), m_y(y0) {};
	virtual ~Shape( );
private:
	double m_x, m_y;
};

class Rectangle :public Shape
{
public:
	Rectangle(double c = 1, double k = 1) :Shape( ), m_c(c), m_k(k) {};
	double getArea( );
	~Rectangle( );
private:
	double m_c, m_k;
};

class Circle :public Shape
{
public:
	Circle(double r) :Shape( ), m_r(r) {};
	double getArea( );
	~Circle ();
private:
	double m_r;
};