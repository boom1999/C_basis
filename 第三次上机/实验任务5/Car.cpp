#include "Car.h"




Car::Car( )
{
}

Car::~Car( )
{
}

void Car::set(string code,string color,float weight )
{
	this->code = code;
	this->color = color;
	this->weight = weight;
}

void Car::show( )
{
	cout << "code:" << code << "  color:" << color << "  weight:" << weight << endl;
}
