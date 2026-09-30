#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Dividing by 3.0 converts the calculation to float to preserve decimals
    average = (num1 + num2 + num3) / 3.0;
    
    printf("The average is: %.2f\n", average);
    
    return 0;
}