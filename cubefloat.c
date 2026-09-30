#include <stdio.h>

int main() {
    float num, cube;
    
    printf("Enter a float number: ");
    scanf("%f", &num);
    
    cube = num * num * num;
    
    printf("Cube: %.2f\n", cube);
    return 0;
}