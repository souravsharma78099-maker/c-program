#include <stdio.h>

int main() {
    const double PI = 3.14123;
    double radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    area = PI * radius * radius;
    
    printf("The area of the circle is: %.2lf", area);
    return 0;
}