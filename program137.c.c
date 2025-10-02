#include <stdio.h>
int main() {
    double sip = 2000, rate = 1; // 1% monthly growth
    int months = 12;
    double total = 0;
    for(int m = 1; m <= months; m++) {
        total = (total + sip) * (1 + rate/100);
        printf("Month %d: Value = %.2f\n", m, total);
    }
    return 0;
}