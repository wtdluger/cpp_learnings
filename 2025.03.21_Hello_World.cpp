#include <iostream>

// declare  functions other than main
void print_string(std::string str) {
    std::cout << str << std::endl;
}

int main() {
    std::string hw = "Hello, World!";
    std::cout << hw << " using std::cout"<< std::endl;
    std::printf("%s using printf \n", hw.c_str() );
    print_string(hw + " using user defined function");
    std::cout << std::endl << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    std::cout << "How old are you? ";
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
