#include"DerivedClass.h"

int main ()
{
	DerivedClass derivedclass1;
	DerivedClass* prt_der;
	prt_der = &derivedclass1;
	BaseClass* prt_base;
	prt_base = &derivedclass1;
	derivedclass1.fn1 ();
	derivedclass1.fn2 ();
	prt_der->fn1 ();
	prt_der->fn2 ();
	prt_base->fn1 ();
	prt_base->fn2 ();
	return 0;
}