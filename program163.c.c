#include <stdio.h>
int main() {
    int trip1, trip2, totalDistance;
    printf("Enter distance of Trip 1 and Trip 2 (km): ");
    scanf("%d %d", &trip1, &trip2);

    totalDistance = trip1 + trip2;
    printf("Total distance = %d km\n", totalDistance);

    if(totalDistance > 500)
        printf("That's a very long journey! 🚗💨\n");
    else if(totalDistance > 200)
        printf("Moderate distance traveled. 🛣\n");
    else
        printf("Short trip. 🏡\n");

    return 0;
}