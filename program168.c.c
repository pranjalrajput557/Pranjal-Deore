#include <stdio.h>
int main() {
    int part1, part2, totalTime;
    printf("Enter hours for first and second part of journey: ");
    scanf("%d %d", &part1, &part2);

    totalTime = part1 + part2;
    printf("Total journey time = %d hours\n", totalTime);

    if(totalTime > 10)
        printf("That's a long train journey! 🚆\n");
    else if(totalTime >= 5)
        printf("Moderate journey. ⏱\n");
    else
        printf("Short journey. 🛤\n");

    return 0;
}