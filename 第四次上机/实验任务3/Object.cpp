#include "Object.h"



void Object::getweight( )
{
	cin >> m_weight;
}

double Object::showV( )
{
	return m_weight;
}

Object::Object( )
{
	cout << "�����˻��๹�캯����" << endl;
}

void Object::show( )
{
	cout << "weight:" << m_weight << " ";
}


Object::~Object( )
{
	cout << "�����˻�������������" << endl;
}

void Box::gethw( )
{
	cin >> m_height >> m_width;
}

void Box::show( )
{
	Object::show( );
	cout << "height:" << m_height << " " << "width:" << m_width << endl;
}

double Box::showV( )
{
	return Object::showV( )* m_height* m_width;
}

Box::Box( )
{
	cout << "�����������๹�캯��!" << endl;
}

Box::~Box( )
{
	cout << "����������������������" << endl;

}
