#include <stdio.h>
int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Sum = %d\n", a+b); break;
        case 2: printf("Difference = %d\n", a-b); break;
        case 3: printf("Product = %d\n", a*b); break;
        case 4: printf("Quotient = %d\n", a/b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}