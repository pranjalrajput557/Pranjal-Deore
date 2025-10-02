#include <stdio.h>
int main() {
    int distance, time;
    printf("Enter distance (km) and time (h): ");
    scanf("%d %d", &distance, &time);
    if(time != 0)
        printf("Speed = %.2f km/h\n", (float)distance / time);
    else
        printf("Time cannot be zero!\n");
    return 0;
}