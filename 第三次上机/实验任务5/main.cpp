#include "Park.h"
int main( )
{
	Park A(10);
	A.add("��A12345", "red", 10);
	A.add("��A23456", "black", 15);
	A.view( );
	Park B(A);
	B.add("��B34567", "orange", 20);
	B.view( );
	return 0;
}