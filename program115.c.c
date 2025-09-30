#include <stdio.h>
int main() {
    int totalIncome, people;
    printf("Enter total income and number of people: ");
    scanf("%d %d", &totalIncome, &people);

    if(people <= 0)
        printf("Invalid number of people! ❌\n");
    else {
        float avgIncome = (float)totalIncome / people;
        printf("Average income = %.2f\n", avgIncome);

        if(avgIncome > 100000)
            printf("High average income! 💰\n");
        else if(avgIncome >= 50000)
            printf("Moderate average income. 👍\n");
        else
            printf("Low average income. 😅\n");
    }

    return 0;
}