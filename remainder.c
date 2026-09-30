#include <stdio.h>

int main() {
    int num1, num2, remainder;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check to prevent division by zero
    if (num2 != 0) {
        remainder = num1 % num2;
        printf("Remainder = %d\n", remainder);
    } else {
        printf("Error: Division by zero is not allowed\n");
    }
    
    return 0;
}