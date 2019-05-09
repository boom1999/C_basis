#include "Park.h"
int main( )
{
	Park A(10);
	A.add("ÕãA12345", "red", 10);
	A.add("ÕãA23456", "black", 15);
	A.view( );
	Park B(A);
	B.add("ÕãB34567", "orange", 20);
	B.view( );
	return 0;
}