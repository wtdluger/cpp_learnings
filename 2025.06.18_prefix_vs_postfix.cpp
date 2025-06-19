#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, prefix, postfix;
    
    a = 101;
    cout << "a = " << a << endl;
    postfix = a++;
    cout << "postfix = a++ = " << postfix << endl;
    cout << "a =  " << a << endl;
    cout << "----------------------" << endl;
    
    a = 101;
    cout << "a = " << a << endl;
    prefix = ++a;
    cout << "prefix = ++a = " << prefix << endl;
    cout << "a = " << a << endl;
    cout << "----------------------" << endl;
    
    a = 101;
    cout << "a = " << a << endl;
    postfix = a--;
    cout << "postfix = a-- = " << postfix << endl;
    cout << "a = " << a << endl;
    cout << "----------------------" << endl;

    a = 101;
    cout << "a = " << a << endl;
    prefix = --a;
    cout << "prefix = --a = " << prefix << endl;
    cout << "a = " << a << endl;
    cout << "----------------------" << endl;
    
    return 0;
}