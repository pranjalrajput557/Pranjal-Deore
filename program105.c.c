#include <stdio.h>
int main() {
    int rate = 10, minutes, total;
    printf("Enter minutes exercised: ");
    scanf("%d", &minutes);

    total = rate * minutes;
    printf("Total calories burned = %d\n", total);

    if(total > 500)
        printf("High calorie burn! 🔥\n");
    else if(total >= 200)
        printf("Moderate burn. 👍\n");
    else
        printf("Low burn. 😅\n");

        return 0;}