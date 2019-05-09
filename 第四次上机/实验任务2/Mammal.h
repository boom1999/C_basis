#pragma once
#include<string>
#include<iostream>
using namespace std;
class Mammal
{
public:
	Mammal(string,int );
	virtual ~Mammal( );
	void show( );
private:
	string m_name;
	int m_age;
};

class Dog :public Mammal
{
public:
	Dog( string,int,double);
	void show( );
	~Dog( );
private:
	double m_speed;
};
