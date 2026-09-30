#include <stdio.h>

int main() {
    int number;
    const char *answer;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Ternary operator structure: (condition) ? value_if_true : value_if_false
    answer = (number >= 0) ? "Positive" : "Negative";
    
    // Print the string result
    printf("%s\n", answer);
    
    return 0;
}