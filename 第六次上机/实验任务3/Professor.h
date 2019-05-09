#pragma once
#include "Teacher.h"
class Professor :
	public Teacher
{
private:
	static int base;
	static int per_money;
public:
	virtual int getmoney ();
	Professor (int );
	Professor ();
	~Professor ();
};

int Professor::base = 4000;
int Professor::per_money = 35;

inline int Professor::getmoney ()
{
	return (base+getNum_class()*per_money);
}

inline Professor::Professor (int num_class):Teacher(num_class)
{
}

Professor::Professor ()
{
}


Professor::~Professor ()
{
}
