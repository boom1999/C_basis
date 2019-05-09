#pragma once
#include<string>
#include<iostream>
#include "Birthday.h"

class People
{
private:
	std::string number;
	std::string sex;
	Birthday birthday;
	std::string id;
public:
	void in( )
	{
		std::cout << "please cin number:\n";
		std::cin >> number;
		std::cout << "please cin sex:\n";
		std::cin >> sex;
		birthday.in( );
		std::cout << "please cin id:\n";
		std::cin >> id;
	}
	void out( )
	{
		std::cout << "number:" << number << ' ' << "sex:" << sex << ' ';
		birthday.out( );
		std::cout << "id:" << id << "   over\n";
	}
	People( );
	People(std::string number_, std::string sex_, Birthday birthday_, std::string id_)
	{
		number = number_;
		sex = sex_;
		birthday = birthday_;
		id = id_;
	}
	People(const People& exPeople):birthday(exPeople.birthday)
	{
		number = exPeople.number;
		sex = exPeople.sex;
		id = exPeople.id;
	}
	~People( );
};

