#include <stdio.h>
int main() {
    int totalCost, quantity;
    printf("Enter total cost and quantity: ");
    scanf("%d %d", &totalCost, &quantity);
    if(quantity != 0)
        printf("Unit price = %.2f\n", (float)totalCost / quantity);
    else
        printf("Quantity cannot be zero!\n");
    return 0;
}