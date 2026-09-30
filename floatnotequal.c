#include <stdio.h>

int main() {
    float num1, num2;
    
    // Input two float numbers from the user
    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);
    
    // Check if the numbers are not equal
    if (num1 != num2) {
        printf("The float numbers are not equal.\n");
    } 
    else {
        printf("The float numbers are equal.\n");
    }
    
    return 0;
}