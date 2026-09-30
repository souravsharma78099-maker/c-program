#include <stdio.h>

int main() {
    float num1, num2, diff;
    
    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);
    
    diff = num1 - num2;
    
    printf("Difference: %.2f\n", diff);
    
    return 0;
}