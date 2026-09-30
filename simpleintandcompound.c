#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    double simpleInterest, compoundInterest;
    
    // Input parameters
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    
    // Calculate interests
    simpleInterest = (p * r * t) / 100.0;
    compoundInterest = p * pow((1 + r / 100.0), t) - p;
    
    // Output results
    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);
    
    return 0;
}