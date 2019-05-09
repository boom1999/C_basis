#pragma once
#include<iostream>
using namespace std;
//全部基于以公元元年元月一日为起点

class Date
{
public:
	Date();
	~Date();
	Date(int year, int month, int day) :m_year(year), m_month(month), m_day(day) {}   //自定义构造函数
	void setday(int day);						//设置天数
	void setmoth(int month);					//设置月份
	void setyear(int year);						//设置年份
	int getday();								//读取天数
	int getmonth();								//读取月份
	int year();									//读取年份
	Date operator+(int days);					//重载一个日期加上天数
	Date operator-(int days);					//重载一个日期减去天数
	int operator-(Date&);						//重载两个日期的差值
	void show() { cout << m_year << ":" << m_month << ":" << m_day << endl; }   //show当前日期
private:
	int m_year, m_month, m_day;
	bool leap(int);								//判断该年份时平年还是闰年
	int DateToNum(const Date&);						//日期向总天数转化
	Date NumToDate(int);						//总天数向日期转化
	static int daynum[2][12];					////定义二维数组表示平年和闰年的月份天数
};



