#pragma once
#include "Car.h"
class Park
{
public:
	Park(int x );
	Park(const Park& expark);
	~Park( );
	bool add(string code, string color, float weight);
	void view( );
private:
	int max;
	int num;
	Car* cars;
};

