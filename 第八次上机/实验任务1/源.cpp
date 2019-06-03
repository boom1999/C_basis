#include"Dog.h"
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    Dog dog1 (5, 10);
    ofstream ofile ("dog.txt", ios_base::out);
    ofile << dog1.getweight () << " " << dog1.getage ();
    ofile.close ();
    Dog dog2;
    int weight, age;
    ifstream ifile ("dog.txt", ios_base::in);
    ifile >> weight; ifile >> age;
    ifile.close ();
    dog2.setweight (weight);
    dog2.setage (age);
    cout << "dog2'weight:" << dog2.getweight () << '\n' << "dog2'age:" << dog2.getage () << endl;
    return 0;
}