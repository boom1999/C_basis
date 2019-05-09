#include"Date.h"
int main()
{
	Date Now;
	Date Then;
	int a, b, c, x, y, z;
	cout << "请输入NOW的年月日：";
	cin >> a >> b >> c;
	Now.setyear(a); Now.setmoth(b); Now.setday(c);
	cout << "请输入THEN的年月日：";
	cin >> x >> y >> z;
	Then.setyear(x); Then.setmoth(y); Then.setday(z);
	cout << "Now date:"; Now.show();
	cout << "Then date:"; Then.show();
	cout << "相差天数为：" << (Now - Then) << endl;
	Date date1 = Now + 1111;
	Date date2 = Now - 1111;
	cout << "Now +1111 date:"; date1.show();
	cout << "Now -1111 date:"; date2.show();
	return 0;
}