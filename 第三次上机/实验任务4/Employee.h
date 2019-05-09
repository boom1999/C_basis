#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	Employee( );
	Employee(const Employee& exem);
	~Employee( );
	void setname( );
	void display( );
private:
	string name;
	string location;
	string city;
	string postcode;
};

