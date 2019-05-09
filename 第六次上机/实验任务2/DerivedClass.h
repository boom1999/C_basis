#pragma once
#include "BaseClass.h"

class DerivedClass :
	public BaseClass
{
public:
	virtual void fn1 ();
	void fn2 ();
	DerivedClass ();
	~DerivedClass ();
};


