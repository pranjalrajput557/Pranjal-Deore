#include <stdio.h>
int main() {
    int pin=1234, entered, balance=5000, amount, choice;
    printf("Enter PIN: ");
    scanf("%d", &entered);

    if(entered!=pin) {
        printf("Wrong PIN\n");
        return 0;
    }

    printf("1.Check Balance 2.Withdraw 3.Deposit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Balance = %d\n", balance); break;
        case 2: printf("Enter amount: "); scanf("%d", &amount);
                if(amount<=balance) { balance-=amount; printf("Withdrawn. New balance=%d\n", balance);}
                else printf("Insufficient funds\n");
                break;
        case 3: printf("Enter amount: "); scanf("%d", &amount);
                balance+=amount;
                printf("Deposited. New balance=%d\n", balance);
                break;
        default: printf("Invalid\n");
    }
    return 0;
}
