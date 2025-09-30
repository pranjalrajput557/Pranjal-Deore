#include <stdio.h>
int main() {
    int age1, age2, diff;
    printf("Enter ages of two people: ");
    scanf("%d %d", &age1, &age2);

    diff = age1 - age2;
    if(diff > 0)
        printf("Person 1 is older by %d years.\n", diff);
    else if(diff < 0)
        printf("Person 2 is older by %d years.\n", -diff);
    else
        printf("Both are of the same age! 🎉\n");

    return 0;
}