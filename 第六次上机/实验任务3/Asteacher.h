#pragma once
#include "Teacher.h"
class Asteacher :
	public Teacher
{
private:
	static int base;
	static int per_money;
public:
	virtual int getmoney ();
	Asteacher (int );
	Asteacher ();
	~Asteacher ();
};

int Asteacher::base = 3000;
int Asteacher::per_money = 25;

inline int Asteacher::getmoney ()
{
	return (base + getNum_class () * per_money);
}

inline Asteacher::Asteacher (int num_class) :Teacher (num_class)
{
}

Asteacher::Asteacher ()
{
}


Asteacher::~Asteacher ()
{
}
