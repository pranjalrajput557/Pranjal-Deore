#include <stdio.h>
int main() {
    int examTime = 180, elapsed, remaining;
    printf("Enter minutes elapsed: ");
    scanf("%d", &elapsed);

    remaining = examTime - elapsed;
    if(remaining > 60)
        printf("Plenty of time left: %d minutes.\n", remaining);
    else if(remaining > 0)
        printf("Hurry up! %d minutes left.\n", remaining);
    else
        printf("Time's up! ⏰\n");

    return 0;
}