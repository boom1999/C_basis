#include<iostream>
using namespace std;

int main( )
{
	int* p = new int[10];
	for (int i = 0; i < 10; i++)
		p[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout << "p[" << i << ']' << '=' << p[i] << endl;
	delete[]p;
	return 0;
}