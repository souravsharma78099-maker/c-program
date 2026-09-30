#include <stdio.h>

int main() {
    float num1, num2, prod;
    
    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);
    
    prod = num1 * num2;
    
    printf("Product: %.2f\n", prod);
    
    return 0;
}