#include <stdio.h>
#include <math.h>
int main() {
    double principal = 10000, rate = 5; // 5% annual
    int years = 5;
    for(int y = 1; y <= years; y++) {
        principal *= (1 + rate/100);
        printf("Year %d: Balance = %.2f\n", y, principal);
    }
    return 0;
}