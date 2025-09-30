#include <stdio.h>
int main() {
    int loan, paid;
    printf("Enter total loan and amount paid: ");
    scanf("%d %d", &loan, &paid);
    printf("Remaining balance = %d\n", loan - paid);
    return 0;
}