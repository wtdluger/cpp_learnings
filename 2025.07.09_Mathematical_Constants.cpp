// Compile in C++20

#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<iomanip>
#include<numbers> // C++17 does not have this
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int precision = 50;
    // C++20
    cout << "std::numbers::pi = " << std::setprecision(precision) << std::numbers::pi << endl;;
    cout << "std::numbers::e  = " << std::setprecision(precision) << std::numbers::e << endl;

    // C++17, C (maybe older versions of C++)
    cout << "M_PI = \t\t" << std::setprecision(precision) << M_PI << endl;
    cout << "M_E = \t\t" << std::setprecision(precision) << M_E << endl;

    // calculated
    cout << "2acos(0) = \t" << std::setprecision(precision) << 2.0*std::acos(0.0) << endl;
    cout << "4atan(1) = \t" << std::setprecision(precision) << 4.0*std::atan(1.0) << endl;
    cout << "exp(1) = \t" << std::setprecision(precision) << std::exp(1.0) << endl;
    // I remember pi = 4*atan(1) and taylor series from Calc II
    
    // write it out
    double PI = 3.14159265358979323846;
    double EULERNUM = 2.71828182845904523536;    
    cout << "pi = \t\t" << std::setprecision(precision) << PI << endl;
    cout << "e = \t\t" << std::setprecision(precision) << EULERNUM << endl;
    
    return 0;
}
/*
    To compile code with C++20
    g++ 2025.07.09_Mathematical_Constants.cpp -o Mathematical_Constants -std=c++20

    linux command to run
    ./Mathematical_Constants

    Version Free way to use constants: define via calculations
        const double PI = 4*atan(1);
        const double EULERNUM = exp(1);
*/