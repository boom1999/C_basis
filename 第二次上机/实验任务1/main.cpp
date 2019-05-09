#include<iostream>
using namespace std;
class Car;
class Boat
{
public:
	friend double getTotalWeight(const Boat& ex_boat, const Car& ex_car);
	Boat( );
	Boat(double _weight);
	~Boat( );
private:
	double weight;
};
class Car
{
public:
	friend double getTotalWeight(const Boat& ex_boat, const Car& ex_car);
	Car( );
	Car(double _weight);
	~Car( );
private:
	double weight;
};

Boat::Boat( )
{
	weight = 10;
}

Boat::Boat(double _weight)
{
	weight = _weight;
}


Boat::~Boat( )
{
}


Car::Car( )
{
	weight = 10;
}

Car::Car(double _weight)
{
	weight = _weight;
}


Car::~Car( )
{
}
double getTotalWeight(const Boat& ex_boat, const Car& ex_car)
{
	return ex_boat.weight + ex_car.weight;
}
int main( )
{
	Boat boat1(19.9);
	Car car1(9.9);
	cout << "The sum of weight is:" << endl;
	cout << getTotalWeight(boat1, car1) << endl;
}