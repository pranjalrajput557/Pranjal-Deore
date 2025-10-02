#include <stdio.h>
int main() {
    int teamA, teamB, totalGoals;
    printf("Enter goals scored by Team A and Team B: ");
    scanf("%d %d", &teamA, &teamB);

    totalGoals = teamA + teamB;
    printf("Total goals = %d\n", totalGoals);

    if(totalGoals >= 5)
        printf("High scoring match! ⚽🔥\n");
    else if(totalGoals >= 3)
        printf("Good match. ⚽\n");
    else
        printf("Low scoring match. 😐\n");

    return 0;
}