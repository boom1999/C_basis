#include"Date.h"
int main()
{
	Date Now;
	Date Then;
	int a, b, c, x, y, z;
	cout << "������NOW�������գ�";
	cin >> a >> b >> c;
	Now.setyear(a); Now.setmoth(b); Now.setday(c);
	cout << "������THEN�������գ�";
	cin >> x >> y >> z;
	Then.setyear(x); Then.setmoth(y); Then.setday(z);
	cout << "Now date:"; Now.show();
	cout << "Then date:"; Then.show();
	cout << "�������Ϊ��" << (Now - Then) << endl;
	Date date1 = Now + 1111;
	Date date2 = Now - 1111;
	cout << "Now +1111 date:"; date1.show();
	cout << "Now -1111 date:"; date2.show();
	return 0;
}