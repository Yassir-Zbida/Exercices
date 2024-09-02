#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Accessing and printing array elements
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
