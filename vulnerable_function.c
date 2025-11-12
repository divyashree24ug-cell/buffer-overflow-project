#include <stdio.h>

void vulnerable_function() {
    int secret = 42;
    char buffer[5];

    printf("Secret value: %d\n", secret);
    printf("Secret address: %p\n", (void*)&secret);
    printf("Buffer address: %p\n", (void*)buffer);

    // Use fgets instead of gets for safe input
    printf("Enter text: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("\nAfter potential overflow:\n");
    printf("Secret value: %d\n", secret);
    printf("Buffer content: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}

