#include <string>
#include<iostream>
#pragma once
class Cat
{
private:
	static int numOfCats;
	const std::string name;
	int age;
public:
	static  void getNumOfCats( );
	Cat( );
	Cat(std::string _name,int _age);
	Cat(const Cat& ex_cat);
	~Cat( );
};

