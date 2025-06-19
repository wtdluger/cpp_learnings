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

/*
    prefix vs postfix order of operations:
    postfix = a++
        1) postfix = a
        2) a = a + 1
    prefix = ++a
        1) a = a + 1
        2) prefix = a
    postfix = a--
        1) postfix = a
        2) a = a - 1
    prefix = a--
        1) a = a - 1
        2) postfix = a
*/