#include <stdio.h>
int main() 
{
    int basket1, basket2;
    printf("Enter apples in Basket 1 and Basket 2: ");
    scanf("%d %d", &basket1, &basket2);
    printf("Total apples = %d\n", basket1 + basket2);
    return 0;
}