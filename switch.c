#include <stdio.h>

int main() {
    int day;
    
    // Input day number from the user
    printf("Enter a day number from 1 to 7: ");
    scanf("%d", &day);
    
    // Evaluate day using switch-case
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }
    
    return 0;
}