#include <stdio.h>

int main() {
    int number;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the remainder is 0 when divided by 2
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } 
    else {
        printf("%d is odd.\n", number);
    }
    
    return 0;
}