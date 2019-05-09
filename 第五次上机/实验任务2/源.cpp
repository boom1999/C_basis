#include<iostream>
using namespace std;

class Point
{
public:
	Point( );
	~Point( );
	Point& operator ++();
	Point operator ++(int);
	void getvalue( );
	void setvalue( );
private:
	int x;
};

Point::Point( )
{
	x = 0;
}

Point::~Point( )
{
}

Point& Point::operator++( )
{
	x++;
	return *this;
}

Point Point::operator++(int)
{
	Point old = (*this);
	x++;
	return old;
}

void Point::setvalue( )
{
	cout << "请输入初值:";
	cin >> x;
}

void Point::getvalue( )
{
	cout << x << endl;
}

int main( )
{
	Point example1;
	example1.setvalue( );
	cout << "下面使用后置++" << endl;
	(example1++).getvalue( );
	Point exampe2;
	cout << "下面使用前置++" << endl;
	exampe2.setvalue( );
	(++exampe2).getvalue( );
	return 0;
}