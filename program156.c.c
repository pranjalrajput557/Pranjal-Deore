#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a=0, b=1;
    printf("Fibonacci series: ");
    for(int i=1; i<=n; i++) {
        printf("%d ", a);
        int next = a+b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}