#pragma once
class SimpleCircle
{
public:
	SimpleCircle( );
	SimpleCircle(const SimpleCircle& exSC);
	~SimpleCircle( );
	int getx();
	void show( );
private:
	int* itsRadius;
};

