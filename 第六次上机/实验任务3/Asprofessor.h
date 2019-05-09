#pragma once
#include "Teacher.h"
class Asprofessor :
	public Teacher
{
private:
	static int base;
	static int per_money;
public:
	virtual int getmoney ();
	Asprofessor (int );
	Asprofessor ();
	~Asprofessor ();
};

int Asprofessor::base = 3500;
int Asprofessor::per_money = 30;

inline int Asprofessor::getmoney ()
{
	return (base + getNum_class () * per_money);
}

inline Asprofessor::Asprofessor (int num_class) :Teacher (num_class)
{
}

Asprofessor::Asprofessor ()
{
}


Asprofessor::~Asprofessor ()
{
}
