#include <stdio.h>

int main() {
    float num, percentage;
    
    printf("Enter a float number: ");
    scanf("%f", &num);
    
    percentage = num * 0.10;
    
    // Note: Double %% is used to output a single literal '%' symbol
    printf("10%% of the number: %.2f\n", percentage);
    return 0;
}