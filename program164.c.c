#include <stdio.h>
int main() {
    int rice, sugar, total;
    printf("Enter cost of rice and sugar: ");
    scanf("%d %d", &rice, &sugar);

    total = rice + sugar;
    printf("Total bill = %d\n", total);

    if(total > 1000)
        printf("Wow! That's an expensive grocery. 🛒\n");
    else if(total > 500)
        printf("Moderate bill. 💵\n");
    else
        printf("Cheap and budget-friendly! 💰\n");

    return 0;
}