#include <stdio.h>
int main() {
    int player1, player2, totalRuns;
    printf("Enter runs scored by two players: ");
    scanf("%d %d", &player1, &player2);

    totalRuns = player1 + player2;
    printf("Total runs scored = %d\n", totalRuns);

    if(totalRuns > 150)
        printf("Excellent batting! 🏏\n");
    else if(totalRuns >= 100)
        printf("Good batting. 👍\n");
    else
        printf("Poor performance. 😅\n");

    return 0;
}