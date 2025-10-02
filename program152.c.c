#include <stdio.h>
int main() {
    int totalCalories, minutes;
    printf("Enter total calories burned and minutes exercised: ");
    scanf("%d %d", &totalCalories, &minutes);
    if(minutes != 0)
        printf("Calories burned per minute = %.2f\n", (float)totalCalories / minutes);
    else
        printf("Minutes cannot be zero!\n");
    return 0;
}