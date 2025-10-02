#include <stdio.h>
int main() {
    double price = 100, rate = 6; // 6% yearly inflation
    int years = 5;
    for(int y = 1; y <= years; y++) {
        price *= (1 + rate/100);
        printf("Year %d: Price = %.2f\n", y, price);
    }
    return 0;
}