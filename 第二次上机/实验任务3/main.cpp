#include "Cat.h"
#include<iostream>

int Cat::numOfCats = 0;
void Cat::getNumOfCats( )
{
	std:: cout << "cats'number is:" << numOfCats << std::endl;
}

Cat::Cat( ) : name("Peter"), age(1)
{
	std::cout << "����Ĭ�Ϲ��캯��" << std::endl;
	std::cout << "cat's name: " << name << " " << "age:" << age << std::endl;
	numOfCats++;
	Cat::getNumOfCats( );
}
Cat::Cat(std::string _name,int _age):name(_name),age(_age)
{
	std::cout << "������ͨ���캯��" << std::endl;
	std::cout << "cat's name: " << name <<" "<<"age:"<<age<< std::endl;
	numOfCats++;
	Cat::getNumOfCats( );
}



Cat::Cat(const Cat& ex_cat):name(ex_cat.name),age(ex_cat.age)
{
	std::cout << "���ø��ƹ��캯��" << std::endl;
	std::cout << "cat's name: " << name << " " << "age:" << age << std::endl;
	numOfCats++;
	Cat::getNumOfCats( );
}


Cat::~Cat( )
{
	std::cout << "������������" << std::endl;
	numOfCats--;
	Cat::getNumOfCats( );
}

int main( )
{
	Cat cat1;
	Cat cat2("DuoDuo",2);
	Cat cat3(cat2);
	return 0;
}