#include "Employee.h"
int main( )
{
	Employee A;
	A.display( );
	A.setname( );
	A.display( );
	Employee B(A);
	B.display();
	return 0;
}