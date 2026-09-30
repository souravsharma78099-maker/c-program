#include <stdio.h>

int main() {
    // Fixed values as written in the notes
    int a = 5;
    int b = 3;
    
    // Perform and print bitwise operations
    printf("a & b = %d\n", a & b);   // Bitwise AND
    printf("a | b = %d\n", a | b);   // Bitwise OR
    printf("~a = %d\n", ~a);         // Bitwise NOT
    printf("a ^ b = %d\n", a ^ b);   // Bitwise XOR
    
    return 0;
}