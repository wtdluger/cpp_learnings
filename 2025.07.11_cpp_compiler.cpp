#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void cppCompiler();
void cppStandard();

int main()
{   
    cppCompiler();
    cppStandard();

    return 0;
}

void cppCompiler() {
    cout << "Compiler Information:" << endl;
    #if defined(__GNUC__) && !defined(__clang__)
        cout << "    GCC (GNU Compiler Collection)" << endl;
        
        cout << "    Version: " << __GNUC__ << ".";
        cout << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << endl;
    #elif defined(__clang__)
        cout << "    Clang" << endl;
    
        cout << "    Version: " << __clang_major__ << ".";
        cout << __clang_minor__ << "." << __clang_patchlevel__ << endl;
    #elif defined(_MSC_VER)
        cout << "    Microsoft Visual C++" << endl;
        cout << "    Version: " << _MSC_VER << endl;
        // For C++ standard version in MSVC, use _MSVC_LANG with /Zc:__cplusplus
        #if defined(_MSVC_LANG)
            cout << "    C++ Standard Version (via _MSVC_LANG): " << _MSVC_LANG << endl;
        #endif
    #else
        cout << "    Unknown Compiler" << endl;
    #endif
}

void cppStandard() {
    switch (__cplusplus) {
        case 202302L:
            cout << "C++23 Standard";
            break;
        case 202100L:
            cout << "Partial C++23";
            break;
        case 202002L:
            cout << "C++20 Standard";
            break;
        case 201703L:
            cout << "C++17 Standard";
            break;
        case 201402L:
            cout << "C++14 Standard";
            break;
        case 201103L:
            cout << "C++11 Standard";
            break;
        case 199711L:
            cout << "C++98 Standard";
            break;
        default:
            cout << "pre-standard C++";
            break;
    }
    cout << " implemented" << endl;
    cout << "    Standard Macro __cplusplus = " << __cplusplus << "L" << endl;
}



/*
    linux command to compile linked files
    g++ template.cpp wtdlib.cpp -o template -std=c++20

    linux command to run
    ./template
*/