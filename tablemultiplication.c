#include <stdio.h>

int main() {
    int m, i;
    
    // Input the target number
    printf("Enter a number: ");
    scanf("%d", &m);
    
    // Loop to print rows 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", m, i, m * i);
    }
    
    return 0;
}