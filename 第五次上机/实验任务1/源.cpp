#include<iostream>
using namespace std;

class Counter
{
public:
	Counter operator+(int n)const;
	friend Counter operator- (const Counter& c1, int n);
	void show( );
	Counter(int x = 0, int y = 0);
	~Counter( );
private:
	int x, y;
};


Counter Counter::operator+(int n) const
{
	Counter sum;
	sum.x = x + n;
	sum.y = y + n;
		return sum;
}

void Counter::show( )
{
	cout << "This object's x=" << x << ",y=" << y << endl;
}

Counter::Counter(int a, int b)
{
	x = a; y = b;
}

Counter::~Counter( )
{
}

Counter operator-(const Counter& c1, int n)
{
	Counter result;
	result.x = c1.x - n;
	result.y = c1.y - n;
	return result;
}

int main( )
{
	Counter xxx;
	int n;
	cout << "请输入要计数的数字n：";
	cin >> n;
	(xxx + n).show( );
	(xxx - n).show( );
	return 0;
}
