#include<iostream>
#include<string>
#include<new>
using namespace std;
 

int main ()
{
    char* p;
    try {
        cout << "Trying to get a big block of memory:\n";
        p = new (nothrow)char[ 2000000000 ];
        if(p == 0)
            throw 1;
        cout << "Gor past the new request:\n";
    }
    catch(int i)
    {
        cout << "Caught the exception!\n";
    }
    return 0;

}