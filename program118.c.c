#include <stdio.h>
int main() {
    int distance, time;
    printf("Enter total distance (km) and time (h): ");
    scanf("%d %d", &distance, &time);

    if(time <= 0)
        printf("Time must be positive! ❌\n");
    else {
        float avgSpeed = (float)distance / time;
        printf("Average speed = %.2f km/h\n", avgSpeed);

        if(avgSpeed > 100)
            printf("Fast trip! 🚗💨\n");
        else if(avgSpeed >= 60)
            printf("Normal speed. 👍\n");
        else
            printf("Slow trip. 🐢\n");
    }

    return 0;
}