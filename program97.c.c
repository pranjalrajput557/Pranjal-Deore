#include <stdio.h>
int main() {
    int battery = 100, used, remaining;
    printf("Enter battery used (%): ");
    scanf("%d", &used);

    remaining = battery - used;
    if(remaining > 50)
        printf("Battery sufficient: %d%% 🔋\n", remaining);
    else if(remaining > 20)
        printf("Battery low: %d%% ⚠\n", remaining);
    else if(remaining > 0)
        printf("Battery critical: %d%% ⚡\n", remaining);
    else
        printf("Battery empty! ❌\n");

    return 0;
}