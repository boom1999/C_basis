#include"Asprofessor.h"
#include"Asteacher.h"
#include"Professor.h"
#include<iostream>
using namespace std;

int main ()
{
	Professor A (30);
	Asprofessor B (20);
	Asteacher C (15);
    cout << "Professor A salary:" << A.getmoney () << endl;
	cout << "Asprofessor B salary:" << B.getmoney () << endl;
	cout << "Asteacher C salary:" << C.getmoney () << endl;
	return 0;
}