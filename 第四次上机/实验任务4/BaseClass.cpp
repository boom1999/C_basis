#include "BaseClass.h"



void BaseClass::fn1( )
{
	cout << "�����˻���ĳ�Ա����fn1" << endl;
}

void BaseClass::fn2( )
{
	cout << "�����˻���ĳ�Ա����fn2" << endl;
}

BaseClass::BaseClass( )
{
	cout << "�����˻��๹�캯����" << endl;
}


BaseClass::~BaseClass( )
{
	
	cout << "�����˻�������������" << endl;

}

void DerivedClass::fn1( )
{
	cout << "������������ĳ�Ա����fn1" << endl;
}

void DerivedClass::fn2( )
{
	cout << "������������ĳ�Ա����fn2" << endl;
}

DerivedClass::DerivedClass( )
{
	cout << "�����������๹�캯��!" << endl;

}

DerivedClass::~DerivedClass( )
{
	cout << "����������������������" << endl;

}
