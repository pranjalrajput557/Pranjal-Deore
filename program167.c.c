#include <stdio.h>
int main() {
    int basket1, basket2, total;
    printf("Enter apples in Basket 1 and Basket 2: ");
    scanf("%d %d", &basket1, &basket2);

    total = basket1 + basket2;
    printf("Total apples = %d\n", total);

    if(total > 50)
        printf("Plenty of apples! 🍎🍎\n");
    else if(total >= 20)
        printf("Enough for a small group. 🍏\n");
    else
        printf("Too few apples. 😟\n");

    return 0;
}