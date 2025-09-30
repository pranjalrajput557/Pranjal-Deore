#include <stdio.h>
int main() {
    int totalWater, people;
    printf("Enter total water used (liters) and number of people: ");
    scanf("%d %d", &totalWater, &people);

    if(people <= 0)
        printf("Number of people must be positive! ❌\n");
    else {
        float perPerson = (float)totalWater / people;
        printf("Water usage per person = %.2f liters\n", perPerson);

        if(perPerson > 100)
            printf("High water usage! 💧⚠\n");
        else if(perPerson >= 50)
            printf("Moderate usage. 👍\n");
        else
            printf("Low water usage. 🌱\n");
    }

    return 0;
}