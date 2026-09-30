#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 4;
    // Type casting to float ensures accurate decimal division
    float result = (float)num1 / num2;
    
    printf("Quotient: %.2f\n", result);
    return 0;
}