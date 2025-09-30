#include <stdio.h>
int main() {
    int startTime = 60, elapsed, remaining;
    printf("Enter elapsed seconds: ");
    scanf("%d", &elapsed);

    remaining = startTime - elapsed;
    if(remaining > 30)
        printf("Plenty of time: %d seconds left.\n", remaining);
    else if(remaining > 0)
        printf("Time running out: %d seconds left! ⏳\n", remaining);
    else
        printf("Time over! ❌\n");

    return 0;
}