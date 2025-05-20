#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

void printVector(vector<int>& arr) {
    for (int element : arr) {
        cout << element << ", ";
    }        
    cout << endl;
}

void printList(list<int>& arr) {
    for (int element : arr) {
        cout << element << ", ";
    }        
    cout << endl;
}

int main() {
    list foo_list = {1, 2, 3, 4, 5};
    vector foo_vector = {10, 20, 30, 40, 50};

    printList(foo_list);
    printVector(foo_vector);
    return 0;
}