#include <stdio.h>
int main() {
    double balance = 5000, rate = 3; // 3% monthly
    int months = 6;
    for(int m = 1; m <= months; m++) {
        balance *= (1 + rate/100);
        printf("Month %d: Outstanding = %.2f\n", m, balance);
    }
    return 0;
}