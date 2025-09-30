#include <stdio.h>
int main() {
    int cost, paid;
    printf("Enter cost of item and money paid: ");
    scanf("%d %d", &cost, &paid);
    printf("Change to return = %d\n", paid - cost);
    return 0;
}