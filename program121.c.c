#include <stdio.h>
int main() {
    double value = 1000000, rate = 10; // 10% yearly depreciation
    int years = 5;
    for(int y = 1; y <= years; y++) {
        value *= (1 - rate/100);
        printf("Year %d: Car Value = %.2f\n", y, value);
    }
    return 0;
}