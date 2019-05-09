#pragma once
#include<iostream>
#include <string>
using namespace std;
class Car
{
public:
	Car( );
	~Car( );
	void set(string code, string color, float weight);
	void show( );
private:
	string code;
	string color;
	float weight;
};

