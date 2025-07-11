#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include <string>
#include<vector>
#include "wtdlib.h"
using std::cin;
using std::cout;
using std::endl;

const double PI = 4.0*std::atan(1.0);
const double EULERNUM = std::exp(1.0);

int main()
{

    // read AM1.5G
    std::string csv_file = "AM1_5G.csv";
    std::vector<std::vector<std::string>> csv_data = readCSV(csv_file);

    cout << "Size of csv_data: " << sizeof(csv_data) << endl;
    
    // rename header row
    csv_data[0] = {"Wavelength","AM1.5E","AM1.5G","AM1.5D","\n"};

    std::string outputFileName = "example_cr&W.txt";
    writeCSV(csv_data, outputFileName);
    
    return 0;
}

/*
    linux command to compile linked files
    g++ 2025.07.10_call_read_and_write.cpp wtdlib.cpp -o call_read_and_write

    linux command to run
    ./call_read_and_write
*/