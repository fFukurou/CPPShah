#include <iostream>

int y = 12;

int main() {
    
    {
        int x = 7;
    }

    // x = 42; THIS IS UNDEFINED;
    int x = 48;
    y = 55; // this is coming from the global 'y' variable;

    return 0;
}