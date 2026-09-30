#include <stdio.h>

int main() {
    float n1, n2, n3, avg;
    
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    avg = (n1 + n2 + n3) / 3.0;
    
    printf("Average: %.2f\n", avg);
    return 0;
}