#include <iostream>
#include <array>
#include <algorithm>

int main() {

    {
        std::array<int,3> arr2{1,3,5};
        
        for (int i=0; i<arr2.size(); i++) {
            std::cout << arr2[i] << std::endl;
        }
    }
    
    {
        // RANGE-BASED FOR LOOPS
        std::array<int,3> arr2{2,6,10};

        for (auto& element: arr2) { //the AUTO gets the type automatically, the '&' avoids creating copies if these elements (????)
            std::cout << element << std::endl;
        }

    }

    {
        // WHILE LOOPS
        int countdown = 3;
        while (countdown > 0) {
            std::cout << "Coutdown: " << countdown << std::endl;
            countdown--;
        }

    }

    {
        // FILL
        std::array<int,3> myArray;

        std::fill(std::begin(myArray), std::end(myArray), 1024);

        for (int element: myArray) {
            std::cout << element << std::endl;
        }
    }

    return 0;

}