#include "SimpleCircle.h"
#include<iostream>
using namespace std;

int main( )
{
	void (SimpleCircle:: * p)();
	p =& SimpleCircle::show;
	SimpleCircle A;
	(A.*p)();                      // �ú���ָ��
	//A.show( );                //����ͨ��
	SimpleCircle B(A);
	B.show( );
	return 0;
}