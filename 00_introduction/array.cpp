#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main () {

    {
        // REGULAR ARRAYS
        // This is static, we decide the size of the array at compile-time.
        int ids[100];
    
        // for (int i=0; i < 100; i++) {
        //     ids[i] = i;
        // }
    
        std::iota(std::begin(ids), std::end(ids), 32);
        
        for (int i=0; i < 100; i++) {
            std::cout << ids[i] << std::endl;
        }
    }
    
    {
        // STD ARRAYS
        std::array<int,100> ids;

        std::iota(std::begin(ids), std::end(ids), 1);
        ids.at(100000) = 9;

        
    }
    

    return 0;
}