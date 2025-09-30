#include <stdio.h>
int main() {
    int distance, time;
    printf("Enter distance traveled (km) and time taken (h): ");
    scanf("%d %d", &distance, &time);

    if(time <= 0)
        printf("Invalid time! ❌\n");
    else {
        float speed = (float)distance / time;
        printf("Speed = %.2f km/h\n", speed);

        if(speed > 100)
            printf("Over-speeding! ⚠\n");
        else if(speed >= 60)
            printf("Normal speed. 👍\n");
        else
            printf("Slow speed. 🐢\n");
    }

    return 0;
}