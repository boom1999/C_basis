#pragma once
#include<iostream>
using namespace std;
//ȫ�������Թ�ԪԪ��Ԫ��һ��Ϊ���

class Date
{
public:
	Date();
	~Date();
	Date(int year, int month, int day) :m_year(year), m_month(month), m_day(day) {}   //�Զ��幹�캯��
	void setday(int day);						//��������
	void setmoth(int month);					//�����·�
	void setyear(int year);						//�������
	int getday();								//��ȡ����
	int getmonth();								//��ȡ�·�
	int year();									//��ȡ���
	Date operator+(int days);					//����һ�����ڼ�������
	Date operator-(int days);					//����һ�����ڼ�ȥ����
	int operator-(Date&);						//�����������ڵĲ�ֵ
	void show() { cout << m_year << ":" << m_month << ":" << m_day << endl; }   //show��ǰ����
private:
	int m_year, m_month, m_day;
	bool leap(int);								//�жϸ����ʱƽ�껹������
	int DateToNum(const Date&);						//������������ת��
	Date NumToDate(int);						//������������ת��
	static int daynum[2][12];					////�����ά�����ʾƽ���������·�����
};



