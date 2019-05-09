#include<iostream>
#include"Shape.h"
using namespace std;
int main( )
{
	Rectangle A(6.2, 4.4);
	Circle B(5.5);
	cout << A.getArea( ) << endl;
	cout << B.getArea( ) << endl;
	return 0;
}