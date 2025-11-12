#include <stdio.h>
#include <string.h>



int main() {
    int a = 100;
    int b = 200;
    int c = 300;
    
    printf("Variable addresses:\n");
    printf("a (%d): %p\n", a, &a);
    printf("b (%d): %p\n", b, &b);
    printf("c (%d): %p\n", c, &c);
    
    printf("\nDemonstrating memory spill:\n");
    
    // Access memory around variable 'b'
    int* ptr = &b;
    
    printf("b[-1] (might be a): %d\n", ptr[-1]);
    printf("b[0]  (b itself):  %d\n", ptr[0]);
    printf("b[1]  (might be c): %d\n", ptr[1]);
    
    // Modify nearby memory
    ptr[-1] = 111;  // Might modify 'a'
    ptr[1] = 333;   // Might modify 'c'
    
    printf("\nAfter modification:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    
    return 0;
}
