#include<iostream>
using namespace std;

int main( )
{
	int a; int* p=&a; int &r = a;
	cout << "a�������ʼֵΪa=" << a << endl;
	*p = 10;
	cout << "ͨ��ָ��p�޸�a��ֵ��a=" << a << endl;
	r = 5;
	cout << "ͨ������r�޸�a��ֵ��a=" << a << endl;
	return 0;
}