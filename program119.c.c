#include <stdio.h>
int main() {
    int output, input;
    printf("Enter output and input of machine: ");
    scanf("%d %d", &output, &input);

    if(input <= 0)
        printf("Input must be positive! ❌\n");
    else {
        float efficiency = (float)output / input * 100;
        printf("Efficiency = %.2f%%\n", efficiency);

        if(efficiency > 80)
            printf("Highly efficient! ⚡\n");
        else if(efficiency >= 50)
            printf("Moderate efficiency. 👍\n");
        else
            printf("Low efficiency. 😅\n");
    }

    return 0;
}