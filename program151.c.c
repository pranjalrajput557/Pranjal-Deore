#include <stdio.h>
int main() {
    int totalDistance, days;
    printf("Enter total distance and number of days: ");
    scanf("%d %d", &totalDistance, &days);
    if(days != 0)
        printf("Distance per day = %.2f km\n", (float)totalDistance / days);
    else
        printf("Days cannot be zero!\n");
    return 0;
}