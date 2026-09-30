#include <stdio.h>

int main() {
    int day;
    
    // Input day number from the user
    printf("Enter a day number from 1 to 7: ");
    scanf("%d", &day);
    
    // Check day using if-else ladder
    if (day == 1) {
        printf("Sunday\n");
    } 
    else if (day == 2) {
        printf("Monday\n");
    } 
    else if (day == 3) {
        printf("Tuesday\n");
    } 
    else if (day == 4) {
        printf("Wednesday\n");
    } 
    else if (day == 5) {
        printf("Thursday\n");
    } 
    else if (day == 6) {
        printf("Friday\n");
    } 
    else if (day == 7) {
        printf("Saturday\n");
    } 
    else {
        printf("Invalid day number.\n");
    }
    
    return 0;
}