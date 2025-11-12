#include <stdio.h>
#include <string.h>

int main() {
    char buffer1[10] = "Hello";
    char buffer2[10] = "World";
    
    printf("Before overflow:\n");
    printf("buffer1: %s\n", buffer1);
    printf("buffer2: %s\n", buffer2);
    
    // This will overflow buffer1 and corrupt buffer2
    strcpy(buffer1, "ThisStringIsTooLong");
    
    printf("\nAfter overflow:\n");
    printf("buffer1: %s\n", buffer1);
    printf("buffer2: %s\n", buffer2);

    return 0;
}

