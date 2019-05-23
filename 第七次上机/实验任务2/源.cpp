#include<iostream>
#include<string>
#include <stdlib.h>
#include <time.h>
#define STR_LEN 10
#define CHAR_MIN 'A'
#define CHAR_MAX 'Z' 
#define depth 20
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
    void pop ();
};

template<class T>
void Stack_<T>::pop ()
{
    if(sk ==0)
        cout << "Stack is already empty!" << endl;
    else
        cout<<(T)stack[ --sk ];
}

template<class T>
void Stack_<T>::push (T data)
{
    if(sk == depth)
        cout << "Stack is already full!" << endl;
    else
    {
        stack[ sk++ ] = data;
        cout << "stack[sk++] has been pushed!" << endl;
    }
}

int main ()
{
    srand (time (NULL));

    int n;
    cout << "������Ҫѹ��ջ�����ݸ���n��";
    cin >> n;
    cout << "����int���ԣ�" << endl;
    Stack_<int>example1;
    for(int i = 0; i < n; i++)
        example1.push (i);
    for(int i = 0; i < n; i++)
    {
        example1.pop ();
        cout << endl;
    }
    cout << "������long���ԣ�" << endl;
    Stack_<long>example2;
    for(int i = 0; i < n; i++)
        example2.push (long(i));
    for(int i = 0; i < n; i++)
    {
        example2.pop ();
        cout << endl;
    }
    cout << "�ַ�����string���ԣ�" << endl;
    Stack_<string>example3;
    for(int j =0; j <  n; j++)
    {
        char str[ STR_LEN + 1 ] = { 0 };
        int i;
        for(i = 0; i < STR_LEN; i++)
        {
            str[ i ] = rand () % (CHAR_MAX - CHAR_MIN + 1) + CHAR_MIN;
        }
        example3.push (string(str));
    }
    for(int i = 0; i < n; i++)
    {
        example3.pop ();
        cout << endl;
    }
    return 0;
}