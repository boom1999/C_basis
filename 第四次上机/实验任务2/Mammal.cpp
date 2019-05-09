#include "Mammal.h"



Mammal::Mammal(string name, int age):m_name(name),m_age(age)
{
	cout << "调用了基类构造函数！"<<endl;
}


Mammal::~Mammal( )
{
	cout << "调用了基类析构函数！" << endl;
}

void Mammal::show( )
{
	cout << "name:" << m_name << " " << "age:" << m_age << " ";
}

Dog::Dog(string name ,int age,double speed):m_speed(speed),Mammal(name,age)
{
	cout << "调用了派生类构造函数!"<<endl;
}

void Dog::show( )
{
	Mammal::show( );
	cout << "speed:" << m_speed << endl;
}

Dog::~Dog( )
{
	cout << "调用了派生类析构函数！"<<endl;
}
