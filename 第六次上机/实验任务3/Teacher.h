#pragma once
class Teacher
{
private:
	int num_class;
public:
	virtual int getmoney () = 0;
	int getNum_class ();
	Teacher ();
	Teacher (int );
	virtual ~Teacher ();
};

inline Teacher::Teacher (int num_class)
{
	this->num_class = num_class;
}
inline int Teacher::getNum_class ()
{
	return num_class;
}
Teacher::Teacher ()
{
	num_class = 0;
}


Teacher::~Teacher ()
{
}
