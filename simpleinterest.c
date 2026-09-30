#include <stdio.h>

int main() {
    double principal, rate, time, simple_interest;
    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%lf", &time);
    
    simple_interest = (principal * rate * time) / 100.0;
    
    printf("The Simple Interest is: %.2lf", simple_interest);
    return 0;
}