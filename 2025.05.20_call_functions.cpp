#include <iostream>
#include <vector>
#include "wtdlib.h"
using namespace std;

int main() {
    int i = 1000;
    vector v = {1, 2, 3, 4, 5};
    cout << "Hello" << endl;
    timer(i);
    cout << "Good bye" << endl;
    printVector(v);
    return 0;
}

/*
    linux command to compile linked files
    g++ 2025.05.20_call_functions.cpp wtdlib.cpp -o call_functions

    linux command to run
    ./call_functions
*/
