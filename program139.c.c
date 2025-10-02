#include <stdio.h>
int main() {
    double deposit = 1000, balance = 0;
    int months = 12;
    for(int m = 1; m <= months; m++) {
        balance += deposit;
        printf("Month %d: Savings = %.2f\n", m, balance);
    }
    return 0;
}