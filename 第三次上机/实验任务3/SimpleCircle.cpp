#include "SimpleCircle.h"
#include<iostream>
using namespace std;


SimpleCircle::SimpleCircle( )
{
	itsRadius = new int;
	*itsRadius = getx( );
}

SimpleCircle::SimpleCircle(const SimpleCircle& exSC)
{
	itsRadius = new int;
	*itsRadius = *exSC.itsRadius;
}


SimpleCircle::~SimpleCircle( )
{
	delete itsRadius;
}

int SimpleCircle::getx()
{
	int x;
	cout << "������뾶r��";
	cin >> x;
	return x;
}

void SimpleCircle::show( )
{
	cout << " this radius is��" << *itsRadius<<endl;
}
