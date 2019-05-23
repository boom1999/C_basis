#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
void m_swap ( T& a,  T& b)
{
    cout <<"Former: "<< "a:" << a << ' ' << "b:" << b << endl;
    T c=b;
    b = a;
    a = c;
    cout << "Latter: " << "a:" << a << ' ' << "b:" << b << endl;
}

int main ()
{
    int i_a, i_b;
    double d_a, d_b;
    char c_a, c_b;
    cout << "Begin tests!" << endl;
    cout << "请输入整型a，b：" << endl;
    cin >> i_a >> i_b;
    m_swap (i_a, i_b);
    cout << "请输入双精度浮点型a，b：" << endl;
    cin >> d_a >> d_b;
    m_swap (d_a, d_b);
    cout << "请输入字符型a，b：" << endl;
    cin >> c_a >> c_b;
    m_swap (c_a, c_b);
    cout << "Tests ending!Bye!......." << endl;
    return 0;
}