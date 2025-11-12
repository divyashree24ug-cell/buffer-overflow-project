#include <stdio.h>

int main() {
    int array1[3] = {10, 20, 30};
    int array2[3] = {40, 50, 60};
    
    printf("Before overflow:\n");
    printf("array1: %d, %d, %d\n", array1[0], array1[1], array1[2]);
    printf("array2: %d, %d, %d\n", array2[0], array2[1], array2[2]);
    
    // Intentionally access beyond array1 bounds
    printf("\nAccessing array1[3] (out of bounds): %d\n", array1[3]);
    printf("Accessing array1[4] (out of bounds): %d\n", array1[4]);
    
    // Modify memory beyond array1
    array1[3] = 999;
    array1[4] = 888;
    
    printf("\nAfter overflow:\n");
    printf("array1: %d, %d, %d\n", array1[0], array1[1], array1[2]);
    printf("array2: %d, %d, %d\n", array2[0], array2[1], array2[2]);
    
    return 0;
}

