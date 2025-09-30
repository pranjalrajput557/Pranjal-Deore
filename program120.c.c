#include <stdio.h>
int main() {
    int totalScore, games;
    printf("Enter total score and number of games: ");
    scanf("%d %d", &totalScore, &games);

    if(games <= 0)
        printf("Number of games must be positive! ❌\n");
    else {
        float avgScore = (float)totalScore / games;
        printf("Average score per game = %.2f\n", avgScore);

        if(avgScore > 50)
            printf("Excellent performance! 🏅\n");
        else if(avgScore >= 20)
            printf("Good performance. 👍\n");
        else
            printf("Needs improvement. 😅\n");
    }

    return 0;
}