#include "SimpleCircle.h"
#include<iostream>
using namespace std;

int main( )
{
	void (SimpleCircle:: * p)();
	p =& SimpleCircle::show;
	SimpleCircle A;
	(A.*p)();                      // 用函数指针
	//A.show( );                //用普通的
	SimpleCircle B(A);
	B.show( );
	return 0;
}