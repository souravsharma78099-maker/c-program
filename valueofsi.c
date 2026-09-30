#include <stdio.h>
#define SI 3.14

int main() {
    float radius = 5.0;
    float area = SI * radius * radius;

    printf("Value of SI: %.2f\n", SI);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}