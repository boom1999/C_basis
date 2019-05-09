#include "Employee.h"



Employee::Employee( )
{
	name = "xxx";
	location = "xxxx";
	city = "xxxxxx";
	postcode = "xxxxxx";
}

Employee::Employee(const Employee& exem)
{
	name = exem.name;
	location = exem.location;
	city = exem.city;
	postcode = exem.postcode;
}


Employee::~Employee( )
{
}

void Employee::setname( )
{
	cout << "请输入此employee的信息：\n";
	cout << "name:";
	cin >> name;
	cout << "location:";
	cin >> location;
	cout << "city";
	cin >> city;
	cout << "postcode:";
	cin >> postcode;
}

void Employee::display( )
{
	cout << "This employee\n"<<"name:" << name << "  location:" << location 
		    << "  city:" << city << "  postcode:" << postcode << endl;
}
