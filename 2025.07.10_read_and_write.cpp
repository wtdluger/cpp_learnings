#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include <string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;

const double PI = 4.0*std::atan(1.0);
const double EULERNUM = std::exp(1.0);

/* read a csv file */
std::vector<std::vector<std::string>> readCSV(std::string file_loc)
{
    std::ifstream file(file_loc);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Could not open the file.");
    }
    std::string line;
    std::vector<std::vector<std::string>> csv_data; // To store all data

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string field;
        std::vector<std::string> row_data;

        while (std::getline(ss, field, ',')) {
            row_data.push_back(field);
        }
        csv_data.push_back(row_data);
    }
    // close the file when done reading to save resources
    file.close();
    return csv_data;
}

/* write to csv file */
void writeCSV(
    std::vector<std::vector<std::string>> csv_data, 
    std::string outputFileName
){
// If it exists, its content will be truncated (cleared) by default.
    std::ofstream outFile(outputFileName);

    // Check if the file was opened successfully
    if (outFile.is_open()) {
        for (const auto& row : csv_data) 
        {
            for (const auto& field : row) {
                outFile << field << "\t";
            }
        }

        // Close the file when done writing to release resources
        outFile.close();
        std::cout << "Data successfully written to example.txt" << std::endl;
    } else {
        // Handle the error if the file could not be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}


int main()
{
    // read AM1.5G
    std::string csv_file = "AM1_5G.csv";
    std::vector<std::vector<std::string>> csv_data = readCSV(csv_file);

    cout << "Size of csv_data: " << sizeof(csv_data) << endl;
    
    // rename header row
    csv_data[0] = {"Wavelength","AM1.5E","AM1.5G","AM1.5D","\n"};
    
    std::string outputFileName = "example_r&w.txt";
    writeCSV(csv_data, outputFileName);
    
    return 0;
}

/*
    linux command to compile linked files
    g++ 2025.07.10_read_and_write.cpp -o read_and_write

    linux command to run
    ./call_read_and_write
*/