#include "Date.h"


int Date::daynum[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31} };
Date::Date()
{
	m_day = 1;
	m_month = 1;
	m_year = 1;
}


Date::~Date()
{
}

void Date::setday(int day)
{
	m_day = day;
}

void Date::setmoth(int month)
{
	m_month = month;
}

void Date::setyear(int year)
{
	m_year=year;
}

int Date::getday()
{
	return m_day;
}

int Date::getmonth()
{
	return m_month;
}

int Date::year()
{
	return m_year;
}

Date Date::operator+(int days)
{
	Date date;
	int number = DateToNum(*this);
	number += days;
	date = NumToDate(number);
	return date;
}

Date Date::operator-(int days)
{
	 Date date;
	int number = DateToNum(*this);
	number -= days;
	date = NumToDate(number);
	return date;
}

int Date::operator-(Date&then)
{
	int days = DateToNum(*this)-DateToNum(then);
	return days;
}

bool Date::leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return false;
}

int Date::DateToNum(const Date&ex)
{
	int year, month, days = 0;
	for (year = 1; year < ex.m_year; year++)
		if (leap(year))							//bug点，将year写成了m_year,导致错误
			days += 366;
		else days += 365;
	for (month = 1; month < ex.m_month; month++)
		if (leap(year))
			days += daynum[1][month - 1];
		else
			days += daynum[0][month - 1];
	days += ex.m_day;
	return days;
}

Date Date::NumToDate(int num)
{
	int year = 1, month = 1, day, rest, boom;
	rest = num;
	while (1)
	{
		if (leap(year))
			if (rest <= 366)	break;
			else rest -= 366;
		else
			if (rest <= 365)	break;
			else rest -= 365;
		year++;
	}
	boom = leap(year);
	while (1)
	{
		if (boom)
			if (rest > daynum[1][month - 1])
				rest -= daynum[1][month - 1];
			else break;
		else
			if (rest > daynum[0][month - 1])
				rest -= daynum[0][month - 1];
			else break;
		month++;
	}
	day = rest;
	return Date(year,month,day);
}
