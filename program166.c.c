#include <stdio.h>
int main() {
    int salary, bonus, totalIncome;
    printf("Enter salary and bonus: ");
    scanf("%d %d", &salary, &bonus);

    totalIncome = salary + bonus;
    printf("Total income = %d\n", totalIncome);

    if(totalIncome > 100000)
        printf("High income! 💰\n");
    else if(totalIncome >= 50000)
        printf("Moderate income. 👍\n");
    else
        printf("Low income. 😅\n");

    return 0;
}