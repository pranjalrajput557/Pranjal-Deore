#include <stdio.h>
int main() {
    int goal = 10000;
    int walked;
    printf("Enter steps already walked: ");
    scanf("%d", &walked);
    printf("Steps remaining = %d\n", goal - walked);
    return 0;
}