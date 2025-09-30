#include <stdio.h>
int main() {
    int totalUnits, days;
    printf("Enter total units produced and number of days: ");
    scanf("%d %d", &totalUnits, &days);

    if(days <= 0)
        printf("Number of days must be positive! ❌\n");
    else {
        float unitsPerDay = (float)totalUnits / days;
        printf("Units per day = %.2f\n", unitsPerDay);

        if(unitsPerDay > 100)
            printf("High productivity! 💪\n");
        else if(unitsPerDay >= 50)
            printf("Moderate productivity. 👍\n");
        else
            printf("Low productivity. 😅\n");
    }

    return 0;
}