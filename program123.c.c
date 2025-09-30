#include <stdio.h>
int main() {
    int part1, part2;
    printf("Enter hours for first and second part of journey: ");
    scanf("%d %d", &part1, &part2);
    printf("Total journey time = %d hours\n", part1 + part2);
    return 0;
}