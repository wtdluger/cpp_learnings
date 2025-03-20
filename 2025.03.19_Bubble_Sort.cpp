#include <iostream>

int main() {
    unsigned int the_list[] = {5, 1, 4, 10, 110, 2, 100}; // elements must be > 0
    std::cout << "0) ";
    for (int i = 0; i < std::end(the_list)-std::begin(the_list); i++) {
        std::cout << the_list[i] << ", ";
    }
    std::cout << std::endl;

    int if_sorted = 0; // -1 if the list is sorted, a whole number if sorting still needs to occur
    int counter = 0;

    // loop only runs if the list is not completely sorted
    while (if_sorted >= 0) {
        // compare an element in the list with the element that follows it.  
        // Swap the two elements if necessary
        for (unsigned int x=0; x<(std::end(the_list)-std::begin(the_list))-1; x++) {
            if (the_list[x] >= the_list[x + 1]) {
                std::swap(the_list[x], the_list[x + 1]);
                if_sorted++;
                counter++;
                
                std::cout << counter << ") ";
                for (int i = 0; i <= std::end(the_list)-std::begin(the_list)-1; i++) {
                    std::cout << the_list[i] << ", ";
                }
                std::cout << std::endl;
            }

            // Check if any sorting occurred. Reset if_sorted counter appropriately.
            if (if_sorted > 0) {
                if_sorted = 0;
            }
            else {
                for (unsigned int x=0; x<(std::end(the_list)-std::begin(the_list))-1; x++) {
                    if (the_list[x] >= the_list[x + 1]) {
                        std::swap(the_list[x], the_list[x + 1]);
                        if_sorted++;
                        counter++;
                        
                        std::cout << counter << ") ";
                        for (int i = 0; i <= std::end(the_list)-std::begin(the_list)-1; i++) {
                            std::cout << the_list[i] << ", ";
                        }
                        std::cout << std::endl;
                    }
                }
                if_sorted = -1;
            }
        }
    }
    return 0;
}