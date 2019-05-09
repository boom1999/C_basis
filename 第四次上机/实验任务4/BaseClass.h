#pragma once
#include<iostream>
#include<string>
using namespace std;

class BaseClass
{
public:
	/*virtual*/ void fn1( );
	/*virtual*/ void fn2( );
	BaseClass( );
	virtual ~BaseClass( );
private:

};

class DerivedClass :public BaseClass
{
public:
	void fn1( );
	void fn2( );
	DerivedClass( );
	~DerivedClass( );
private:

};
