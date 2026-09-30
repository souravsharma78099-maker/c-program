#include <stdio.h>

int main() {
    int num1, num2, num3, product;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    product = num1 * num2 * num3;
    
    printf("The product is: %d\n", product);
    
    return 0;
}