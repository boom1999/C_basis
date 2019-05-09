#include<iostream>
using namespace std;

int main( )
{
	int a; int* p=&a; int &r = a;
	cout << "a的随机初始值为a=" << a << endl;
	*p = 10;
	cout << "通过指针p修改a的值后a=" << a << endl;
	r = 5;
	cout << "通过引用r修改a的值后a=" << a << endl;
	return 0;
}