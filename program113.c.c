#include <stdio.h>
int main() {
    int totalHours, employees;
    printf("Enter total work hours and number of employees: ");
    scanf("%d %d", &totalHours, &employees);

    if(employees <= 0)
        printf("Number of employees must be positive! ❌\n");
    else {
        float hoursPerEmployee = (float)totalHours / employees;
        printf("Hours per employee = %.2f\n", hoursPerEmployee);

        if(hoursPerEmployee > 10)
            printf("Heavy workload! ⚠\n");
        else if(hoursPerEmployee >= 5)
            printf("Moderate workload. 👍\n");
        else
            printf("Light workload. 😌\n");
    }

    return 0;
}