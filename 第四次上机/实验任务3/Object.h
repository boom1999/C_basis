#pragma once
#include<iostream>
using std::cout; 
using std::cin;
using std::endl;
class Object
{
private:
	double m_weight;
public:
	Object( );
	void show( );
	void getweight( );
	double showV( );
	virtual ~Object( );
};

class Box :public Object
{
private:
	double m_height, m_width;
public:
	void gethw( );
	void show( );
	double showV( );
	Box( );
	~Box( );
};