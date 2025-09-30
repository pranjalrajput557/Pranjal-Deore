#include <stdio.h>
int main() {
    int totalCost, quantity;
    printf("Enter total cost and quantity of items: ");
    scanf("%d %d", &totalCost, &quantity);

    if(quantity <= 0)
        printf("Quantity must be positive! ❌\n");
    else {
        float costPerItem = (float)totalCost / quantity;
        printf("Cost per item = %.2f\n", costPerItem);

        if(costPerItem > 1000)
            printf("Expensive item! 💸\n");
        else if(costPerItem >= 500)
            printf("Moderately priced. 👍\n");
        else
            printf("Cheap item. 🏷\n");
    }

    return 0;
}