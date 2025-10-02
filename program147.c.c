#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Average = %.2f\n", (num1 + num2) / 2.0);
    return 0;
}