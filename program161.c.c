#include <stdio.h>
int main() {
    int totalScore, games;
    printf("Enter total score and number of games: ");
    scanf("%d %d", &totalScore, &games);
    if(games != 0)
        printf("Average score per game = %.2f\n", (float)totalScore / games);
    else
        printf("Games cannot be zero!\n");
    return 0;
}