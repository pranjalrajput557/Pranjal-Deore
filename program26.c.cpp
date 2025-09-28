#include <stdio.h>
int main() {
    char op;
    int a, b;
    do {
        printf("Enter expression (a + b): ");
        scanf("%d %c %d", &a, &op, &b);

        switch(op) {
            case '+': printf("= %d\n", a+b); break;
            case '-': printf("= %d\n", a-b); break;
            case '*': printf("= %d\n", a*b); break;
            case '/': printf("= %d\n", a/b); break;
            default: printf("Invalid\n");
        }
        printf("Do another (y/n)? ");
        scanf(" %c", &op);
    } while(op=='y' || op=='Y');
    return 0;
}