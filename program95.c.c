#include <stdio.h>
int main() {
    int goal = 10000, walked, remaining;
    printf("Enter steps already walked: ");
    scanf("%d", &walked);

    remaining = goal - walked;
    if(remaining > 5000)
        printf("Long way to go! %d steps left. 🏃\n", remaining);
    else if(remaining > 0)
        printf("Almost there! %d steps left. 👍\n", remaining);
    else
        printf("Goal achieved! 🎉\n");

    return 0;
}