#include"BaseClass.h"

int main( )
{
	DerivedClass A;
	A.fn1( );
	A.fn2( );
	cout << endl;
	BaseClass* prtB;
	DerivedClass B;
	prtB = &B;
	(*prtB).fn1( );
	(*prtB).fn2( );
	cout << endl;
	DerivedClass* prtC;
	DerivedClass C;
	prtC = &C;
	(*prtC).fn1( );
	(*prtC).fn2( );
	cout << endl;
	return 0;
}