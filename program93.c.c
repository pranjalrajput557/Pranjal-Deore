#include <stdio.h>
int main() {
    int month1, month2;
    printf("Enter units consumed in Month 1 and Month 2: ");
    scanf("%d %d", &month1, &month2);
    printf("Total units consumed = %d\n", month1 + month2);
    return 0;
}