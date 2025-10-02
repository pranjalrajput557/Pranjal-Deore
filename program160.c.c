#include <stdio.h>

int main() {
    int num, temp, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    for(; temp != 0;) {
        int rem = temp % 10;
        int fact = 1;
        for(int i=1; i<=rem; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if(sum == num) printf("%d is a Strong number\n", num);
    else printf("%d is not a Strong number\n", num);

    return 0;
}