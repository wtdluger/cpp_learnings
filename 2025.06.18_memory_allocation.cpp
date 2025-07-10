#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c_fifty_unused[50];
    char c_fifty_used[50] = "Foo Bar";
    std::string s_fifty[50];
    std::string s_unused;
    std::string s_dynamic_assigned = "Foo Bar";
    std::string s_dynamic_reassigned1 = "Foo Bar";
    s_dynamic_reassigned1 = "Foo";
    std::string s_dynamic_reassigned2 = "Foo";
    s_dynamic_reassigned2 = "Foo Bar";
    std::string long_string = "abcdefghijklmnopqrstuvwxy1234567890z";

    cout << "sizeof c-style 50 char unused string: " 
        << sizeof(c_fifty_unused) << endl;
    cout << "sizeof its reference: " << sizeof(&c_fifty_unused) << endl << endl;
    
    cout << "sizeof c-style 50 char string,"
        " 7 chars utilized: " << sizeof(c_fifty_used) << endl;
    cout << "sizeof its reference: " << sizeof(&c_fifty_used) << endl << endl;
    
    cout << "sizeof c++ string array, 50 elements: " << sizeof(s_fifty) << endl;
    cout << "sizeof its reference: " << sizeof(&s_fifty) << endl << endl;
    
    cout << "sizeof c++ string unused: " << sizeof(s_unused) << endl;
    cout << "sizeof its reference: " << sizeof(&s_unused) << endl << endl;
    
    cout << "sizeof c++ string, 7 chars long: " << sizeof(s_dynamic_assigned) << endl;
    cout << "sizeof its reference: " << sizeof(&s_dynamic_assigned) << endl << endl;
    
    cout << "sizeof c++ string, defined with 7 chars, reassigned 3 chars: " <<
        sizeof(s_dynamic_reassigned1) << endl;
    cout << "sizeof its reference: " << sizeof(&s_dynamic_reassigned1) << endl << endl;
    
    cout << "sizeof c++ string, defined with 3 chars, reassigned 7 chars: " <<
        sizeof(s_dynamic_reassigned2) << endl;
    cout << "sizeof its reference: " << sizeof(&s_dynamic_reassigned2) << endl << endl;

    cout << "sizeof c++ string, 36 chars long: " << sizeof(long_string) << endl;
    cout << "sizeof its reference: " << sizeof(&long_string) << endl;
    cout << long_string << endl;
    return 0;
}