#pragma once
#include<iostream>
using namespace std;

class Birthday
{
private:
	int year;
	int month;
	int day;
public:
	void in( )
	{
		cout << "year:\n";
		cin >> year;
		cout << "month:\n";
		cin >> month;
		cout << "day:\n";
		cin >> day;
	}
	void out( )
	{
		cout << "birthday:"<<year << '.' << month << '.' << day << '.';
	}
	Birthday( );
	Birthday(int year_, int month_, int day_)
	{
		year = year_;
		month = month_;
		day = day_;
	}
	Birthday(const Birthday& exBirthday)
	{
		year = exBirthday.year;
		month = exBirthday.month;
		day = exBirthday.day;
	}
	~Birthday( );
};

