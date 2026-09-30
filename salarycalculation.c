#include <stdio.h>

int main() {
    int role;
    double basicSalary, da, ta, hra, totalSalary;
    
    // User menu prompt
    printf("Enter 1 for Manager and 2 for Supervisor: ");
    scanf("%d", &role);
    
    switch (role) {
        case 1:
            basicSalary = 40000;
            da = basicSalary * 0.04;
            ta = basicSalary * 0.04;
            hra = basicSalary * 0.01;
            totalSalary = basicSalary + da + ta + hra;
            printf("Manager salary = %.2lf\n", totalSalary);
            break;
            
        case 2:
            basicSalary = 30000;
            da = basicSalary * 0.03;
            ta = basicSalary * 0.03;
            hra = basicSalary * 0.01;
            totalSalary = basicSalary + da + ta + hra;
            printf("Supervisor salary = %.2lf\n", totalSalary);
            break;
            
        default:
            printf("Invalid role.\n");
            break;
    }
    
    return 0;
}