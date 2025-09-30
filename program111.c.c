#include <stdio.h>
int main() {
    int totalTime = 180; // movie is 3 hours
    int watched;
    printf("Enter time already watched (in minutes): ");
    scanf("%d", &watched);
    printf("Time left = %d minutes\n", totalTime - watched);
    return 0;
}