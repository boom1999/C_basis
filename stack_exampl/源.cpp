#include<iostream>
#include<string>
#define depth 100
using namespace std;

template<class T>
class Stack_
{
private:
    int sk;
    T stack[ depth ];
public:
    Stack_ () { sk = 0; }
    void push (T data);
    T pop ();
};

template<class T>
T Stack_<T>::pop ()
{
    if(sk == 0)
        cout << "Stack is empty!" << endl;
    else
        return stack[ --sk ];
    return 0;
}

template<class T>
void Stack_<T>::push (T data)
{
    if(sk == depth)
        cout << "Stack is full" << endl;
    else
        stack[ sk++ ] = data;
}

int main ()
{
    Stack_<int>example;
    for(int i = 0; i < 5; i++)
        example.push (i);
    for(int i = 0; i < 5; i++)
       cout<<example.pop ();
    return 0;
}

