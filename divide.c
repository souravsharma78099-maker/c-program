#include <stdio.h>

int main() {
    int num1;
    float result;
    
    printf("Enter an integer: ");
    scanf("%d", &num1);
    
    // Dividing by 2.0 preserves the decimal point
    result = num1 / 2.0;
    
    printf("Result: %.2f\n", result);
    
    return 0;
}