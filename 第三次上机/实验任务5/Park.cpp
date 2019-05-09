#include "Park.h"


Park::Park(int x)
{
	max = x; num = 0;
	cars = new Car[max];
}

Park::Park(const Park& expark)
{
	max = expark.max;
	num = expark.num;
	cars = new Car[max];
	for (int i = 0; i < num; i++)
		cars[i] = expark.cars[i];
}

Park::~Park( )
{
	delete[]cars;
}

bool Park::add(string code, string color, float weight)
{
	if (this->num >= max)
		return false;
	else
	{
		cars[num].set(code, color, weight);
		this->num++;
	}
}

void Park::view( )
{
	for (int i = 0; i < num; i++)
		cars[i].show( );
}
