#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    
    // Check if x and y are different
    if (x != y) {
        printf("x and y are different.\n");
        
        // Nested check to see which one is larger
        if (x > y) {
            printf("x is greater than y.\n");
        } 
        else {
            printf("x is smaller than y.\n");
        }
    } 
    else {
        printf("x and y are equal.\n");
    }
    
    return 0;
}