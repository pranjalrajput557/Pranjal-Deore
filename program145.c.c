#include <stdio.h>
int main() {
    int rate, minutes;
    printf("Enter calories burned per minute and minutes exercised: ");
    scanf("%d %d", &rate, &minutes);
    printf("Total calories burned = %d\n", rate * minutes);
return 0;
}