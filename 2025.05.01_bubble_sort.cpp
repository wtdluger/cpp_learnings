#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;


void printList(vector<int>& arr) {
    for (int element : arr) {
        std::cout << element << ", ";
    }        
    cout << endl;
}

void bubbleSort(std::vector<int>& arr, bool printIterations=true) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                if (printIterations) {
                    printList(arr);
                }
            }
        }
    }
}

int main() {
    std::vector<int> the_list = {}; // elements must be > 0 
    cout << "Input Numbers for the list.";
    cout << endl << "Input a char/string to begin sorting the list." << endl;
    bool continueSorting = true;
    while (continueSorting) {
        int x;
        string strX;
        cin >> strX;
        try {
            x = stoi(strX);
            the_list.push_back(x);
        } catch (const std::invalid_argument& ia) {
            continueSorting = false;
        }

    }
    cout << "Sorting the list..." << endl;
    printList(the_list);
    bubbleSort(the_list, true);
    printList(the_list);
    return 0;
}