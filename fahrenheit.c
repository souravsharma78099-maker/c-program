#include <stdio.h>

int main() {
    float celcius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celcius);

    // Formula to convert Celsius to Fahrenheit
    fahrenheit = (celcius * 9 / 5) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}