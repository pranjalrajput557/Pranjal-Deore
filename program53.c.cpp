
#include <stdio.h>
int main() {
    int years;
    printf("Enter your age in years: ");
    scanf("%d", &years);
    printf("You lived approximately %d days\n", years*365);
    return 0;
}