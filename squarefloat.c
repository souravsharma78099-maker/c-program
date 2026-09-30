#include <stdio.h>

int main() {
    float num, square;
    
    printf("Enter the float number: ");
    scanf("%f", &num);
    
    square = num * num;
    
    printf("Square: %.2f\n", square);
    return 0;
}