#include "CAR.h"
#include<iostream>


void CAR::show( ) const
{
	std::cout << "Brand:" << brand << "  " << "Location:" << location << std::endl;
}

CAR::CAR( ):brand("Huawei"),location("Hangzhou")
{
}


CAR::~CAR( )
{
}
int main( )
{
	CAR car;
	car.show( );
	return 0;
}
