#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two integers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check if num1 is greater than or equal to num2
    if (num1 >= num2) {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
    
    // Check if num1 is less than or equal to num2
    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    }
    
    return 0;
}