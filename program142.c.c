#include <stdio.h>
int main() {
    int cost, items;
    printf("Enter cost of one item and number of items: ");
    scanf("%d %d", &cost, &items);
    printf("Total cost = %d\n", cost * items);
return 0;
}