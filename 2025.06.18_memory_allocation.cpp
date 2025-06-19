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

    cout << "sizeof c-style 50 char unused string: " 
        << sizeof(c_fifty_unused) << endl;
    cout << "sizeof c-style 50 char string,"
        " 7 chars utilized: " << sizeof(c_fifty_used) << endl;
    cout << "sizeof c++ string array, 50 elements: " << sizeof(s_fifty) << endl;
    cout << "sizeof c++ string unused: " << sizeof(s_unused) << endl;
    cout << "sizeof c++ string, 7 chars long: " << sizeof(s_dynamic_assigned) << endl;
    cout << "sizeof c++ string, defined with 7 chars, reassigned 3 chars: " <<
        sizeof(s_dynamic_reassigned1) << endl;
    cout << "sizeof c++ string, defined with 3 chars, reassigned 7 chars: " <<
        sizeof(s_dynamic_reassigned2) << endl;
    
    return 0;
}