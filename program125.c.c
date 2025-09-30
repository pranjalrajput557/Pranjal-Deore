#include <stdio.h>
int main() {
    int morning, evening;
    printf("Enter pages read in morning and evening: ");
    scanf("%d %d", &morning, &evening);
    printf("Total pages read = %d\n", morning + evening);
    return 0;
}