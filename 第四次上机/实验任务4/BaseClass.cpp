#include "BaseClass.h"



void BaseClass::fn1( )
{
	cout << "调用了基类的成员函数fn1" << endl;
}

void BaseClass::fn2( )
{
	cout << "调用了基类的成员函数fn2" << endl;
}

BaseClass::BaseClass( )
{
	cout << "调用了基类构造函数！" << endl;
}


BaseClass::~BaseClass( )
{
	
	cout << "调用了基类析构函数！" << endl;

}

void DerivedClass::fn1( )
{
	cout << "调用了派生类的成员函数fn1" << endl;
}

void DerivedClass::fn2( )
{
	cout << "调用了派生类的成员函数fn2" << endl;
}

DerivedClass::DerivedClass( )
{
	cout << "调用了派生类构造函数!" << endl;

}

DerivedClass::~DerivedClass( )
{
	cout << "调用了派生类析构函数！" << endl;

}
