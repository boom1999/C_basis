#include "Mammal.h"



Mammal::Mammal(string name, int age):m_name(name),m_age(age)
{
	cout << "�����˻��๹�캯����"<<endl;
}


Mammal::~Mammal( )
{
	cout << "�����˻�������������" << endl;
}

void Mammal::show( )
{
	cout << "name:" << m_name << " " << "age:" << m_age << " ";
}

Dog::Dog(string name ,int age,double speed):m_speed(speed),Mammal(name,age)
{
	cout << "�����������๹�캯��!"<<endl;
}

void Dog::show( )
{
	Mammal::show( );
	cout << "speed:" << m_speed << endl;
}

Dog::~Dog( )
{
	cout << "����������������������"<<endl;
}
