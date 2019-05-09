#pragma once
#include<string>
class CAR
{
private:
	//const std::string brand;
	//const std::string location;
	const char brand[10];
	const char* a = brand;
	const char location[10];
public:
	 void show( ) const;
	CAR( );
	~CAR( );
};

