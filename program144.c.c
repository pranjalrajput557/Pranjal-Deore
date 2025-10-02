#include <stdio.h>
int main() {
    int force, distance;
    printf("Enter force and distance: ");
    scanf("%d %d", &force, &distance);
    printf("Work done = %d Joules\n", force * distance);
return 0;
}